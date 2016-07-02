##
## Makefile for va in /home/wroble_h/rendu/tek2/cpp_va
## 
## Made by Hubert WROBLEWSKI
## Login   <wroble_h@epitech.eu>
## 
## Started on  Thu Jun 30 17:03:30 2016 Hubert WROBLEWSKI
## Last update Fri Jul  1 19:55:21 2016 Hubert WROBLEWSKI
##

CXX	= clang++ -std=c++11

RM	= rm -f

NAME	= ShootAndRun

SRCS	= src/main.cpp \
	src/CreateMap.cpp \
	src/Game.cpp \
	src/SetGame.cpp \
	src/Case.cpp \
	src/Entity.cpp \
	src/Berserk.cpp \
	src/Tank.cpp

OBJS	= $(SRCS:.cpp=.o)

CPPFLAGS	= -I./include

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
