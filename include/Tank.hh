//
// Tank.hh for ShootAndRun in /home/wroble_h/rendu/tek2/cpp_va
// 
// Made by Hubert WROBLEWSKI
// Login   <wroble_h@epitech.eu>
// 
// Started on  Fri Jul  1 16:53:20 2016 Hubert WROBLEWSKI
// Last update Sun Jul  3 02:07:57 2016 Hubert WROBLEWSKI
//

#ifndef TANK_HH_
# define TANK_HH_

#include <string>
#include "Entity.hh"

class	Tank : public Entity
{
  bool	activ;
public:
  Tank(int, int, std::string);
  bool	getActiv() const;
  void	setActiv(bool);
  int	getSpe() const;
};

#endif /* !TANK_HH_ */
