//
// Range.hh for ShootAndRun in /home/wroble_h/rendu/tek2/cpp_va
// 
// Made by Hubert WROBLEWSKI
// Login   <wroble_h@epitech.eu>
// 
// Started on  Sun Jul  3 16:46:06 2016 Hubert WROBLEWSKI
// Last update Sun Jul  3 17:04:25 2016 Hubert WROBLEWSKI
//

#ifndef RANGE_HH_
# define RANGE_HH_

#include <string>

class	Range
{
  std::string	filename;
  int		posX;
  int		posY;
public:
  Range();
  ~Range();
  std::string	getFilename() const;
  int		getPosX() const;
  int		getPosY() const;
  void		setFilename(std::string);
  void		setPosX(int);
  void		setPosY(int);
};

#endif /* !RANGE_HH_ */
