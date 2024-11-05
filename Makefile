OUT = bibliotheque # Nom de l'executable.

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS := $(wildcard *.c)
OBJ := $(SRCS:.c=.o)

INC_DIR = includes

all: $(OUT)

$(OUT): $(OBJ)
	$(CC) $(OBJ) -o $(OUT)
	rm -f $(OBJ) 

%.o: %.c
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(OUT)

re: fclean all

.PHONY: all clean fclean re
