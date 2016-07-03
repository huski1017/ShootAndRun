//
// AnimeExplosion.cpp for ShootAndRun in /home/wroble_h/rendu/tek2/cpp_va
// 
// Made by Hubert WROBLEWSKI
// Login   <wroble_h@epitech.eu>
// 
// Started on  Sun Jul  3 20:52:57 2016 Hubert WROBLEWSKI
// Last update Sun Jul  3 23:31:34 2016 Hubert WROBLEWSKI
//

#include <iostream>
#include <thread>
#include <unistd.h>
#include "Game.hh"

void	animeExplosion(Game *game, sf::RenderWindow *window, int x, int y)
{
  std::vector<sf::Texture>	texture;
  std::vector<sf::Sprite>	sprite;
  std::vector<std::string>	filename;
  int	i = 0;
  int	size = 14;

  filename = {"media/explosion1.png", "media/explosion2.png",
	      "media/explosion3.png", "media/explosion4.png",
	      "media/explosion5.png", "media/explosion6.png",
	      "media/explosion7.png", "media/explosion8.png",
	      "media/explosion9.png", "media/explosion10.png",
	      "media/explosion11.png", "media/explosion12.png",
	      "media/explosion13.png", "media/explosion14.png"};
  texture.resize(size);
  sprite.resize(size);
  usleep(500000);
  while (i < size)
    {
      window->clear();
      if (game->drawMap(window) == -1)
	window->close();
      if (game->drawChar(window) == -1)
	window->close();
      if (game->getAttack())
	{
	  if (game->drawRange(window) == -1)
	    window->close();
	}
      if (!texture[i].loadFromFile(filename[i]))
	return;
      sprite[i].setTexture(texture[i]);
      sprite[i].setPosition(x * 50, y * 50);
      window->draw(sprite[i]);
      window->display();
      usleep(50000);
      i++;
    }
}

void	playSound()
{
  sf::Music	music;

  if (!music.openFromFile("music/Explosion.wav"))
    return;
  music.play();
  sleep(3);
}

void	Game::doDamage(sf::RenderWindow *window, Game *game)
{
  int	dmg;
  int	unitNbr;

  unitNbr = this->mapUnit[this->range.getPosX()][this->range.getPosY()] - 1;
  if (unitNbr < 0 || unitNbr >= 10)
    return;
  std::thread	explosion(animeExplosion, game, window, this->range.getPosX(), this->range.getPosY());
  std::thread	music(playSound);
  dmg = this->unit[this->current]->getOff() + this->map[this->unit[this->current]->getPosX()][this->unit[this->current]->getPosY()].getOff() - this->map[this->unit[this->current]->getPosX()][this->unit[this->current]->getPosY()].getDef();
  this->attack = false;
  if (this->getRangeX() && this->getRangeY())
    if (this->unit[unitNbr]->loseLife(dmg) == 0)
      this->mapUnit[this->range.getPosX()][this->range.getPosY()] = 0;
  this->done = true;
  explosion.join();
  music.join();
}
