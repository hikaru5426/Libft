CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
NAME = libft.a
SRC = $(filter-out main.c, $(wildcard *.c))
OBJ = $(SRC:.c=.o)

EXEC = cc -Werror -Wextra -Wall -lbsd -g main.c -L . -lft

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean
	$(MAKE) all
	$(MAKE) clean
	$(EXEC)

.PHONY: all clean fclean re
