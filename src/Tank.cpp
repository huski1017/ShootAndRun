//
// Tank.cpp for ShootAndRun in /home/wroble_h/rendu/tek2/cpp_va
// 
// Made by Hubert WROBLEWSKI
// Login   <wroble_h@epitech.eu>
// 
// Started on  Fri Jul  1 16:59:27 2016 Hubert WROBLEWSKI
// Last update Sat Jul  2 11:59:43 2016 Hubert WROBLEWSKI
//

#include "Tank.hh"

Tank::Tank(int x, int y)
{
  this->setPosX(x);
  this->setPosY(y);
  this->setLife(10);
  this->setOff(5);
  this->setDef(0);
  this->setSpeed(7);
  this->setRange(3);
  this->activ = false;
}

bool	Tank::getActiv() const
{
  return (this->activ);
}

void	Tank::setActiv(bool newState)
{
  this->activ = newState;
}

int	Tank::getSpe() const
{
  return (this->getOff() * 2);
}
