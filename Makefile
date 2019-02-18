NAME	= my_defender

CC	= gcc

RM	= rm -f

SRCS	= src/main.c

OBJS	= $(SRCS:=.o)

CFLAGS = -Iinclude
CFLAGS += -Wall -Wextra
CFLAGS += -lcsfml-system -lcsfml-audio -lcsfml-graphics -lcsfml-window
CFLAGS += -ggdb3

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) *~ -f $(NAME)
	$(RM) *# -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
