//
// CreateMap.cpp for ShootAndRun in /home/wroble_h/rendu/tek2/cpp_va
// 
// Made by Hubert WROBLEWSKI
// Login   <wroble_h@epitech.eu>
// 
// Started on  Thu Jun 30 17:56:54 2016 Hubert WROBLEWSKI
// Last update Thu Jun 30 20:06:08 2016 Hubert WROBLEWSKI
//

#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>
#include "Game.hh"

void	Game::fileMap()
{
  int	ix;
  int	iy = 0;

  srand(time(NULL));
  while (iy < this->y)
    {
      ix = 0;
      while (ix < this->x)
	{
	  this->map[iy][ix] = std::rand() % 3 + 1;
	  std::cout << map[iy][ix];
	  ix++;
	}
      std::cout << std::endl;
      iy++;
    }
}

void	Game::createMap()
{
  std::vector< std::vector<int>>	newMap;

  newMap.resize(this->y);
  for (int n = 0; n < this->y; n++)
    newMap[n].resize(this->x);
  this->map = newMap;
  this->fileMap();
  return;
}
