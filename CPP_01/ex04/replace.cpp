#include "replace.hpp"

int	check_arg(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error" << std::endl;
		return (0);
	}
	if (std::string (argv[2]) == "" || std::string (argv[3]) == "")
	{
		std::cout << "Error" << std::endl;
		return (0);
	}
	return (1); 
}
