##
## EPITECH PROJECT, 2021
## rpg
## File description:
## Makefile
##

SRC	=	main.c			\
		c/main_game.c	\
		c/display.c		\
		c/events.c		\
		c/fight.c		\
		c/how_to_play.c	\
		c/events/fight.c \
		c/events/menu.c	\
		c/events/game.c	\
		c/events/settings.c	\
		c/events/quest.c \
		c/init/menu.c	\
		c/init/fight.c	\
		c/init/settings.c	\
		c/init/game.c	\
		c/init/music.c	\
		c/lib/lib1.c	\
		c/lib/create_window.c	\
		c/clock/game.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_rpg

CFLAGS	=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio -g

all:	$(NAME)

$(NAME):	$(OBJ)
	$(MAKE) -C lib/my re
	gcc $(OBJ) -o $(NAME) -I./include -L. -lmy $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
