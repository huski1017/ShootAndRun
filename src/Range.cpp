//
// Range.cpp for ShootAndRun in /home/wroble_h/rendu/tek2/cpp_va
// 
// Made by Hubert WROBLEWSKI
// Login   <wroble_h@epitech.eu>
// 
// Started on  Sun Jul  3 16:52:04 2016 Hubert WROBLEWSKI
// Last update Sun Jul  3 17:15:33 2016 Hubert WROBLEWSKI
//

#include "Range.hh"

Range::Range()
{

}

Range::~Range()
{

}

std::string	Range::getFilename() const
{
  return (this->filename);
}

int	Range::getPosX() const
{
  return (this->posX);
}

int	Range::getPosY() const
{
  return (this->posY);
}

void	Range::setFilename(std::string file)
{
  this->filename = file;
}

void	Range::setPosY(int y)
{
  this->posY = y;
}

void	Range::setPosX(int x)
{
  this->posX = x;
}
