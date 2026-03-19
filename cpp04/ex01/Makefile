SRCS		:= main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJS		:= main.o Animal.o Dog.o Cat.o WrongAnimal.o WrongCat.o Brain.o
CXX			:= c++
CXXFLAGS	:= -std=c++98 -Wall -Wextra -Werror -g -Wshadow -Wno-shadow
NAME		:= ex01

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
