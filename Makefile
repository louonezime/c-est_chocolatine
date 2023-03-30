##
## EPITECH PROJECT, 2023
## choco-bueno
## File description:
## Makefile
##

CPPFLAGS +=	-I./include

BASE_SRC	=	src/fizzbuzz.c	\
			src/my_putchar.c	\
			src/my_putstr.c		\
			src/my_put_nbr.c

SRC	=	$(BASE_SRC)	\
		src/main.c

TEST_SRC =	$(BASE_SRC) 			\
			tests/tests_stumper.c

OBJ	=	$(SRC:.c=.o)

NAME	=	choco

CC	=	gcc

all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

unit_tests:     $(NAME)
	make && \
	gcc -o $(TEST_NAME) $(TEST_SRC) $(CPPFLAGS) --coverage -lcriterion

tests_run:
	make unit_tests && ./$(TEST_NAME)

re: fclean all

.PHONY: all clean fclean re unit_tests tests_run
