SRCS		:= main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
OBJS		:= main.o Animal.o Dog.o Cat.o WrongAnimal.o WrongCat.o
CXX			:= c++
CXXFLAGS	:= -std=c++98 -Wall -Wextra -Werror -g -Wshadow -Wno-shadow
NAME		:= ex00

all: ${NAME}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

%.o: %.cpp
	${CXX} ${CXXFLAGS} -c $< -o $@ 

clean:
	@rm -rf $(OBJS) .clang-tidy .cache compile_commands.json

fclean: clean
	@rm -rf $(NAME)

.PHONY: all clean fclean re

re: fclean all
