##
## EPITECH PROJECT, 2018
## makefile
## File description:
## task01
##

SRC	=	my_putchar.c			\
		my_put_nbr.c			\
		my_putstr.c				\
		my_printf.c				\

OBJ	=	$(SRC:.c=.o)

NAME	=	libprintf.a

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all
