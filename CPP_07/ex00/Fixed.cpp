#include "Fixed.hpp"

const int Fixed::_d = 8;

Fixed::Fixed(void)
{
	//std::cout << "Default constructor called" << std::endl;
	this->_x = 0;
}

Fixed::Fixed(int const x)
{
	//std::cout << "Int constructor called" << std::endl;
	this->_x = (x << this->_d);
}

Fixed::Fixed(float const x)
{
	//std::cout << "Float constructor called" << std::endl;
	this->_x = roundf(x * (1 << Fixed::_d));
}

Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const	Fixed &fix)
{
	//std::cout << "Copy constructor called" << std::endl;
	this->_x = fix.getRawBits();
}

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_x);
}

void Fixed::setRawBits(int const raw)
{
	//std::cout << "serRawBits member function called" << std::endl;
	this->_x = raw;
	return ; 
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_x / (float)(1 << this->_d));
}

int	Fixed::toInt(void) const
{
	return (this->_x >> this->_d);
}

Fixed& Fixed::operator=(const Fixed &fix)
{
	//std::cout << "Assignation operator called" << std::endl;
	this->_x = fix.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream &out, const Fixed &fix)
{
	out << fix.toFloat();
	return (out);
}

// new block

bool Fixed::operator>(Fixed const &fix) const 
{
	return (this->getRawBits() > fix.getRawBits());
}

bool Fixed::operator<(Fixed const &fix) const 
{
	return (this->getRawBits() < fix.getRawBits());
}

bool Fixed::operator>=(Fixed const &fix) const
{
	return (this->getRawBits() >= fix.getRawBits());
}

bool Fixed::operator<=(Fixed const &fix) const
{
	return (this->getRawBits() <= fix.getRawBits());
}

bool Fixed::operator==(Fixed const &fix) const
{
	return (this->getRawBits() == fix.getRawBits());
}

bool Fixed::operator!=(Fixed const &fix) const
{
	return (this->getRawBits() != fix.getRawBits());
}

Fixed Fixed::operator+(Fixed const &fix)
{
	Fixed val(*this);

	val.setRawBits(this->getRawBits() + fix.getRawBits());
	return (val);
}

Fixed Fixed::operator+(void)
{
	return (*this);
}

Fixed Fixed::operator-(Fixed const &other)
{
	Fixed val(*this);

	val.setRawBits(this->getRawBits() - other.getRawBits());
	return (val);
}

Fixed Fixed::operator-(void)
{
	return ((*this) * (-1));
}

Fixed Fixed::operator*(Fixed const &fix)
{
	Fixed val(*this);

	val.setRawBits((this->getRawBits() * fix.getRawBits()) / (1 << Fixed::_d));
	return (val);
}

Fixed Fixed::operator/(Fixed const &fix)
{
	Fixed val(*this);

	val.setRawBits((this->getRawBits() / fix.getRawBits()) * (1 << Fixed::_d));
	return (val);
}

Fixed Fixed::operator++()
{
	this->_x++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed Fixed::operator--()
{
	this->_x--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

// Fixed &Fixed::max(Fixed &x, Fixed &y)
// {
// 	return (x > y ? x : y);
// }

// Fixed &Fixed::min(Fixed &x, Fixed &y)
// {
// 	return (x < y ? x : y);
// }

// Fixed const &Fixed::max(Fixed const &x, Fixed const &y)
// {
// 	return (x > y ? x : y);
// }

// Fixed const &Fixed::min(Fixed const &x, Fixed const &y)
// {
// 	return (x < y ? x : y);
// }
