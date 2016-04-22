NAME =		TicTacToe

CC =		g++

FLG =		-Wall -Wextra -Werror

INC =		-I./inc/ -lSDL2

SRC_DIR =	src/
SRC_FIL =	main.cpp

OBJ_DIR =	obj/
OBJ_FIL =	$(SRC_FIL:.cpp=.o)

SRC =		$(addprefix $(SRC_DIR), $(SRC_FIL))
OBJ =		$(addprefix $(OBJ_DIR), $(OBJ_FIL))

GREEN =		'\033[0;32m'

all: $(NAME)

$(NAME):
	@echo -ne "Creating objects...\\r"
	@$(CC) -O3 -c $(FLG) $(INC) $(SRC)
	@mkdir $(OBJ_DIR) 2> /dev/null || true
	@mv $(OBJ_FIL) $(OBJ_DIR)
	@echo -ne "Creating objects => Compiling...\\r"
	@$(CC) $(OBJ) $(INC) -o $@
	@echo -e "Creating objects => Compiling =>\033[32m Bomberman ready!"

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

run:
	./$(NAME)
