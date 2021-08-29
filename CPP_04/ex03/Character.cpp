#include "Character.hpp"

Character::Character(std::string const &name)
{
	std::cout << GREEN << name << "(Character) constructor" << DEFAULT << std::endl;
	this->_name = name;
	this->_num = 0;
	for(int i = 0; i < 4; i++)
		this->_bag[i] = nullptr;
}

Character::~Character(void)
{
	std::cout << RED << this->_name << "(Character) destructor" << DEFAULT << std::endl;
	for(int i = 0; i < 4; i++)
	{
		if(this->_bag[i] != nullptr)
			delete this->_bag[i];
	}
}

Character::Character(Character const &clone)
{
	std::cout << clone._name << "(Character) copy" << std::endl;
	*this = clone;
}

Character &Character::operator=(Character const &copy)
{
	std::cout << copy._name << "(Character) operator [=]" << std::endl;
	this->_name = copy._name;
	this->_num = copy._num;
	for(int i = 0; i < 4; i++)
		this->_bag[i] = copy._bag[i];
	return (*this);
}

std::string const &Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *u)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_bag[i] == nullptr)
		{
			std::cout << this->_name << " take " << AQUA << u->getType() << DEFAULT << std::endl;
			this->_bag[i] = u;
			return ;
		}
	}
	std::cout << this->_name << " no take" << std::endl; 
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout << this->_name << " wrong slot" << std::endl;
	else if (this->_bag[idx] == nullptr)
		std::cout << this->_name << " no drop(empty)" << std::endl;
	else
	{
		std::cout << this->_name << " drop " << AQUA << this->_bag[idx]->getType() << DEFAULT << std::endl;
		this->_bag[idx] = nullptr;
	}
	return ;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
		std::cout << this->_name << " wrong slot" << std::endl;
	else if (this->_bag[idx] == nullptr)
		std::cout << this->_name << " empty" << std::endl;
	else
	{
		std::cout << this->_name ;
		this->_bag[idx]->use(target);
		delete this->_bag[idx];
		this->_bag[idx] = nullptr;
	}
}
