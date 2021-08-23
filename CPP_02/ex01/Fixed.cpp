#include "Fixed.hpp"

const int Fixed::_d = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_x = 0;
}

//new
Fixed::Fixed(int const x)
{
	std::cout << "Int constructor called" << std::endl;
	this->_x = (x << this->_d);
}

//new
Fixed::Fixed(float const x)
{
	std::cout << "Float constructor called" << std::endl;
	this->_x = roundf(x * (1 << Fixed::_d));
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
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_x);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "serRawBits member function called" << std::endl;
	this->_x = raw;
	return ; 
}

//new
float	Fixed::toFloat(void) const
{
	return ((float)this->_x / (float)(1 << this->_d));
}

//new
int	Fixed::toInt(void) const
{
	return (this->_x >> this->_d);
}

Fixed& Fixed::operator=(const Fixed &fix)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_x = fix.getRawBits();
	return (*this);
}

//new
std::ostream& operator<<(std::ostream &out, const Fixed &fix)
{
	out << fix.toFloat();
	return (out);
}
