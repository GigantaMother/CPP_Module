.PHONY	:	all clean fclean re

NAME	=	ScavTrap

HEADER	=	ClapTrap.hpp	ScavTrap.hpp

SRC		=	ClapTrap.cpp	ScavTrap.cpp	main.cpp

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