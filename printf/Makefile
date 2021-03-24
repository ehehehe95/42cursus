NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I. -c

SRC = 	ft_printf.c \
		ft_options.c \
		ft_utils.c \
		ft_print_char.c \
		ft_print_string.c\
		ft_print_decimal.c\
		ft_print_unsigned.c\
		ft_print_hex.c\
		ft_print_pointer.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) libft
	cp libft_src/libft.a ./$(NAME)
	ar rcs $(NAME) $(OBJ)

libft:
	@$(MAKE) -C ./libft_src all

clean:
	@$(MAKE) -C ./libft_src clean
	rm -f $(OBJ)

fclean: clean
	@$(MAKE) -C ./libft_src fclean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re libft