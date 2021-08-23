#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);
void	bsp_print(bool f);

int main( void )
{
	std::cout << "________________" << std::endl;

	Point	a(1, 1), b(4, 1) , c(4, 5);

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;

	std::cout << "________________" << std::endl;
	Point 	d(3, 3);
	std::cout << "d: " << d << std::endl;
	bsp_print ((bsp(a, b, c, d)));
	std::cout << "________________" << std::endl;
	Point 	e(5, 3);
	std::cout << "e: " << e << std::endl;
	bsp_print ((bsp(a, b, c, e)));
	std::cout << "________________" << std::endl;
	Point 	m(1, 1);
	std::cout << "m: " << m << std::endl;
	bsp_print ((bsp(a, b, c, m)));
	std::cout << "________________" << std::endl;
	std::cout << "Test same parameters 1: " << std::endl;
	bsp_print ((bsp(a, a, c, m)));
	std::cout << "________________" << std::endl;
	std::cout << "Test same parameters 2: " << std::endl;
	bsp_print ((bsp(a, a, c, a)));
	std::cout << "________________" << std::endl;
	std::cout << "Test same parameters 3: " << std::endl;
	bsp_print ((bsp(a, b, c, a)));
	std::cout << "________________" << std::endl;
	std::cout << "Test triangle line: " << std::endl;
	Point 	t(4, 2);
	bsp_print ((bsp(a, b, c, t)));
	std::cout << "________________" << std::endl;

	return (0);
}