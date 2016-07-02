//
// CreateMap.cpp for ShootAndRun in /home/wroble_h/rendu/tek2/cpp_va
// 
// Made by Hubert WROBLEWSKI
// Login   <wroble_h@epitech.eu>
// 
// Started on  Thu Jun 30 17:56:54 2016 Hubert WROBLEWSKI
// Last update Sun Jul  3 00:11:28 2016 Hubert WROBLEWSKI
//

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <time.h>
#include "Game.hh"

int	Game::fileMap()
{
  int	ix;
  int	iy = 0;
  int	type;

  srand(time(NULL));
  while (iy < this->y)
    {
      ix = 0;
      while (ix < this->x)
	{
	  type = std::rand() % 3 + 1;
	  if (type == 1)
	    this->map[iy][ix].setPlain();
	  else if (type == 2)
	    this->map[iy][ix].setMountain();
	  else
	    this->map[iy][ix].setRiver();
	  ix++;
	}
      iy++;
    }
  return (0);
}

int	Game::createMap()
{
  std::vector< std::vector<Case>>	newMap;

  newMap.resize(this->y);
  for (int n = 0; n < this->y; n++)
    newMap[n].resize(this->x);
  this->map = newMap;
  if (this->fileMap() == -1)
    return (-1);
  return (0);
}

int	drawTile(sf::RenderWindow *window, std::string filename, int x, int y)
{
  sf::Texture	texture;
  sf::Sprite	sprite;
  if (!texture.loadFromFile(filename))
    return (-1);
  sprite.setTexture(texture);
  sprite.setPosition(x, y);
  window->draw(sprite);
  return (0);
}
