#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap constructor(0 parameter) " << "(no name)" << std::endl;
	this->_name = "(no name)";
	this->_hitpoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor(1 parameter) " << name << std::endl;
	this->_name = name;
	this->_hitpoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &clap)
{
	std::cout << "ClapTrap copy" << std::endl;
	*this = clap;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor " << this->_name << std::endl;
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << this->_name << "(ClapTrap) attack " << target << " "
	<< BLUE << "[" << this->_attackDamage << "]" << F_NONE << "!" << std::endl; 
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << "(ClapTrap) take "
	<< RED << "[" << amount << "]" << F_NONE << "!" << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_name << "(ClapTrap) repaired "
	<<  GREEN << "[" << amount << "]" << F_NONE << "!" << std::endl;
	return ;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &clap)
{
	std::cout << "ClapTrap operator[=]" << std::endl;
	this->_name = clap._name;
	this->_hitpoints = clap._hitpoints;
	this->_energyPoints = clap._energyPoints;
	this->_attackDamage = clap._attackDamage;
	return (*this); 
}
