##
## EPITECH PROJECT, 2024
## make lib
## File description:
## make lib
##

#
# BINARY CREATION
#

SRCDIR = src/

SRC = 		main.c

OBJ = $(SRC:.c=.o)

NAME	=	model

CFLAGS = -Wall -Wextra -I include

CPPFLAGS	=	-g3 -lmy -lmyprintf

FLAGLIB = -L./utilies/my_printf/ -L./utilies/cpool/ -L.

all:		$(NAME)

$(NAME):	$(OBJ)
	$(MAKE) -C utilies/my_printf
	cp utilies/my_printf/libmyprintf.a .
	$(MAKE) -C utilies/cpool
	cp utilies/cpool/libmy.a .
	gcc $(CFLAGS) -o $(NAME) $(OBJ) $(CPPFLAGS) $(FLAGLIB) -lmy

clean:
	$(MAKE) clean -C utilies/my_printf
	$(MAKE) clean -C utilies/cpool
	rm -f $(OBJ)

fclean: clean
	$(MAKE) fclean -C utilies/my_printf
	$(MAKE) fclean -C utilies/cpool

	rm -f $(NAME)
	rm -f $(LIB)

re:	fclean all
