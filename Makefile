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
					src/print_error.c										\
					src/3d_to_2d.c											\
					src/simulation.c										\
					src/manage_wireframe.c

OBJ			=		$(SRC:.c=.o)

NAME		=		model

CFLAGS		=		-Wall -Wextra -I include

CPPFLAGS	+=	-g3 -lcsfml-audio -lcsfml-graphics
CPPFLAGS	+=	-lcsfml-network -lcsfml-system -lcsfml-window -lm

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

tests_run:
	gcc -o unit_test $(SRC) tests/unit_test.c -I include --coverage -lcriterion
	./unit_test

coverage: tests_run
	gcovr
	@find -name "*.gcda" -delete -o -name "*.gcno" -delete
	@find -name "unit_tests"	-delete

coding_style:
	coding-style . .
	@cat coding-style-reports.log
	@rm -f "coding-style-reports.log";
