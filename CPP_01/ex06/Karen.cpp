#include "Karen.hpp"

Karen::Karen(void){}

Karen::~Karen(void){}

void Karen::debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	return ;
}

void Karen::info(void)
{
	std::cout << "[INFO]" << std::endl;
	return ;
}

void Karen::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	return ;
}

void Karen::error(void)
{
	std::cout << "[ERROR]" << std::endl;
	return ;
}

void Karen::complain(std::string level)
{
	void		(Karen::*f[])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string	str[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int	i = 0;
	for (; i < 4 && level != str[i]; ++i){}
	
	switch (i)
	{
	case 0:
		(this->*f[0])();
	case 1:
		(this->*f[1])();
	case 2:
		(this->*f[2])();
	case 3:
		(this->*f[3])();
		break ;
	default:
		std::cout << "invalid action" << std::endl;
	}
	return ;
}
