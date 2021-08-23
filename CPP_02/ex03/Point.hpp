#include "Fixed.hpp"

class Point
{
	private:
		Fixed 				_x;
		Fixed 				_y;
		static const int	_d;
	public:
		Point();
		Point(int const x, int const y);
		Point(float const x, float const y);
		Point(int const x, float const y);
		Point(float const x, int const y);
		Point(const	Point &p);
		~Point();

		Fixed	getRawBits_x(void) const;
		Fixed	getRawBits_y(void) const;

		Point& operator=(const Point &p);
};

std::ostream& operator<<(std::ostream &out, const Point &p);
