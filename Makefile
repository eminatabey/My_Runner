##
## EPITECH PROJECT, 2020
## Makefile Runner
## File description:
## Makefile Runner
##

#ifndef _MY_H_
#define _MY_H_

NAME	=	my_runner

CPPFLAGS	=	-lcsfml-graphics -lcsfml-system -lcsfml-audio -L./lib -lmy -I./include

CFLAGS	=	-Wall -Wextra

all: Makelib
	gcc -o $(NAME) *.c $(CPPFLAGS)

Makelib:
	make -C lib/my
clean: all
	make clean -C lib/my

fclean: clean
	rm -f $(NAME)

re: clean all

#endif /* _MY_H_ */
