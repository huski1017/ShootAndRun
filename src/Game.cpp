//
// Game.cpp for ShootAndRun in /home/wroble_h/rendu/tek2/cpp_va
// 
// Made by Hubert WROBLEWSKI
// Login   <wroble_h@epitech.eu>
// 
// Started on  Thu Jun 30 19:42:48 2016 Hubert WROBLEWSKI
// Last update Thu Jun 30 23:14:47 2016 Hubert WROBLEWSKI
//

#include "Game.hh"

Game::Game(int w, int h)
{
  this->x = w;
  this->y = h;
}

Game::~Game()
{

}

std::vector<std::vector<Case> > const	&Game::getMap() const
{
  return (this->map);
}
