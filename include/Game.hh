//
// Game.hh for ShootAndRun in /home/wroble_h/rendu/tek2/cpp_va
// 
// Made by Hubert WROBLEWSKI
// Login   <wroble_h@epitech.eu>
// 
// Started on  Thu Jun 30 23:13:19 2016 Hubert WROBLEWSKI
// Last update Sun Jul  3 00:14:53 2016 Hubert WROBLEWSKI
//

#ifndef GAME_HH_
# define GAME_HH_

#include <vector>
#include <string>
#include <SFML/Graphics.hpp>
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
  int					getX() const;
  int					getY() const;
  int					createMap();
  int					fileMap();
  int					drawMap(sf::RenderWindow *);
};

int	startGame(Game *game);
int	drawTile(sf::RenderWindow *, std::string, int, int);

#endif /* !GAME_HH_ */
