##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	./my_hunter.c	\
		./my_hunter.h	\
		./vector.c	\
		./set.c		\
		./init.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_hunter

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(SRC) -Wall -Wextra -lcsfml-graphics -lcsfml-window -I include -o $(NAME) -g

clean:
	rm *.o

fclean: clean
	rm $(NAME)

re:	all
	make clean
