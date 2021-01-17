# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: younghch <younghch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/15 15:24:15 by younghch          #+#    #+#              #
#    Updated: 2021/01/15 15:50:23 by younghch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT = libft

LIBFT_A = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra 

SRC = 	
		
SRC_BONUS = 
			
OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	
bonus: $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ_BONUS)

	
so:
	$(CC) -fPIC $(CFLAGS) $(SRC) $(SRC_BONUS)
	gcc -shared -o libft.so $(OBJ) $(OBJ_BONUS)

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
