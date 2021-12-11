# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbelo-so <gbelo-so@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/11 18:12:22 by gbelo-so          #+#    #+#              #
#    Updated: 2021/12/11 18:12:27 by gbelo-so         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT = ./libft/libft.a

CFLAGS = -Wall -Wextra -Werror

INCLUDES = -I. -Ilibft/

AR = ar rcs

FT = ft_printf.c \
		print_char.c \
		print_number.c \
		print_pointer.c \
		print_string.c \
		print_udecimal.c \
		print_low_hex.c \
		print_up_hex.c

SRCS = $(addprefix sources/,$(FT))

OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME):$(OBJS) $(LIBFT)
		cp $(LIBFT) ./$@
		$(AR) $(NAME) $(OBJS)

%.o:%.c
		clang -c $(INCLUDES) $(CFLAGS) $< -o $@

$(LIBFT):
		$(MAKE) -C ./libft

clean:
	rm -f $(OBJS)
	$(MAKE) clean -C ./libft

fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C ./libft

re: fclean all

.PHONY : all clean fclean re