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
	std::string	str[] = {"debug", "info", "warning", "error"};

	int	i = 0;
	for (; i < 4 && level != str[i]; ++i){}
	for(int j = i ; j < 4; j++)
	{
		(this->*f[j])();
		return ;
	}
	std::cout << "invalid action" << std::endl;
	return ;
}
