//
// main.cpp for ShootAndRun in /home/wroble_h/rendu/tek2/cpp_va
// 
// Made by Hubert WROBLEWSKI
// Login   <wroble_h@epitech.eu>
// 
// Started on  Thu Jun 30 17:10:46 2016 Hubert WROBLEWSKI
// Last update Thu Jun 30 19:55:36 2016 Hubert WROBLEWSKI
//

#include <iostream>
#include <string>
#include "Game.hh"

static int	usage()
{
  std::cout << "Usage :\n\t./ShootAndRun [width] [height]" << std::endl;
  return (-1);
}

static int	check(char **param)
{
  int	x = std::stoi(param[1]);
  int	y = std::stoi(param[2]);

  if ((x >= 5 && x <= 20) && (y >= 5 && y <= 20))
    return (0);
  std::cout << "\e[0;31m[Error] \e[1;37mWrong parameters." << std::endl;
  std::cout << "\e[1;33m[Information]\e[1;37m Values must be between 5 and 20." << std::endl;
  return (-1);
}

int	main(int ac, char **av)
{
  if (ac != 3)
    return (usage());
  if (check(av) == -1)
    return (-1);
  Game	game(std::stoi(av[1]), std::stoi(av[2]));
  setGame(&game);
  return (0);
}
