#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Fixed
{
	private:
		int					_x;
		static const int	_d;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const	Fixed &fix);

		int getRawBits(void) const;
		void setRawBits(int const raw);

		Fixed& operator=(const Fixed &fix);
};

# endif
