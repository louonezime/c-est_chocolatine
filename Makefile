##
## EPITECH PROJECT, 2023
## make
## File description:
## file
##

CPPFLAGS +=	-I./include

BASE_SRC	=	src/fizzbuzz.c	\
			src/my_putchar.c\
			src/my_putstr.c	\
			src/my_put_nbr.c

SRC	=	$(BASE_SRC)	\
		src/main.c

TEST_SRC =	$(BASE_SRC) 	\
		tests/tests_stumper.c

TEST_NAME =	unit_tests

OBJ	=	$(SRC:.c=.o)

NAME	=	fizzbuzz

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

debug:	CFLAGS += -g
debug:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f $(TEST_NAME)
	rm -f *.c~
	rm -f *.gcno
	rm -f *.gcda

re:	fclean all

unit_tests:     $(NAME)
	make && \
	gcc -o $(TEST_NAME) $(TEST_SRC) $(CPPFLAGS) --coverage -lcriterion

tests_run:
	make unit_tests && ./$(TEST_NAME)

.PHONY:	all clean fclean re debug unit_tests tests_run
