# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbyrd <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/26 13:40:18 by nbyrd             #+#    #+#              #
#    Updated: 2022/01/02 19:02:53 by nbyrd            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIST_NAME = alg.c ft_atoi.c ft_putchar_fd.c \
			ft_putstr_fd.c ft_split.c ft_strlen.c \
			max_mix_mean.c pushswap.c rotate_reverse.c \
			swap_push.c valid_input.c

OBJ_NAME= $(patsubst %.c,%.o,$(LIST_NAME))

CC = gcc

CFLAGS = -Wall -Wextra -Werror

INC = pushswap.h

all : $(NAME)

$(NAME) : $(OBJ_NAME) $(INC)
	$(CC) $(CFLAGS) $(OBJ_NAME) -o $(NAME)

clean :
	@rm -f $(OBJ_NAME)
fclean : clean
	@rm -f $(NAME) $(OBJ_NAME)
re : fclean all
.PHONY : all clean fclean re
