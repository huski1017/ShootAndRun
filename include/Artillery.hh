//
// Artillery.hh for ShootAndRun in /home/wroble_h/rendu/tek2/cpp_va
// 
// Made by Hubert WROBLEWSKI
// Login   <wroble_h@epitech.eu>
// 
// Started on  Sat Jul  2 11:48:59 2016 Hubert WROBLEWSKI
// Last update Sun Jul  3 02:08:59 2016 Hubert WROBLEWSKI
//

#ifndef ARTILLERY_HH_
# define ARTILLERY_HH_

#include <string>
#include "Entity.hh"

class	Artillery : public Entity
{
  bool	activ;
public:
  Artillery(int, int, std::string);
  bool	getActiv() const;
  void	setActiv(bool);
  void	attack();
  void	attackSpe();
};

#endif /* !ARTILLERY_HH_ */
