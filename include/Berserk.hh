//
// Berserk.hh for ShootAndRun in /home/wroble_h/rendu/tek2/cpp_va
// 
// Made by Hubert WROBLEWSKI
// Login   <wroble_h@epitech.eu>
// 
// Started on  Fri Jul  1 14:32:49 2016 Hubert WROBLEWSKI
// Last update Sun Jul  3 02:07:36 2016 Hubert WROBLEWSKI
//

#ifndef BERSERK_HH_
# define BERSERK_HH_

#include <string>
#include "Entity.hh"

class	Berserk : public Entity
{
  bool	activ;
public:
  Berserk(int, int, std::string);
  bool	getActiv() const;
  void	setActiv(bool);
  void	move();
  void	moveSpe();
};

#endif /* !BERSERK_HH_ */
