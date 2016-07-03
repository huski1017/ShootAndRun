//
// Game.cpp for ShootAndRun in /home/wroble_h/rendu/tek2/cpp_va
// 
// Made by Hubert WROBLEWSKI
// Login   <wroble_h@epitech.eu>
// 
// Started on  Thu Jun 30 19:42:48 2016 Hubert WROBLEWSKI
// Last update Sun Jul  3 23:16:37 2016 Hubert WROBLEWSKI
//

#include <iostream>
#include "Berserk.hh"
#include "Tank.hh"
#include "Entity.hh"
#include "Game.hh"

Game::Game(int w, int h)
{
  this->x = w;
  this->y = h;
  this->range.setFilename("media/range.png");
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

void	Game::setCurrent(int newCurrent)
{
  if (this->current != newCurrent && 
      ((newCurrent < 5 && red != false) || (newCurrent > 4 && red != true)) &&
      (this->unit[newCurrent]->getLife() > 0))
    {
      newCurrent < 5 ? this->red = false : this->red = true;
      this->current = newCurrent;
      this->move = this->unit[newCurrent]->getSpeed() + this->map[this->unit[newCurrent]->getPosX()][this->unit[newCurrent]->getPosY()].getSpeed();
      this->attack = false;
      this->done = false;
    }
}

void	Game::setAttack()
{
  this->attack = !this->attack;
  this->range.setPosX(unit[current]->getPosX());
  this->range.setPosY(unit[current]->getPosY());
}

bool	Game::getAttack() const
{
  if (this->done)
    return (false);
  return (this->attack);
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

int	Game::drawChar(sf::RenderWindow *window)
{
  int	i = 0;

  while (i < this->unit.size())
    {
      if (this->unit[i]->getLife() > 0)
	drawTile(window, this->unit[i]->getFilename(), this->unit[i]->getPosX() * 50, this->unit[i]->getPosY() * 50);
      i++;
    }
}

int	Game::setPlayers()
{
  std::vector< std::vector<int>>	newMap;

  newMap.resize(this->y);
  for (int n = 0; n < this->y; n++)
    newMap[n].resize(this->x);
  this->mapUnit = newMap;
  this->unit.resize(10);

  this->mapUnit[0][0] = 1;
  this->unit[0] = new Berserk(0, 0, "media/berserkred.png");
  this->mapUnit[0][1] = 2;
  this->unit[1] = new Tank(0, 1, "media/tankred.png");
  this->mapUnit[0][2] = 3;
  this->unit[2] = new Tank(0, 2, "media/artilleriered.png");
  this->mapUnit[0][3] = 4;
  this->unit[3] = new Tank(0, 3, "media/tankred.png");
  this->mapUnit[0][4] = 5;
  this->unit[4] = new Tank(0, 4, "media/berserkred.png");
  this->mapUnit[this->x - 1][0] = 6;
  this->unit[5] = new Berserk(this->x - 1, 0, "media/berserkblue.png");
  this->mapUnit[this->x - 1][1] = 7;
  this->unit[6] = new Tank(this->x - 1, 1, "media/tankblue.png");
  this->mapUnit[this->x - 1][2] = 8;
  this->unit[7] = new Tank(this->x - 1, 2, "media/artillerieblue.png");
  this->mapUnit[this->x - 1][3] = 9;
  this->unit[8] = new Tank(this->x - 1, 3, "media/tankblue.png");
  this->mapUnit[this->x - 1][4] = 10;
  this->unit[9] = new Tank(this->x - 1, 4, "media/berserkblue.png");
  return (0);
}

bool	Game::getRangeX()
{
  int	i;

  i = this->range.getPosX() - this->unit[this->current]->getPosX();
  if (i < 0)
    i = i * (-1);
  if (i <= (this->unit[this->current]->getRange() + this->map[this->unit[this->current]->getPosX()][this->unit[this->current]->getPosY()].getRange()))
    return (true);
  else
    return (false);
}

bool	Game::getRangeY()
{
  int	i;

  i = this->range.getPosY() - this->unit[this->current]->getPosY();
  if (i < 0)
    i = i * (-1);
  if (i <= (this->unit[this->current]->getRange() + this->map[this->unit[this->current]->getPosX()][this->unit[this->current]->getPosY()].getRange()))
    return (true);
  else
    return (false);
}

void	Game::changePosX(int dir)
{
  if (this->attack == true && dir == -1 && this->range.getPosX() > 0)
    {
      this->range.setPosX(this->range.getPosX() - 1);
      return;
    }
  else if (this->attack == true && dir == 1 && this->range.getPosX() < this->x - 1)
    {
      this->range.setPosX(this->range.getPosX() + 1);
      return;
    }
  if (this->unit[this->current]->getPosX() > 0 && dir == -1 && this->move > 0)
    {
      if (this->mapUnit[this->unit[this->current]->getPosX() - 1][this->unit[this->current]->getPosY()] == 0)
	{
	  this->mapUnit[this->unit[this->current]->getPosX()][this->unit[this->current]->getPosY()] = 0;
	  this->move = this->move - this->map[this->unit[this->current]->getPosX()][this->unit[this->current]->getPosY()].getSpeed();
	  this->unit[this->current]->setPosX(this->unit[this->current]->getPosX() - 1);
	  this->mapUnit[this->unit[this->current]->getPosX()][this->unit[this->current]->getPosY()] = this->current + 1;
	  this->move--;
	}
    }
  else if (this->unit[this->current]->getPosX() < this->x - 1 && dir == 1 && this->move > 0)
    {
      if (this->mapUnit[this->unit[this->current]->getPosX() + 1][this->unit[this->current]->getPosY()] == 0)
	{
	  this->mapUnit[this->unit[this->current]->getPosX()][this->unit[this->current]->getPosY()] = 0;
	  this->move = this->move - this->map[this->unit[this->current]->getPosX()][this->unit[this->current]->getPosY()].getSpeed();
	  this->unit[this->current]->setPosX(this->unit[this->current]->getPosX() + 1);
	  this->mapUnit[this->unit[this->current]->getPosX()][this->unit[this->current]->getPosY()] = this->current + 1;
	  this->move--;
	}
    }
}

void	Game::changePosY(int dir)
{
  if (this->attack == true && dir == -1 && this->range.getPosY() > 0)
    {
      this->range.setPosY(this->range.getPosY() - 1);
      return;
    }
  else if (this->attack == true && dir == 1 && this->range.getPosY() < this->y - 1)
    {
      this->range.setPosY(this->range.getPosY() + 1);
      return;
    }
  if (this->unit[this->current]->getPosY() > 0 && dir == -1 && this->move > 0)
    {
      if (this->mapUnit[this->unit[this->current]->getPosX()][this->unit[this->current]->getPosY() - 1] == 0)
	{
	  this->mapUnit[this->unit[this->current]->getPosX()][this->unit[this->current]->getPosY()] = 0;
	  this->move = this->move - this->map[this->unit[this->current]->getPosX()][this->unit[this->current]->getPosY()].getSpeed();
	  this->unit[this->current]->setPosY(this->unit[this->current]->getPosY() - 1);
	  this->mapUnit[this->unit[this->current]->getPosX()][this->unit[this->current]->getPosY()] = this->current + 1;
	  this->move--;
	}
    }
  else if (this->unit[this->current]->getPosY() < this->y - 1 && dir == 1 && this->move > 0)
    {
      if (this->mapUnit[this->unit[this->current]->getPosX()][this->unit[this->current]->getPosY() + 1] == 0)
	{
	  this->mapUnit[this->unit[this->current]->getPosX()][this->unit[this->current]->getPosY()] = 0;
	  this->move = this->move - this->map[this->unit[this->current]->getPosX()][this->unit[this->current]->getPosY()].getSpeed();
	  this->unit[this->current]->setPosY(this->unit[this->current]->getPosY() + 1);
	  this->mapUnit[this->unit[this->current]->getPosX()][this->unit[this->current]->getPosY()] = this->current + 1;
	  this->move--;
	}
    }
}
