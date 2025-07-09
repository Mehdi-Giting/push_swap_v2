NAME = push_swap

SRC = main.c \
      handle_errors/check_input.c \
      operations/push.c \
      operations/reverse.c \
      operations/rotate.c \
      operations/swap.c \
      utils/ft_split.c \
      utils/list_utils.c\
      utils/list_utils_two.c\
      utils/ft_atol.c\

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