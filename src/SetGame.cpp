//
// SetGame.cpp for ShootAndRun in /home/wroble_h/rendu/tek2/cpp_va
// 
// Made by Hubert WROBLEWSKI
// Login   <wroble_h@epitech.eu>
// 
// Started on  Thu Jun 30 19:54:05 2016 Hubert WROBLEWSKI
// Last update Sun Jul  3 01:49:03 2016 Hubert WROBLEWSKI
//

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Game.hh"

int	createGraph(Game *game)
{
  if (game->createMap() == -1)
    return (-1);
  return (0);
}

int	startGame(Game *game)
{
  sf::RenderWindow	window(sf::VideoMode(game->getX() * 50, game->getY() * 50, 32), "ShootAndRun", sf::Style::Close);

  if (createGraph(game) == -1)
    return (-1);
  window.setKeyRepeatEnabled(false);
  while (window.isOpen())
    {
      sf::Event event;
      while (window.pollEvent(event))
	{
	  std::cout << "Event !" << std::endl;
	  if (event.type == sf::Event::Closed)
	    window.close();
	  if (event.type == sf::Event::KeyPressed)
	    {
	      if (event.key.code == sf::Keyboard::Escape)
		window.close();
	    }
	}
      window.clear();
      if (game->drawMap(&window) == -1)
	window.close();
      window.display();
    }
  return (0);
}
