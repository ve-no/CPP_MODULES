NAME = ClapTrap

SRC = main.cpp ClapTrap.cpp

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

OBJ = ${SRC:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJ}
	c++ ${CPPFLAGS} ${OBJ} -o ${NAME}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: fclean all clean re


