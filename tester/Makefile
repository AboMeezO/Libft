NAME = libft_tester
CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT = ../libft.a
SRC = main.c common.c $(wildcard Part1/*.c) $(wildcard Part2/*.c) $(wildcard Part3/*.c)
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

$(LIBFT):
	$(MAKE) -C ..

%.o: %.c
	$(CC) $(CFLAGS) -I.. -I. -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
