//
// Berserk.cpp for ShootAndRun in /home/wroble_h/rendu/tek2/cpp_va
// 
// Made by Hubert WROBLEWSKI
// Login   <wroble_h@epitech.eu>
// 
// Started on  Fri Jul  1 14:51:52 2016 Hubert WROBLEWSKI
// Last update Sat Jul  2 03:02:03 2016 Hubert WROBLEWSKI
//

#include <iostream>
#include "Berserk.hh"

Berserk::Berserk(int x, int y)
{
  this->setPosX(x);
  this->setPosY(y);
  this->setLife(15);
  this->setOff(4);
  this->setDef(0);
  this->setSpeed(5);
  this->setRange(1);
  this->activ = false;
}

bool	Berserk::getActiv() const
{
  return (this->activ);
}

void	Berserk::setActiv(bool newState)
{
  this->activ = newState;
}

void	move()
{
  std::cout << "move" << std::endl;
}

void	moveSpe()
{
  std::cout << "move spé" << std::endl;
}
