NAME	= my_defender

CC	= gcc

RM	= rm -f

SRCS	= sources/main.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -Iinclude
CFLAGS += -Wall -Wextra
CFLAGS += -L./lib/printf -lprintf
CFLAGS += -lcsfml-system -lcsfml-audio -lcsfml-graphics -lcsfml-window
CFLAGS += -ggdb3

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

re: fclean all

.PHONY: all clean fclean re
