##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

NAME	= 	navy

CC		= 	gcc

RM		= 	rm -f

<<<<<<< HEAD
SRCS	= 	src/main.c					\
			src/my_defender.c 			\
=======
SRCS	= 	sources/main.c					\
>>>>>>> d96d0eb48b3cbbd1d47a4f5b0a01cc326059794c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -Iinclude
CFLAGS += -Wall -Wextra
<<<<<<< HEAD
CFLAGS += -L./lib/printf -lprintf
CFLAGS += -lcsfml-system -lcsfml-audio -lcsfml-graphics -lcsfml-window
CFLAGS += -ggdb3

LDFLAGS = -L./lib/printf -lprintf
LDFLAGS += -lcsfml-system -lcsfml-audio -lcsfml-graphics -lcsfml-window
=======
CFLAGS += -L./library/printf -lprintf
CFLAGS += -ggdb3

LDFLAGS = -L./library/printf -lprintf
>>>>>>> d96d0eb48b3cbbd1d47a4f5b0a01cc326059794c

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
