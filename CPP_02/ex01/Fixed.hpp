#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cmath>
# include <iomanip>

class Fixed
{
	private:
		int					_x;
		static const int	_d;
	public:
		Fixed(void);
		Fixed(int const x);
		Fixed(float const x);
		~Fixed(void);
		Fixed(const	Fixed &fix);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

		Fixed& operator=(const Fixed &fix);
};

std::ostream& operator<<(std::ostream &out, const Fixed &fix);

# endif
