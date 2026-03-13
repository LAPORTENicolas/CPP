SHELL		:= bash

SRCS		:= main.cpp Zombie.cpp zombieHorde.cpp
OBJS		:= main.o Zombie.o zombieHorde.o

CXX			:= c++
CXXFLAGS	:= -std=c++98 -Wall -Wextra -Werror
NAME		:= z

all: ${NAME}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

%.o: %.cpp
	${CXX} ${CXXFLAGS} -c $< -o $@ 

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

.PHONY: all clean fclean

re: fclean all
