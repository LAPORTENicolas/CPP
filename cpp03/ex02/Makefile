SRCS		:= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.o
OBJS		:= main.o ClapTrap.o ScavTrap.o FragTrap.o
CXX			:= c++
CXXFLAGS	:= -std=c++98 -Wall -Wextra -Werror -g
NAME		:= ex02

all: ${NAME}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

%.o: %.cpp
	${CXX} ${CXXFLAGS} -c $< -o $@ 

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

.PHONY: all clean fclean re

re: fclean all
