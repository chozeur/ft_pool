# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flcarval <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 16:17:50 by flcarval          #+#    #+#              #
#    Updated: 2021/11/03 18:34:30 by flcarval         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = $(addprefix srcs/, ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c\
	       ft_strcmp.c)
OBJS = ${SRC:.c=.o}
CC = gcc
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	   ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
