NAME = libft.a
SRC = ./srcs/ft_putchar ./srcs/ft_putstr ./srcs/ft_strcmp ./srcs/ft_strlen ./srcs/ft_swap
INC = includes

all:
	gcc -Wall -Wextra -Werror -c $(SRC) -I $(INC)
	ar rc $(NAME) *-o
	ranlib $(NAME)

clean:
	rm -f *.o
	rm -f *~

fclean: clean
	rm -f libft.a

re: fclean all
