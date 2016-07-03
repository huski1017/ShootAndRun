//
// Game.hh for ShootAndRun in /home/wroble_h/rendu/tek2/cpp_va
// 
// Made by Hubert WROBLEWSKI
// Login   <wroble_h@epitech.eu>
// 
// Started on  Thu Jun 30 23:13:19 2016 Hubert WROBLEWSKI
// Last update Sun Jul  3 22:23:56 2016 Hubert WROBLEWSKI
//

#ifndef GAME_HH_
# define GAME_HH_

#include <vector>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Case.hh"
#include "Entity.hh"
#include "Range.hh"

class	Game
{
  int	x;
  int	y;
  int	current;
  int	move;
  bool	attack;
  bool	done;
  bool	red;
  Range	range;
  std::vector<std::vector<Case>>	map;
  std::vector<std::vector<int>>		mapUnit;
  std::vector<Entity *>			unit;
public:
  Game(int w, int h);
  ~Game();
  std::vector<std::vector<Case>> const	&getMap() const;
  int					getX() const;
  int					getY() const;
  void					setCurrent(int);
  void					setAttack();
  bool					getAttack() const;
  int					createMap();
  int					fileMap();
  int					drawMap(sf::RenderWindow *);
  int					drawRange(sf::RenderWindow *);
  int					setPlayers();
  int					drawChar(sf::RenderWindow *);
  void					changePosY(int);
  void					changePosX(int);
  void					doDamage(sf::RenderWindow *, Game *);
  bool					getRangeX();
  bool					getRangeY();
  bool					endGame();
};

int	startGame(Game *game);
int	drawTile(sf::RenderWindow *, std::string, int, int);
void	eventManager(Game *, sf::RenderWindow *, sf::Event *);
//void	animeExplosion(sf::RenderWindow *, int, int);

#endif /* !GAME_HH_ */
