//
// Artillery.hh for ShootAndRun in /home/wroble_h/rendu/tek2/cpp_va
// 
// Made by Hubert WROBLEWSKI
// Login   <wroble_h@epitech.eu>
// 
// Started on  Sat Jul  2 11:48:59 2016 Hubert WROBLEWSKI
// Last update Sat Jul  2 11:57:15 2016 Hubert WROBLEWSKI
//

#ifndef ARTILLERY_HH_
# define ARTILLERY_HH_

class	Artillery : public Entity
{
  bool	activ;
public:
  Artillery(int, int);
  bool	getActiv() const;
  void	setActiv(bool);
  void	attack();
  void	attackSpe();
};

#endif /* !ARTILLERY_HH_ */
