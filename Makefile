# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mda-cruz <user@student.42lisboa.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/28 13:24:58 by mda-cruz          #+#    #+#              #
#    Updated: 2021/03/05 17:50:46 by mda-cruz         ###   ########.fr        #
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
	ft_strlcat.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strnstr.c \
	ft_memccpy.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_calloc.c \
	ft_strdup.c

SRCSO=${SRC:.c=.o}

all: $(NAME)

$(NAME):$(SRCSO)
	ar rc $(NAME) $(SRCSO)
	ranlib $(NAME)

$(SRCSO):
	gcc -Wall -Wextra -Werror -c $(SRC)

so:
	cc -shared -o libft.so -fPIC ft*.c 

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all