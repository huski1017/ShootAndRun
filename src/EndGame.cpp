//
// EndGame.cpp for ShootAndRun in /home/wroble_h/rendu/tek2/cpp_va
// 
// Made by Hubert WROBLEWSKI
// Login   <wroble_h@epitech.eu>
// 
// Started on  Sun Jul  3 22:24:15 2016 Hubert WROBLEWSKI
// Last update Sun Jul  3 22:43:20 2016 Hubert WROBLEWSKI
//

#include <iostream>
#include "Game.hh"

static void	blueWin()
{
  std::cout << "\e[0;34mBlue\e[1;37m team win" << std::endl;
}

static void	redWin()
{
  std::cout << "\e[0;31mRed\e[1;37m team win" << std::endl;
}

bool	Game::endGame()
{
  int	i = 0;
  int	nb = 0;
  int	nr = 0;

  while (i < 5)
    {
      if (this->unit[i]->getLife() > 0)
	nr++;
      i++;
    }
  while (i < 10)
    {
      if (this->unit[i]->getLife() > 0)
	nb++;
      i++;
    }
  if (nr == 0 || nb == 0)
    {
      nr == 0 ? blueWin() : redWin();
      return (true);
    }
  return (false);
}
