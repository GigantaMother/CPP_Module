#include "Fixed.hpp"

const int Fixed::_d = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_x = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const	Fixed &fix)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_x = fix.getRawBits();
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_x);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "serRawBits member function called" << std::endl;
	this->_x = raw;
	return ; 
}

Fixed& Fixed::operator=(const Fixed &fix)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_x = fix.getRawBits();
	return (*this);
}
