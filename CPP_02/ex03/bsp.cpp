#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	sign_1, sign_2, sign_3;

	Fixed x1 = a.getRawBits_x();
	Fixed x2 = b.getRawBits_x();
	Fixed x3 = c.getRawBits_x();
	Fixed x0 = point.getRawBits_x();

	Fixed y1 = a.getRawBits_y();
	Fixed y2 = b.getRawBits_y();
	Fixed y3 = c.getRawBits_y();
	Fixed y0 = point.getRawBits_y();

	sign_1 = ((x1 - x0) * (y2 - y1)) - ((x2 - x1) * (y1 - y0));
	sign_2 = ((x2 - x0) * (y3 - y2)) - ((x3 - x2) * (y2 - y0));
	sign_3 = ((x3 - x0) * (y1 - y3)) - ((x1 - x3) * (y3 - y0));

	if (sign_1 < 0 && sign_2 < 0 && sign_3 < 0)
		return (true);
	if (sign_1 > 0 && sign_2 > 0 && sign_3 > 0)
		return (true);

	return (false);
}

void	bsp_print(bool f)
{
	if (f)
		std::cout << GREEN << "In the triangle" << F_NONE << std::endl;
	else
		std::cout <<  RED << "Not in a triangle" << F_NONE << std::endl;
}
