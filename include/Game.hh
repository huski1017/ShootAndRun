//
// Game.hh for ShootAndRun in /home/wroble_h/rendu/tek2/cpp_va
// 
// Made by Hubert WROBLEWSKI
// Login   <wroble_h@epitech.eu>
// 
// Started on  Thu Jun 30 23:13:19 2016 Hubert WROBLEWSKI
// Last update Thu Jun 30 23:29:47 2016 Hubert WROBLEWSKI
//

#ifndef GAME_HH_
# define GAME_HH_

#include <vector>
#include "Case.hh"

class	Game
{
  int	x;
  int	y;
  std::vector<std::vector<Case>>	map;
public:
  Game(int w, int h);
  ~Game();
  std::vector<std::vector<Case>> const	&getMap() const;
  void	createMap();
  void	fileMap();
};

int	setGame(Game *game);

#endif /* !GAME_HH_ */
