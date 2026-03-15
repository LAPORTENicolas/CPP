SRCS		:= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJS		:= main.o HumanA.o HumanB.o Weapon.o

CXX			:= c++
CXXFLAGS	:= -std=c++98 -Wall -Wextra -Werror -g
NAME		:= ex03

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

re: fclean all # FIXME: même chose que dans l'exo 0
