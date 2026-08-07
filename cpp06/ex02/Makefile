SOURCES		= main.cpp Base.cpp
OBJECTS     = main.o Base.o
NAME        = Identity
CXX         = c++
CXXFLAGS    = -std=c++98 -Wall -Wextra -Werror -g -Wshadow -Wno-shadow
GREEN		= \033[92m
BLUE		= \033[94m
RESET 		= \033[0m
TOTAL		= $(words $(OBJECTS))
COUNT		= 0


all: ${NAME}

${NAME}: ${OBJECTS}
	@printf "%b%13s    %s%b\n" "$(GREEN)" "BIN" "$(NAME)" "$(RESET)"
	@${CXX} ${OBJECTS} -o ${NAME}
	@printf "%b%13s    %s%b\n" "$(GREEN)" "OK" "$(NAME)" "$(RESET)"

%.o: %.cpp
	@${CXX} ${CXXFLAGS} -c $< -o $@
	$(eval COUNT:=$(shell  echo $$(($(COUNT) + 1))))
	@count=$$(printf "[%s/%s]" "$(COUNT)" "$(TOTAL)"); \
	printf "%b%b%-11s%-6s%b%s\n" "$(BOLD)" "$(BLUE)" "$$count" "CXX" "$(RESET)" "$<";

clean:
	rm -rf ${OBJECTS}

fclean: clean
	rm -rf ${NAME}


re: fclean all

.PHONY: all clean fclean re
