#ifndef GAME_HH_
# define GAME_HH_

#include <vector>

class	Game
{
  int	x;
  int	y;
  std::vector<std::vector<int>>	map;
public:
  Game(int w, int h);
  ~Game() {}
  std::vector<std::vector<int>> const	&getMap() const;
  void	createMap();
  void	fileMap();
};

int	setGame(Game *game);

#endif /* !GAME_HH_ */
