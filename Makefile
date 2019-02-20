##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

NAME	= 	my_defender

CC		= 	gcc

RM		= 	rm -f

SRCS	= 	src/main.c					\
			src/my_defender.c 			\

OBJS	= $(SRCS:.c=.o)

CFLAGS = -Iinclude
CFLAGS += -Wall -Wextra
CFLAGS += -L./lib/printf -lprintf
CFLAGS += -lcsfml-system -lcsfml-audio -lcsfml-graphics -lcsfml-window
CFLAGS += -ggdb3

LDFLAGS = -L./lib/printf -lprintf
LDFLAGS += -lcsfml-system -lcsfml-audio -lcsfml-graphics -lcsfml-window

all: mklib $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)
	cd lib/printf && make clean

fclean: clean
	$(RM) $(NAME)
	$(RM) *~ -f $(NAME)
	$(RM) *# -f $(NAME)
	cd lib/printf && make fclean

mklib:
	cd lib/printf && make

re	: 	fclean all

.PHONY	: 	all clean fclean re
