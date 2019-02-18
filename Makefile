##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

NAME	= 	my_defender

CC		= 	gcc

RM		= 	rm -f

SRCS	= 	sources/main.c					\
			sources/my_defender.c			\

OBJS	= $(SRCS:.c=.o)

CFLAGS = -Iinclude
CFLAGS += -Wall -Wextra
CFLAGS += -L./library/printf -lprintf
CFLAGS += -lcsfml-system -lcsfml-audio -lcsfml-graphics -lcsfml-window
CFLAGS += -ggdb3

LDFLAGS = -L./library/printf -lprintf
LDFLAGS += -lcsfml-system -lcsfml-audio -lcsfml-graphics -lcsfml-window

all: mklib $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)
	cd library/printf && make clean

fclean: clean
	$(RM) $(NAME)
	$(RM) *~ -f $(NAME)
	$(RM) *# -f $(NAME)
	cd library/printf && make fclean

mklib:
	cd library/printf && make

re	: 	fclean all

.PHONY	: 	all clean fclean re
