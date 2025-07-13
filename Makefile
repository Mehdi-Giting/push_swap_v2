NAME    = push_swap
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror -I.

SRC = \
	main.c \
	input/check_input.c \
	input/check_duplicate.c \
	init/init_stack.c \
	init/indexing.c \
	algorithm/sort_three_to_five.c \
	algorithm/radix_sort.c \
	operations/push.c \
	operations/swap.c \
	operations/rotate.c \
	operations/reverse.c \
	utils/ft_split.c \
	utils/ft_atol.c \
	utils/list_utils.c \
	utils/list_utils_two.c \
	algorithm/chunking_a.c \
	algorithm/chunking_b.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
