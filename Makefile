# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clsantos <clsantos@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/10 20:03:59 by clsantos          #+#    #+#              #
#    Updated: 2025/04/17 19:55:38 by clsantos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC =	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
		ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
		ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
		ft_tolower.c ft_toupper.c

OBJ = $(SRC:.c=.o)

SRCB = 	ft_lstnew.c \

OBJB = $(SRCB:.c=.o)

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

%.o: %.c libft.h
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ) $(OBJB)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

bonus: $(OBJ) $(OBJB)
	@ar rcs $(NAME) $(OBJ) $(OBJB)