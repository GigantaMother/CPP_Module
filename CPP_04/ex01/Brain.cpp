#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << GREEN << "Brain constructor" <<  DEFAULT << std::endl;
}

Brain::Brain(Brain &c)
{
	std::cout << "Brain copy" << std::endl;
	*this = c;
}

Brain::~Brain(void)
{
	std::cout << RED << "Brain destructed" << DEFAULT << std::endl;
}

Brain &Brain::operator=(Brain &source)
{
	for(int i = 0; i < 100; i++)
		this->idea[i] = source.idea[i];
	return (*this);
}
