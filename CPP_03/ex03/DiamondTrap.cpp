#include  "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void):ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap constructor(0 parameter)" << std::endl;
	this->_name = _name + "_clap_name";
	this->_hitpoints = this->FragTrap::_hitpoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap constructor(1 parameter)" << std::endl;
	this->_name = name + "_clap_name";
	this->_hitpoints = this->FragTrap::_hitpoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap const &diamond):ClapTrap(diamond.ClapTrap::_name), ScavTrap(diamond.ScavTrap::_name), FragTrap(diamond.FragTrap::_name)
{
	std::cout << "DiamondTrap copy" << std::endl;
	*this = diamond;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor " <<  this->_name << std::endl;
	return ;
}

void	DiamondTrap::attack(std::string const & target)
{
	this->ScavTrap::attack(target);
	return ;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << this->_name << "(DiamondTrap) | " << this->ClapTrap::_name << "(ClapTrap)" << std::endl;;
	return ;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &diamond)
{
	std::cout << "DiamondTrap operator[=]" << std::endl;
	this->_name = diamond._name;
	this->_hitpoints = diamond._hitpoints;
	this->_energyPoints = diamond._energyPoints;
	this->_attackDamage = diamond._attackDamage;
	return (*this);
}
