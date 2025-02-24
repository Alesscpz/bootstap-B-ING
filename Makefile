##
## EPITECH PROJECT, 2024
## make lib
## File description:
## make lib
##

#
# HELP TO BUILD
#

CC 			?=	gcc

CP			?=	cp

RM			?=	rm -rf

#
# BINARY CREATION
#

SRC 		= 		main.c													\
					src/convert_deg_rad.c									\
					src/create_window.c										\
					src/manage_wireframe.c

OBJ			=		$(SRC:.c=.o)

NAME		=		model

CFLAGS		=		-Wall -Wextra -I include

CPPFLAGS	=		-g3

FLAGLIB		=		 -L.

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(CPPFLAGS) $(FLAGLIB)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) -f $(NAME)
	$(RM) -f $(LIB)

re:	fclean all
