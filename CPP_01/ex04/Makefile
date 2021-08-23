.PHONY	:	all clean fclean re

NAME	=	replace

HEADER	=	replace.hpp

SRC		=	main.cpp	replace.cpp

FLAGS	=   -Wall -Wextra -Werror -std=c++98

OBJ		=	$(patsubst %.cpp, %.o, $(SRC))

all		:	$(NAME)

$(NAME):	$(SRC)	$(HEADER)
	clang++ $(FLAGS) -c $(SRC)
	clang++ $(FLAGS) $(OBJ) -o $(NAME)

clean	:
	rm -f $(OBJ)
	rm -rf *.replace

fclean	:	clean
	rm -f $(NAME)