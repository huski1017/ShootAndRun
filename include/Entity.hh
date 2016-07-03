//
// Entity.hh for ShootAndRun in /home/wroble_h/rendu/tek2/cpp_va
// 
// Made by Hubert WROBLEWSKI
// Login   <wroble_h@epitech.eu>
// 
// Started on  Fri Jul  1 13:09:15 2016 Hubert WROBLEWSKI
// Last update Sun Jul  3 18:31:03 2016 Hubert WROBLEWSKI
//

#ifndef ENTITY_HH_
# define ENTITY_HH_

#include <string>

class	Entity
{
  int	life;
  int	off;
  int	def;
  int	speed;
  int	range;
  int	posX;
  int	posY;
  std::string	filename;
public:
  Entity();
  virtual ~Entity();
  void	setLife(int);
  void	setOff(int);
  void	setDef(int);
  void	setSpeed(int);
  void	setRange(int);
  void	setPosX(int);
  void	setPosY(int);
  void	setFilename(std::string);
  int	loseLife(int);
  int	getSpeed() const;
  int	getLife() const;
  int	getOff() const;
  int	getDef() const;
  int	getRange() const;
  int	getPosX() const;
  int	getPosY() const;
  std::string	getFilename() const;
};

#endif /* !ENTITY_HH_ */
