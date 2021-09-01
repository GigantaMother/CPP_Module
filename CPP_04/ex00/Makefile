.PHONY	:	all clean fclean re

NAME	=	Animal

HEADER	=	Animal.hpp\
			Cat.hpp				Dog.hpp	\
			WrongAnimal.hpp		WrongCat.hpp

SRC		=	Animal.cpp			main.cpp\
			Cat.cpp				Dog.cpp\
			WrongAnimal.cpp		WrongCat.cpp

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
