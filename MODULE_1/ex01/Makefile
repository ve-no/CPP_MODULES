define HEADER_M
 ____  _____  __  __  ____  ____  ____ 
(_   )(  _  )(  \/  )(  _ \(_  _)( ___)
 / /_  )(_)(  )    (  ) _ < _)(_  )__) 
(____)(_____)(_/\/\_)(____/(____)(____)

endef
export HEADER_M

NAME = zombie

SRC	 = Zombie.cpp main.cpp zombieHorde.cpp

CPPFLAGS = -Wall -Wextra -Werror

RM = rm -rf

OBJ  = $(SRC:.cpp=.o)

%.o: %.cpp
	@c++ $(CPPFLAGS) -c $< -o $@

all: $(NAME) header_m

header_m:
	@echo "\033[0;31m$$HEADER_M\033[0m\n"

$(NAME): $(OBJ)
	@echo "\033[0;32m\n\nCompiling ..."
	@c++ $(CPPFLAGS) -std=c++98 $(OBJ) -o $(NAME)
	@echo "\n\033[0mDone !"

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all