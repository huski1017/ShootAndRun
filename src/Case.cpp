//
// Case.cpp for ShootAndRun in /home/wroble_h/rendu/tek2/cpp_va
// 
// Made by Hubert WROBLEWSKI
// Login   <wroble_h@epitech.eu>
// 
// Started on  Thu Jun 30 23:09:08 2016 Hubert WROBLEWSKI
// Last update Sat Jul  2 11:48:02 2016 Hubert WROBLEWSKI
//

#include <iostream>
#include "Case.hh"

Case::Case()
{

}

Case::~Case()
{

}

int	Case::getRange() const
{
  return (this->range);
}

int	Case::getSpeed() const
{
  return (this->range);
}

int	Case::getDef() const
{
  return (this->def);
}

int	Case::getOff() const
{
  return (this->off);
}

void	Case::setRiver()
{
  this->range = 0;
  this->speed = -1;
  this->def = 1;
  this->off = 0;
}

void	Case::setMountain()
{
  this->range = 1;
  this->speed = -2;
  this->def = 0;
  this->off = 0;
}

void	Case::setPlain()
{
  this->range = 0;
  this->speed = 0;
  this->def = 1;
  this->off = 1;
}
