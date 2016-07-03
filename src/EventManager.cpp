//
// EventManager.cpp for ShootAndRun in /home/wroble_h/rendu/tek2/cpp_va
// 
// Made by Hubert WROBLEWSKI
// Login   <wroble_h@epitech.eu>
// 
// Started on  Sun Jul  3 16:34:04 2016 Hubert WROBLEWSKI
// Last update Sun Jul  3 22:20:17 2016 Hubert WROBLEWSKI
//

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Game.hh"

void	eventManager(Game *game, sf::RenderWindow *window, sf::Event *event)
{
  switch (event->key.code)
    {
    case sf::Keyboard::Escape :
      window->close();
      return;
    case sf::Keyboard::Z :
      game->changePosY(-1);
      return;
    case sf::Keyboard::S :
      game->changePosY(1);
      return;
    case sf::Keyboard::D :
      game->changePosX(1);
      return;
    case sf::Keyboard::Q :
      game->changePosX(-1);
      return;
    case sf::Keyboard::F1 :
      game->setCurrent(0);
      return;
    case sf::Keyboard::F2 :
      game->setCurrent(1);
      return;
    case sf::Keyboard::F3 :
      game->setCurrent(2);
      return;
    case sf::Keyboard::F4 :
      game->setCurrent(3);
      return;
    case sf::Keyboard::F5 :
      game->setCurrent(4);
      return;
    case sf::Keyboard::F6 :
      game->setCurrent(5);
      return;
    case sf::Keyboard::F7 :
      game->setCurrent(6);
      return;
    case sf::Keyboard::F8 :
      game->setCurrent(7);
      return;
    case sf::Keyboard::F9 :
      game->setCurrent(8);
      return;
    case sf::Keyboard::F10 :
      game->setCurrent(9);
      return;
    case sf::Keyboard::Space :
      game->setAttack();
      return;
    case sf::Keyboard::Return :
      if (game->getAttack())
	game->doDamage(window, game);
      return;

    default:
      break;
    }
  return;
}
