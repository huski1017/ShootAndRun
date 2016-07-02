//
// Game.cpp for ShootAndRun in /home/wroble_h/rendu/tek2/cpp_va
// 
// Made by Hubert WROBLEWSKI
// Login   <wroble_h@epitech.eu>
// 
// Started on  Thu Jun 30 19:42:48 2016 Hubert WROBLEWSKI
// Last update Sun Jul  3 00:06:45 2016 Hubert WROBLEWSKI
//

#include <iostream>
#include "Game.hh"

Game::Game(int w, int h)
{
  this->x = w;
  this->y = h;
}

Game::~Game()
{

}

int	Game::getX() const
{
  return (this->x);
}

int	Game::getY() const
{
  return (this->y);
}

std::vector<std::vector<Case> > const	&Game::getMap() const
{
  return (this->map);
}

int	Game::drawMap(sf::RenderWindow *window)
{
  int	iy = 0;
  int	ix;
  int	x;
  int	y = 0;

  while (iy < this->y)
    {
      ix = 0;
      x = 0;
      while (ix < this->x)
	{
	  drawTile(window, this->map[iy][ix].getFilename(), x, y);
	  ix++;
	  x += 50;
	}
      y += 50;
      iy++;
    }
  return (0);
}
