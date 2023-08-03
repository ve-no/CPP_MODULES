define HEADER_M
  __  __  _  _   __    _    _  ___  _____  __  __  ____ 
 (  \/  )( \/ ) /__\  ( \/\/ )/ __)(  _  )(  \/  )( ___)
  )    (  \  / /(__)\  )    ( \__ \ )(_)(  )    (  )__) 
 (_/\/\_) (__)(__)(__)(__/\__)(___/(_____)(_/\/\_)(____)
                
endef
export HEADER_M

NAME = myAwsome

SRC	 = phonebook.cpp contact.cpp myAwsome.cpp

OBJ_PATH 	= objs/

CPPFLAGS = -Wall -Wextra -Werror

# OBJ  = $(SRC:.cpp=.o)

# OBJS	= $(addprefix $(OBJ_PATH), $(OBJ))

RM = rm -rf

all: $(NAME) header_m 

# $(OBJ_PATH)%.o: %.cpp
# 	@c++ $(CPPFLAGS) -c $< -o $@

# $(OBJ_PATH):
# 	@mkdir $(OBJ_PATH)


header_m:
	@echo "\033[0;31m$$HEADER_M\033[0m\n"

$(NAME):
	@echo "\033[0;32m\n\nCompiling ..."
	@c++ $(CPPFLAGS) -std=c++98 $(SRC) -o $(NAME)
	@echo "\n\033[0mDone !"

clean:
	@$(RM) $(NAME)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re