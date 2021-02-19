# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mda-cruz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/16 18:31:43 by mda-cruz          #+#    #+#              #
#    Updated: 2021/02/19 20:34:47 by mda-cruz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_strlen.c \
	ft_isprint.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_atoi.c \
	ft_strncmp.c \
	ft_bzero.c \
	ft_memset.c \
	ft_memcpy.c	\
	ft_strlcpy.c \
	ft_strlcat.c
OBJ = *.o 

INC = libft.h

all: $(NAME)

$(NAME):
	@gcc -c -Wall -Wextra -Werror $(SRC) $(INC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean: 
	@/bin/rm -f $(OBJ)


fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
