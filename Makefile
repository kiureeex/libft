NAME = libft.a

SRC = 
OBJ = 

INCLUDES = includes
CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDES)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all