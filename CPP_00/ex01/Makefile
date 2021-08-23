.PHONY	:	all clean fclean re

NAME	=	PhoneBook

HEADER	=	PhoneBook.hpp	Contact.hpp

SRC		=	PhoneBook.cpp	Contact.cpp		main.cpp

FLAGS	=  -Wall -Wextra -Werror -std=c++98

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
