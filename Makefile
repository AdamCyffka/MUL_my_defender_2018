##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

NAME	= 	my_defender

CC		= 	gcc

RM		= 	rm -f

SRCS	= 	src/main.c							\
			src/my_defender.c 					\
			src/make_game.c						\
			src/destroy_scene.c					\
			src/fill_scene/fill_scene0to1.c		\
			src/fill_scene/fill_scene2.c		\
			src/fill_scene/fill_scene3.c		\
			src/fill_scene/fill_scene4.c		\
			src/fill_scene/fill_scene4bis.c		\
			src/fill_scene/fill_scene5.c		\
			src/fill_scene/fill_scene5bis.c		\
			src/fill_scene/fill_scene6to8.c		\
			src/gameloop/game_change.c			\
			src/gameloop/objs_interaction.c		\
			src/gameloop/scene_selection.c		\
			src/gameloop/buttons_interaction.c	\
			src/gameloop/draw_scene.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -Iinclude
CFLAGS += -Wall -Wextra
CFLAGS += -L./lib/printf -lprintf
CFLAGS += -lcsfml-system -lcsfml-audio -lcsfml-graphics -lcsfml-window
CFLAGS += -ggdb3

LDFLAGS = -L./lib/printf -lprintf
LDFLAGS += -lcsfml-system -lcsfml-audio -lcsfml-graphics -lcsfml-window
LDFLAGS += -ggdb3

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
