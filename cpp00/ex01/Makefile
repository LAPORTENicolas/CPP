SHELL		:= bash

BUILD_DIR	:= ./build
SRC_DIR		:= ./srcs/
OBJ_DIR		:= $(BUILD_DIR)/objs/
DEP_DIR		:= $(BUILD_DIR)/deps/

SRCS		:= Contact.cpp Phonebook.cpp
OBJS		:= Contact.o Phonebook.o

CC			:= c++ -std=c++98
CFLAGS		:= -Wall -Wextra -Werror
TARGET		:= Phonebook

all: ${TARGET}

debug:
	@echo $(SRCS)
	@echo $(OBJS)
	@echo $(DEPS)

${TARGET}: ${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${TARGET}

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o $@ 

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(TARGET)

re: fclean all

-include $(DEPS)
