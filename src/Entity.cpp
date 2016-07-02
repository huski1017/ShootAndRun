//
// Entity.cpp for ShootAndRun in /home/wroble_h/rendu/tek2/cpp_va
// 
// Made by Hubert WROBLEWSKI
// Login   <wroble_h@epitech.eu>
// 
// Started on  Fri Jul  1 13:14:29 2016 Hubert WROBLEWSKI
// Last update Fri Jul  1 17:11:38 2016 Hubert WROBLEWSKI
//

#include "Entity.hh"

Entity::Entity()
{

}

Entity::~Entity()
{

}

void	Entity::setLife(int newLife)
{
  this->life = newLife;
}

void	Entity::setOff(int newOff)
{
  this->off = newOff;
}

void	Entity::setDef(int newDef)
{
  this->def = newDef;
}

void	Entity::setSpeed(int newSpeed)
{
  this->speed = newSpeed;
}

void	Entity::setRange(int newRange)
{
  this->range = newRange;
}

void	Entity::setPosX(int newPos)
{
  this->posX = newPos;
}

void	Entity::setPosY(int newPos)
{
  this->posY = newPos;
}

int	Entity::getLife() const
{
  return (this->life);
}

int	Entity::getOff() const
{
  return (this->off);
}

int	Entity::getDef() const
{
  return (this->def);
}

int	Entity::getSpeed() const
{
  return (this->speed);
}

int	Entity::getRange() const
{
  return (this->range);
}

int	Entity::getPosX() const
{
  return (this->posX);
}

int	Entity::getPosY() const
{
  return (this->posY);
}
