SHELL		:= bash

SRCS		:= main.cpp Fixed.cpp Point.cpp bsp.cpp
OBJS		:= main.o Fixed.o Point.o bsp.o

CXX			:= c++
CXXFLAGS	:= -std=c++98 -Wall -Wextra -Werror
NAME		:= fixed

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
