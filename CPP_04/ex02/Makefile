.PHONY	:	all clean fclean re

NAME	=	Animal

HEADER	=	Animal.hpp\
			Cat.hpp				Dog.hpp	\
			Brain.hpp

SRC		=	Animal.cpp			main.cpp\
			Cat.cpp				Dog.cpp\
			Brain.cpp

FLAGS	=   -Wall -Wextra -Werror -std=c++98

OBJ		=	$(patsubst %.cpp, %.o, $(SRC))

all		:	$(NAME)

$(NAME):	$(SRC) $(HEADER)
	clang++ $(FLAGS) -c $(SRC)
	clang++ $(FLAGS) $(OBJ) -o $(NAME)

clean	:
	rm -f $(OBJ)

fclean	:	clean
	rm -f $(NAME)

re		:	fclean all
