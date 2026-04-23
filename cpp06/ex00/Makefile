SRCS		:= main.cpp ScalarConverter.cpp
OBJS		:= main.o ScalarConverter.o
CXX			:= c++
CXXFLAGS	:= -std=c++98 -Wall -Wextra -Werror -g -Wshadow -Wno-shadow
NAME		:= convert

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
