#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << GREEN << "MateriaSource created" << DEFAULT << std::endl;
	this->_num = 0;
	for(int i = 0; i < 4; i++)
		this->_book[i] = NULL;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << RED << "MateriaSource destroyed" << DEFAULT << std::endl;
	for(int i = 0; i < this->_num; i++)
		delete this->_book[i];
}

void MateriaSource::learnMateria(AMateria *learn)
{
	if (this->_num >= 4)
	{
		std::cout << "Book elements= 4(no add)" << std::endl;
		delete learn;
	}
	else
	{
		std::cout << AQUA << learn->getType() << DEFAULT << " studied and add in book" << std::endl;
		this->_book[_num] = learn;
		this->_num++;
	}
	return ;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for(int i = 0; i < this->_num; i++)
	{
		if (type == this->_book[i]->getType())
		{
			std::cout << "Matter found" << std::endl;
			return (this->_book[i]->clone());
		}
	}
	std::cout << "Matter not found" << std::endl;
	return (nullptr);
}
