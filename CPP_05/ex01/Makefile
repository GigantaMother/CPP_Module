.PHONY	:	all clean fclean re

NAME	=	Bureaucrat

HEADER	=	Bureaucrat.hpp		Form.hpp

SRC		=	Bureaucrat.cpp		Form.cpp	main.cpp

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
