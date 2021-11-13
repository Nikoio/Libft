# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mellamae <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/11 22:51:45 by mellamae          #+#    #+#              #
#   Updated: 2021/10/16 22:48:15 by                  ###   ########.fr       # #
#                                                                              #
# **************************************************************************** #

SRCS = ./ft_atoi.c ./ft_bzero.c ./ft_calloc.c ./ft_isalnum.c ./ft_isalpha.c   \
 	./ft_isascii.c ./ft_isdigit.c ./ft_isprint.c ./ft_itoa.c ./ft_memchr.c \
 	./ft_memcmp.c ./ft_memcpy.c ./ft_memmove.c ./ft_memset.c ./ft_putchar_fd.c \
 	./ft_putendl_fd.c ./ft_putnbr_fd.c ./ft_putstr_fd.c ./ft_split.c ./ft_strchr.c \
 	./ft_strdup.c ./ft_striteri.c ./ft_strjoin.c ./ft_strlcat.c ./ft_strlcpy.c \
 	./ft_strlen.c ./ft_strmapi.c ./ft_strncmp.c ./ft_strnstr.c ./ft_strrchr.c \
 	./ft_strtrim.c ./ft_substr.c ./ft_tolower.c ./ft_toupper.c


OBJC = ${SRCS:.c=.o}

H = libft.h

CC = gcc
GFS = -Wall -Wextra -Werror
NAME = libft.a

.c.o: $(H)
	$(CC) $(GFS) -c $<

all: $(NAME)

$(NAME): $(OBJC)
	ar rc $(NAME) $(OBJC)

clean:
	-rm -f $(OBJC)

fclean: clean
	-rm -f $(NAME)

re: fclean all

.PHONY: all clean re
