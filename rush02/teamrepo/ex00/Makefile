# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chilee <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/30 19:30:57 by chilee            #+#    #+#              #
#    Updated: 2021/10/31 17:17:00 by chilee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
NAME = rush-02 
RM = rm
FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) -o $@ $^

%.o : %.c 
	$(CC) $(FLAGS) -o $@ -c $<

.PHONY : clean fclean

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)
