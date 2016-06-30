//
// Game.cpp for ShootAndRun in /home/wroble_h/rendu/tek2/cpp_va
// 
// Made by Hubert WROBLEWSKI
// Login   <wroble_h@epitech.eu>
// 
// Started on  Thu Jun 30 19:42:48 2016 Hubert WROBLEWSKI
// Last update Thu Jun 30 19:55:57 2016 Hubert WROBLEWSKI
//

#include "Game.hh"

Game::Game(int w, int h)
{
  this->x = w;
  this->y = h;
}

std::vector<std::vector<int> > const	&Game::getMap() const
{
  return (this->map);
}








