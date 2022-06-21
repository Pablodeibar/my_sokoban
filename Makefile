##
## EPITECH PROJECT, 2022
## make
## File description:
## make
##

SRC		=		src/main.c					\
				src/my_put.c				\
				src/main_functions.c		\
				src/for_file.c				\
				src/game.c					\
				src/gameplay.c				\
				src/split.c					\
				src/verif_map.c				\
				src/barrils.c				\
				src/errors.c				\
				src/endgame.c				\
				src/all_coo.c				\
				src/bar_block.c				\
				src/verif_bar_pos.c			\
				src/spawn_zero.c			\
				src/for_window.c			\

SRC_TESTS	=	src/my_put.c				\
				src/main_functions.c		\
				src/for_file.c				\
				src/game.c					\
				src/gameplay.c				\
				src/split.c					\
				src/verif_map.c				\
				src/barrils.c				\
				src/errors.c				\
				src/endgame.c				\
				src/all_coo.c				\
				src/bar_block.c				\
				src/verif_bar_pos.c			\
				src/spawn_zero.c			\
				test/basic_test.c			\
				test/window_test.c			\
				test/move_test.c			\
				test/win_loose.c			\
				src/for_window.c			\

OBJ			=	$(SRC:%.c=%.o)

NAME		=	my_sokoban

NAME_TEST	=	unit_tests

CC			=	gcc

CFLAGS		=	-I./include -lncurses

TEST_FLAGS	=	--coverage -lcriterion

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

tests_run:
			$(CC) -o $(NAME_TEST) $(SRC_TESTS) $(CFLAGS) $(TEST_FLAGS)
			./$(NAME_TEST)
			gcovr

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)
			rm *.gcno
			rm *.gcda
			rm unit_tests

re:			fclean all

debug:	CFLAGS += -g
debug:	re

.PHONY		=	all clean fclean re
