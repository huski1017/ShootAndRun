##
## Makefile for va in /home/wroble_h/rendu/tek2/cpp_va
## 
## Made by Hubert WROBLEWSKI
## Login   <wroble_h@epitech.eu>
## 
## Started on  Thu Jun 30 17:03:30 2016 Hubert WROBLEWSKI
## Last update Sun Jul  3 22:36:40 2016 Hubert WROBLEWSKI
##

##CXX	= clang++ -std=c++11

CXX	= g++ -std=c++0x

RM	= rm -f

NAME	= ShootAndRun

SRCS	= src/main.cpp \
	src/CreateMap.cpp \
	src/Game.cpp \
	src/SetGame.cpp \
	src/Case.cpp \
	src/Entity.cpp \
	src/Berserk.cpp \
	src/Tank.cpp \
	src/Artillery.cpp \
	src/EventManager.cpp \
	src/Range.cpp \
	src/AnimeExplosion.cpp \
	src/EndGame.cpp \

OBJS	= $(SRCS:.cpp=.o)

CPPFLAGS	= -I./include -I./SFML/include

LDFLAGS	= -L./SFML/lib -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) -o $(NAME) $(OBJS) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
