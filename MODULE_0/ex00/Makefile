NAME = megaphone

CFLAGS = -std=c++98 -Wall -Wextra -Werror

RM = rm -rf

all:  $(NAME)


define HEADER_M
 _  _  ____  ___   __   ____  _  _   __   __ _  ____ 
( \/ )(  __)/ __) / _\ (  _ \/ )( \ /  \ (  ( \(  __)
/ \/ \ ) _)( (_ \/    \ ) __/) __ ((  O )/    / ) _) 
\_)(_/(____)\___/\_/\_/(__)  \_)(_/ \__/ \_)__)(____)
                
endef
export HEADER_M

all: $(NAME) header_m 

header_m:
	@echo "\033[0;31m$$HEADER_M\033[0m\n"

$(NAME):
	@echo "\033[0;32m\n\nCompiling ..."
	@c++ $(CFLAGS) megaphone.cpp -o $(NAME)
	@echo "\n\033[0mDone !"
fclean:
	@$(RM) $(NAME)

clean:
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re