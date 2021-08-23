#include "Point.hpp"

const int Point::_d = 8;

Point::Point(){}

Point::Point(int const x, int const y)
{
	this->_x = Fixed(x);
	this->_y = Fixed(y);
}

Point::Point(float const x, float const y)
{
	this->_x = Fixed(x);
	this->_y = Fixed(y);
}

Point::Point(int const x, float const y)
{
	this->_x = Fixed(x);
	this->_y = Fixed(y);
}

Point::Point(float const x, int const y)
{
	this->_x = Fixed(x);
	this->_y = Fixed(y);
}

Point::Point(const	Point &p)
{
	this->_x = p.getRawBits_x();
	this->_y = p.getRawBits_y();
}

Point::~Point(){}

Fixed	Point::getRawBits_x(void) const
{
	return (this->_x);
}

Fixed	Point::getRawBits_y(void) const
{
	return (this->_y);
}

Point& Point::operator=(const Point &p)
{
	this->_x = p.getRawBits_x();
	this->_y = p.getRawBits_y();
	return (*this);
}

std::ostream& operator<<(std::ostream &out, const Point &p)
{
	out <<"(" << p.getRawBits_x().toFloat() << "," << p.getRawBits_y().toFloat() << ")";
	return (out);
}
