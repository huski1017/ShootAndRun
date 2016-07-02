//
// Entity.hh for ShootAndRun in /home/wroble_h/rendu/tek2/cpp_va
// 
// Made by Hubert WROBLEWSKI
// Login   <wroble_h@epitech.eu>
// 
// Started on  Fri Jul  1 13:09:15 2016 Hubert WROBLEWSKI
// Last update Fri Jul  1 17:09:28 2016 Hubert WROBLEWSKI
//

#ifndef ENTITY_HH_
# define ENTITY_HH_

class	Entity
{
  int	life;
  int	off;
  int	def;
  int	speed;
  int	range;
  int	posX;
  int	posY;
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
  int	getSpeed() const;
  int	getLife() const;
  int	getOff() const;
  int	getDef() const;
  int	getRange() const;
  int	getPosX() const;
  int	getPosY() const;
};

#endif /* !ENTITY_HH_ */
