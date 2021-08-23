#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void):ClapTrap()
{
	std::cout << "ScavTrap constructor(0 parameter) " << "(no name)" << std::endl;
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	std::cout << "ScavTrap constructor(1 parameter) " << name << std::endl;
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &scav):ClapTrap(scav._name)
{
	std::cout << "ScavTrap copy" << std::endl;
	*this = scav;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor " <<  this->_name << std::endl;
}

void	ScavTrap::attack(std::string const & target)
{
	std::cout << this->_name << "(ScavTrap) attack " << target << " "
	<< BLUE << "[" << this->_attackDamage << "]" << F_NONE << "!" << std::endl; 
	return ;
}

void ScavTrap::guardGate(void)
{
	std::cout << this->_name << "(ScavTrap) " << YELLOW << "keeper mode" << F_NONE << std::endl; 
	return ;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &scav)
{
	std::cout << "ScavTrap operator[=]" << std::endl;
	this->_name = scav._name;
	this->_hitpoints = scav._hitpoints;
	this->_energyPoints = scav._energyPoints;
	this->_attackDamage = scav._attackDamage;

	return (*this);
}
