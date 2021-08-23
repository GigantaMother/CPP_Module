#include "FragTrap.hpp"

FragTrap::FragTrap(void):ClapTrap()
{
	std::cout << "FragTrap constructor(0 parameter) " << "(no name)" << std::endl;
	this->_hitpoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	std::cout << "FragTrap constructor(1 parameter) " << name << std::endl;
	this->_hitpoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &frag):ClapTrap(frag._name)
{
	std::cout << "FragTrap copy" << std::endl;
	*this = frag;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor " <<  this->_name << std::endl;
}

void FragTrap::attack(std::string const &target)
{
	std::cout << this->_name << "(FragTrap) attack " << target << " "
	<< BLUE << "[" << this->_attackDamage << "]" << F_NONE << "!" << std::endl; 
	return ;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << "(FragTrap) " << YELLOW << "give five" << F_NONE << std::endl;
	return ;
}

FragTrap &FragTrap::operator=(FragTrap const &frag)
{
	std::cout << "FragTrap operator[=]" << std::endl;
	this->_name = frag._name;
	this->_hitpoints = frag._hitpoints;
	this->_energyPoints = frag._energyPoints;
	this->_attackDamage = frag._attackDamage;

	return (*this);
}
