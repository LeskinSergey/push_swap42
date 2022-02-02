NAME = push_swap

SRC = atoi.c\
		check.c\
		commands.c\
		push.c\
		push_swap.c\
		reverse_rotate.c\
		rotate.c\
		sort.c\
		sort_100_500.c\
		swap.c\

OBJ = $(SRC:.c=.o)

HDRS = push_swap.h

CC = gcc

FLAGS = -g -Wall -Wextra -Werror

RM = rm -f

$(NAME): $(HDRS) $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean
