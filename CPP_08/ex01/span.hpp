#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>

# include <vector>
# include <algorithm>

class Span
{
	private:
		std::vector<int>	_array;
		unsigned int		_size;
		unsigned int		_len;
		bool 				_long;
		long long int		_longest;
		bool 				_short;
		long long int		_shortest;

		Span(void);

	public:
		Span(unsigned int num);
		Span(const Span &span);
		~Span(void);

		void		printArr();

		void			addNumber(int number);
		void			addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last);
		long long int	shortestSpan(void);
		long long int	longestSpan(void);

		Span &operator=(const Span &span);

		class SpanException: public std::exception
		{
			private:
				std::string _error;
			public:
				SpanException(std::string error);
				const char* what() const throw();
				virtual ~SpanException() throw();
		};
};

# endif
