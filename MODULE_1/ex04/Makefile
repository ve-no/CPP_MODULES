NAME = sed

SRC	 = main.cpp

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

all: $(NAME)

OBJ  = $(SRC:.cpp=.o)

%.o: %.cpp
	@c++ $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@echo "\033[0;32m\n\nCompiling ..."
	@c++ $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo "\n\033[0mDone !"

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
