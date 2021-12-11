# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbelo <gbelo-so@student.42sp.org.br>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 17:27:02 by gbelo-so          #+#    #+#              #
#    Updated: 2021/10/04 02:12:16 by gbelo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isascii.c ft_isalpha.c ft_isdigit.c \
		ft_isprint.c ft_strlen.c ft_strnstr.c ft_tolower.c \
		ft_toupper.c ft_isalnum.c ft_strchr.c ft_strrchr.c \
		ft_memset.c ft_memmove.c ft_memcpy.c ft_memchr.c \
		ft_bzero.c ft_calloc.c ft_memcmp.c ft_strncmp.c \
		ft_atoi.c ft_strdup.c ft_strlcat.c ft_strlcpy.c \
		ft_substr.c ft_strtrim.c ft_itoa.c ft_strjoin.c \
		ft_split.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS = $(SRC:.c=.o)

NAME = libft.a

CFLAGS= -Wall -Werror -Wextra -c

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRC)
	gcc $(CFLAGS) $(SRC)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
