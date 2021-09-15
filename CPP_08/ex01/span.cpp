#include "span.hpp"

Span::Span(void)
{
	this->_size = 0;
	this->_len = 0;
	this->_longest = -1;
	this->_shortest = -1;
	this->_long = false;
	this->_short = false;
}

Span::Span(unsigned int num)
{
	this->_size = num;
	this->_len = 0;
	this->_longest = -1;
	this->_shortest = -1;
	this->_long = false;
	this->_short = false;
}

Span::Span(const Span &span)
{
	this->_array = span._array;
	this->_size = span._size;
}

Span::~Span(void){}

void	Span::printArr()
{
	for (std::vector<int>::iterator i = this->_array.begin(); i < this->_array.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
}

void	Span::addNumber(int number)
{
	if (this->_len < this->_size)
	{
		this->_long = false;
		this->_short = false;
		this->_len++;
		this->_array.push_back(number);
	}
	else
		throw SpanException("no add, full");
}

void Span::addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	int len = std::distance(first, last);

	if ((this->_len + len) > this->_size)
		throw SpanException("no add, full");
	this->_array.insert(this->_array.end(), first, last);
	this->_long = false;
	this->_short = false;
	this->_len += len;
}

long long int	Span::shortestSpan(void)
{
	if (this->_len <= 1)
		throw SpanException("small quantity elements");
	
	if (this->_short == false)
	{
		long long int	dist = this->_shortest;

		std::sort(this->_array.begin(), this->_array.end());
		dist = llabs((long long int)this->_array[0] - (long long int)this->_array[1]);
		for (std::vector<int>::iterator i = this->_array.begin() + 2; i < this->_array.end(); i++)
		{
			dist = std::min(dist, llabs((long long int)*i - (long long int)*(i - 1)));
			if (dist == 0)
				break ;
		}
		this->_shortest = dist;
		this->_short = true;
	}
	return (this->_shortest);
}

long long int	Span::longestSpan(void)
{
	if (this->_len <= 1)
		throw SpanException("small quantity elements");
	if (this->_long == false)
	{
		std::vector<int>::const_iterator i1 = max_element(this->_array.begin(), this->_array.end());
		std::vector<int>::const_iterator i2 = min_element(this->_array.begin(), this->_array.end());
		this->_longest = llabs((long long int)*i1 - (long long int)*i2);
		this->_long = true;
	}
	return (this->_longest);
}

Span	&Span::operator=(const Span &span)
{
	if (this == &span)
		return (*this);
	this->_array = span._array;
	this->_size = span._size;
	return (*this);
}

//Exception

Span::SpanException::SpanException(std::string error)
{
	this->_error = error;
}

const char* Span::SpanException::what() const throw()
{
	return (this->_error.c_str());
}

Span::SpanException::~SpanException() throw() {}
