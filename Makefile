.PHONY: all clean fclean re
NAME = push_swap

SRC = instructions.c Push_swap.c BigSort.c BigSortt.c \
		utils.c error.c MiniSort.c utils2.c utils3.c shortcut.c
OBJECT = $(SRC:.c=.o)

all : $(NAME)

$(NAME):
	gcc -Wextra -Werror -Wall $(SRC) -o push_swap

clean:
	rm -f $(OBJECT)
fclean: clean
	rm -f $(NAME)
re: fclean all 
