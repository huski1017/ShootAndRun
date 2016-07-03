//
// Case.cpp for ShootAndRun in /home/wroble_h/rendu/tek2/cpp_va
// 
// Made by Hubert WROBLEWSKI
// Login   <wroble_h@epitech.eu>
// 
// Started on  Thu Jun 30 23:09:08 2016 Hubert WROBLEWSKI
// Last update Sun Jul  3 23:14:52 2016 Hubert WROBLEWSKI
//

#include <iostream>
#include <SFML/Graphics.hpp>
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
  this->filename = "media/river.png";
  this->range = 0;
  this->speed = 1;
  this->def = 1;
  this->off = 0;
}

void	Case::setMountain()
{
  this->filename = "media/mountain.png";
  this->range = 1;
  this->speed = 2;
  this->def = 0;
  this->off = 0;
}

void	Case::setPlain()
{
  this->filename = "media/grass.png";
  this->range = 0;
  this->speed = 0;
  this->def = 1;
  this->off = 1;
}

std::string	Case::getFilename() const
{
  return (this->filename);
}
