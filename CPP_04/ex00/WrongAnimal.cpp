#include "WrongAnimal.hpp"

// public block
WrongAnimal::WrongAnimal(void)
{
	std::cout << GREEN << "WrongAnimal constructor (public)" << DEFAULT << std::endl;
	this->type = "Wrong basic";
}

WrongAnimal::WrongAnimal(WrongAnimal const &a)
{
	std::cout << "WrongAnimal copy" << std::endl;
	this->type = a.type;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << RED << "WrongAnimal destructed" << DEFAULT << std::endl;
}

std::string const &WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << YELLOW << "Basic sound" << DEFAULT << std::endl;
	return ;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &a)
{
	this->type = a.type;
	return (*this);
}

// protected block
WrongAnimal::WrongAnimal(std::string const &type):type(type)
{
	std::cout << GREEN << "WrongAnimal constructor (protected)" << DEFAULT << std::endl;
}
