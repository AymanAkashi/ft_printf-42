# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaggoujj <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 19:14:08 by aaggoujj          #+#    #+#              #
#    Updated: 2021/12/03 14:44:53 by aaggoujj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c ft_printf_utils.c ft_printf_utils_2.c

OBJS :=${SRCS:.c=.o}

CC = gcc -Wall -Wextra -Werror
INCLUDES = ft_printf.h
all: $(NAME)
$(NAME): $(OBJS)
	ar -rsc $(NAME) $(OBJS)
%.o: %.c
	cc -c $< -I$(INCLUDES) -o $@
clean:
	rm -f $(OBJS)
fclean:
	rm -f $(NAME) $(OBJS)
re : fclean all
