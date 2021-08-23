#include "Karen.hpp"

int	main(void)
{
	Karen karen;

	std::cout << "___________" << std::endl;
	karen.complain("debug");
	std::cout << "___________" << std::endl;
	karen.complain("info");
	std::cout << "___________" << std::endl;
	karen.complain("warning");
	std::cout << "___________" << std::endl;
	karen.complain("error");
	std::cout << "___________" << std::endl;
	karen.complain("42");
	std::cout << "___________" << std::endl;

	return (0);
}
