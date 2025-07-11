NAME = push_swap

SRC = main.c \
      handle_errors/check_input.c \
      handle_errors/check_duplicate.c \
      operations/push.c \
      operations/reverse.c \
      operations/rotate.c \
      operations/swap.c \
      utils/ft_split.c \
      utils/list_utils.c \
      utils/list_utils_two.c \
      utils/ft_atol.c \
      init_sort_stack/init_stack.c \
      init_sort_stack/sort_three.c \
      init_sort_stack/indexing.c \
      init_sort_stack/sort_stack.c \

OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iinclude
RM = rm -f

# Rules
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re