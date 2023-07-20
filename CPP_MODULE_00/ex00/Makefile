NAME = megaphone

CFLAGS = -std=c++98 -Wall -Wextra -Werror

RM = rm -rf

all:  $(NAME)


$(NAME):
	c++ $(CFLAGS) megaphone.cpp -o $(NAME)

fclean:
	$(RM) $(NAME)

clean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re