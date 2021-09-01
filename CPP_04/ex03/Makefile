.PHONY	:	all clean fclean re

NAME	=	Materia

HEADER	=	AMateria.hpp	Character.hpp		Cure.hpp			Ice.hpp\
			ICharacter.hpp	IMateriaSource.hpp	MateriaSource.cpp

SRC		=	AMateria.cpp	Character.cpp	Cure.cpp	Ice.cpp		main.cpp	MateriaSource.cpp\

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
