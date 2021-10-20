##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile for do_op
##

SRC	=	sources/print/my_putstr.c	\
		sources/print/my_putchar.c	\
		sources/print/my_put_nbr.c	\
		sources/print/my_printf.c	\
		sources/print/my_put_unsigned.c	\
		sources/print/my_put_ulong.c	\
		sources/print/wrap_modulo.c	\
		sources/print/dtoo.c	\
		sources/print/dtob.c	\
		sources/print/dtoupperx.c	\
		sources/print/my_revstr.c	\
		sources/print/my_strlowcase.c	\
		sources/print/dtox.c	\
		sources/print/flag_stro.c	\
		sources/print/flag_p.c	\
		sources/man/no_arg.c	\
		sources/man/man.c	\
		sources/man/check_arg.c	\
		sources/my/my_strcmp.c	\
		sources/my/my_strncmp.c	\
		sources/my/my_strcat.c	\
		sources/my/my_strcpy.c	\
		sources/my/my_strncpy.c	\
		sources/my/my_str_to_wa.c	\
		sources/sokoban/my_popup.c	\
		sources/sokoban/file_to_str.c	\
		sources/sokoban/verify_map.c	\
		sources/sokoban/game.c	\
		sources/sokoban/print_map.c	\
		sources/sokoban/storage_position.c	\
		sources/sokoban/display_o.c	\
		sources/sokoban/game_state.c	\
		sources/sokoban/remake.c	\
		sources/main.c	\

OBJ	=	${SRC:%.c=%.o}

NAME	=	my_sokoban

CPPFLAGS=	-I ./includes

CFLAGS	=	-Wall -Wextra -W

CC	=	gcc

all:	${NAME}

${NAME}:	${OBJ}
	${CC} -o ${NAME} ${OBJ} -lncurses

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

debug:	CFLAGS += -g3
debug: re

.PHONY: all clean fclean re
