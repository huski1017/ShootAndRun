//
// Case.hh for ShootAndRun in /home/wroble_h/rendu/tek2/cpp_va
// 
// Made by Hubert WROBLEWSKI
// Login   <wroble_h@epitech.eu>
// 
// Started on  Thu Jun 30 23:01:26 2016 Hubert WROBLEWSKI
// Last update Sun Jul  3 00:13:16 2016 Hubert WROBLEWSKI
//

#ifndef CASE_HH_
# define CASE_HH_

#include <string>

class	Case
{
  int	range;
  int	speed;
  int	def;
  int	off;
  std::string	filename;
public:
  Case();
  ~Case();
  int	getRange() const;
  int	getSpeed() const;
  int	getDef() const;
  int	getOff() const;
  void	setRiver();
  void	setMountain();
  void	setPlain();
  std::string	getFilename() const;
};

#endif /* !CASE_HH_ */
