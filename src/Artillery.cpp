//
// Artillery.cpp for ShootAndRun in /home/wroble_h/rendu/tek2/cpp_va
// 
// Made by Hubert WROBLEWSKI
// Login   <wroble_h@epitech.eu>
// 
// Started on  Sat Jul  2 11:52:43 2016 Hubert WROBLEWSKI
// Last update Sun Jul  3 02:09:29 2016 Hubert WROBLEWSKI
//

#include <iostream>
#include "Entity.hh"
#include "Artillery.hh"

Artillery::Artillery(int x, int y, std::string file)
{
  this->setFilename(file);
  this->setPosX(x);
  this->setPosY(y);
  this->setLife(15);
  this->setOff(4);
  this->setDef(0);
  this->setSpeed(5);
  this->setRange(1);
  this->activ = false;
}

bool	Artillery::getActiv() const
{
  return (this->activ);
}

void	Artillery::setActiv(bool newState)
{
  this->activ = newState;
}

void	Artillery::attack()
{
  std::cout << "Attack" << std::endl;
}

void	Artillery::attackSpe()
{
  std::cout << " Attack spé" << std::endl;
}
