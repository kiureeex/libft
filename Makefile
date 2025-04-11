# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clsantos <clsantos@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/10 20:03:59 by clsantos          #+#    #+#              #
#    Updated: 2025/04/11 14:51:10 by clsantos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = main.c ft_bzero.c
OBJFILES = $(SRCS:.c=.o)

INCLUDES = includes
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJFILES)
	
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all