NAME = fixed

SRC	 = Fixed.cpp  main.cpp

CPPFLAGS = -Wall -Wextra -Werror

RM = rm -rf

OBJ  = $(SRC:.cpp=.o)

%.o: %.cpp
	@c++ $(CPPFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[0;32m\n\nCompiling ..."
	@c++ $(CPPFLAGS) -std=c++98 $(OBJ) -o $(NAME)
	@echo "\n\033[0mDone !"

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
