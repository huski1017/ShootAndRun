//
// SetGame.cpp for ShootAndRun in /home/wroble_h/rendu/tek2/cpp_va
// 
// Made by Hubert WROBLEWSKI
// Login   <wroble_h@epitech.eu>
// 
// Started on  Thu Jun 30 19:54:05 2016 Hubert WROBLEWSKI
// Last update Sun Jul  3 22:23:07 2016 Hubert WROBLEWSKI
//

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Game.hh"

static int	createGraph(Game *game, sf::Music *music)
{
  if (!music->openFromFile("music/MarcheImperiale.wav"))
    return (-1);
  music->setLoop(true);
  music->play();
  if (game->createMap() == -1)
    return (-1);
  if (game->setPlayers() == -1)
    return (-1);
  return (0);
}

int	startGame(Game *game)
{
  sf::RenderWindow	window(sf::VideoMode(game->getX() * 50, game->getY() * 50, 32), "ShootAndRun", sf::Style::Close);
  sf::Music		music;

  if (createGraph(game, &music) == -1)
    return (-1);
  window.setKeyRepeatEnabled(false);
  game->setCurrent(0);
  while (window.isOpen())
    {
      sf::Event event;
      while (window.pollEvent(event))
	{
	  if (event.type == sf::Event::Closed)
	    window.close();
	  else if (event.type == sf::Event::KeyPressed)
	    {
	      eventManager(game, &window, &event);
	    }
	}
      window.clear();
      if (game->drawMap(&window) == -1)
	window.close();
      if (game->drawChar(&window) == -1)
	window.close();
      if (game->getAttack())
	{
	  if (game->drawRange(&window) == -1)
	    window.close();
	}
      if (game->endGame())
	window.close();
      window.display();
    }
  music.stop();
  return (0);
}
