

NAME = myAwsome

SRC	 = ./phonebook.cpp	 ./contact.cpp ./myAwsome.cpp

CPPFLAGS = -Wall -Wextra -Werror

OBJ  = $(SRC:.cpp=.o)

RM = rm -rf

define HEADER_M
  __  __  _  _   __    _    _  ___  _____  __  __  ____ 
 (  \/  )( \/ ) /__\  ( \/\/ )/ __)(  _  )(  \/  )( ___)
  )    (  \  / /(__)\  )    ( \__ \ )(_)(  )    (  )__) 
 (_/\/\_) (__)(__)(__)(__/\__)(___/(_____)(_/\/\_)(____)
                
endef
export HEADER_M

all: $(NAME) header_m 

header_m:
	@echo "\033[0;31m$$HEADER_M\033[0m\n"

$(NAME): $(OBJ)
	@echo "\033[0;32m\n\nCompiling ..."
	@c++ $(CPPFLAGS) -std=c++98 $(OBJ) -o $(NAME)
	@echo "\n\033[0mDone !"

clean:
	@$(RM) $(NAME)

fclean: clean
	@$(RM) *.o

re: fclean all

.PHONY: all clean fclean re