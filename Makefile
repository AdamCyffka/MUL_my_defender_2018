##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

NAME	= 	navy

CC		= 	gcc

RM		= 	rm -f

SRCS	= 	sources/main.c					\

OBJS	= $(SRCS:.c=.o)

CFLAGS = -Iinclude
CFLAGS += -Wall -Wextra
CFLAGS += -L./library/printf -lprintf
CFLAGS += -ggdb3

LDFLAGS = -L./library/printf -lprintf

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
