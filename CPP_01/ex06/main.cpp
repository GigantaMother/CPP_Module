#include "Karen.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error" << std::endl;
		return (1);
	}

	Karen karen;

	std::cout << "___________" << std::endl;
	karen.complain(argv[1]);
	std::cout << "___________" << std::endl;
	
	return (0);
}