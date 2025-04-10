# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clsantos <clsantos@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/10 20:03:59 by clsantos          #+#    #+#              #
#    Updated: 2025/04/10 20:03:59 by clsantos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCFILES = ft_atoi
OBJFILES = $(OBJFILES:.c=.o)

INCLUDES = includes
CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDES)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all