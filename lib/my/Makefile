##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ..
	rm $(NAME)
	cp my.h ../../include
clean:
	rm $(OBJ)
	rm ../$(NAME)
	rm ../../include/my.h

fclean: clean
