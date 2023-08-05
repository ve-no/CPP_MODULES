define HEADER_M

   __    ___  ___  _____  __  __  _  _  ____ 
  /__\  / __)/ __)(  _  )(  )(  )( \( )(_  _)
 /(__)\( (__( (__  )(_)(  )(__)(  )  (   )(  
(__)(__)\___)\___)(_____)(______)(_)\_) (__) 
                                             
endef
export HEADER_M

NAME = account

SRC	 = Account.cpp tests.cpp

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

OBJ  = $(SRC:.cpp=.o)

%.o: %.cpp
	@c++ $(CPPFLAGS) -c $< -o $@

all: $(NAME) header_m

header_m:
	@echo "\033[0;31m$$HEADER_M\033[0m\n"

$(NAME): $(OBJ)
	@echo "\033[0;32m\n\nCompiling ..."
	@c++ $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo "\n\033[0mDone !"

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all