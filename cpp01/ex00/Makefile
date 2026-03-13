SHELL		:= bash

BUILD_DIR	:= ./build
SRC_DIR		:= ./srcs/

SRCS		:= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS		:= main.o Zombie.o newZombie.o randomChump.o

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
