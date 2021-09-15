#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cmath>
# include <iomanip>

# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define F_NONE		"\033[37m"

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

		bool operator>(Fixed const &fix) const;
		bool operator<(Fixed const &fix) const;
		bool operator>=(Fixed const &fix) const;
		bool operator<=(Fixed const &fix) const;
		bool operator==(Fixed const &fix) const;
		bool operator!=(Fixed const &fix) const;

		Fixed operator+(Fixed const &fix);
		Fixed operator+(void);
		Fixed operator-(Fixed const &fix);
		Fixed operator-(void);
		Fixed operator*(Fixed const &fix);
		Fixed operator/(Fixed const &fix);

		Fixed operator++(int);
		Fixed operator++();
		Fixed operator--(int);
		Fixed operator--();

		static Fixed 		&max(Fixed &x, Fixed &y);
		static Fixed 		&min(Fixed &x, Fixed &y);
		static Fixed const	&max(Fixed const &x, Fixed const &y);
		static Fixed const	&min(Fixed const &x, Fixed const &y);
};

std::ostream& operator<<(std::ostream &out, const Fixed &fix);

# endif
