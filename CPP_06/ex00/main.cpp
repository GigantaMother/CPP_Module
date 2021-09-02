#include <iostream>
#include <iomanip>
#include <string>

int	strIsdigit(char	*str, int *count)
{
	bool	point = false;
	bool	f = false;
	bool	accuracy = false;
	*count = 0;

	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		if (accuracy == true && str[i] != 'f')
			*count = *count + 1;
		if (str[i] == '.')
		{
			accuracy = true;
			if (point == false)
				point = true;
			else
				return (0);
		}
		else if (str[i] == 'f')
		{
			if (f == false)
				f = true;
			else
				return (0);
		}
		else if ((str[i] == '+' || str[i] == '-'))
		{
			if (i != 0)
				return (0);
		}
		else if (isdigit(str[i]) == 0)
			return (0);
	}
	return (1);
}

void	printChar(char *str)
{
	char	c;
	int		count;

	if (strlen(str) == 1)
	{
		if (str[0] >= '0' && str[0] <= '9')
			std::cout << "  char: " << "Non displayable" << std::endl;
		else if (str[0] >= 32 && str[0] <= 126)
			std::cout << "  char: " << "{" << str[0] << "}" << std::endl;
		else
			std::cout << "  char: " << "Non displayable" << std::endl;
	}
	else if(strIsdigit(str, &count))
	{
		int num = atof(str);
		if (num >= 32 && num <= 126)
		{
			c = static_cast<char>(num);
			std::cout << "  char: " << "{" << c << "}" << std::endl;
		}
		else if ((num < 32 && num >= 0) || num == 127)
			std::cout << "  char: " << "Non displayable" << std::endl;
		else
			std::cout << "  char: " << "impossible" << std::endl;
	}
	else
		std::cout << "  char: " << "impossible" << std::endl;
}

void printSpec(char	*str)
{
	int i = 5;

	if ((strlen(str) == 5))
		i = 4;
	if (str[0] == 'n')
		i = 3;

	std::string new_str = ((std::string)str).substr(0, i);

	std::cout << "   int: " << "impossible" << std::endl;
	std::cout << " float: " << new_str << "f" << std::endl;
	std::cout << "double: " << new_str << std::endl;
}

void	printNum(char *str)
{
	int		i;
	float	f;
	double 	d;

	double	num = -1;
	int		marker = -1;
	int 	accuracy = -1;

	if (strlen(str) == 1)
	{
		i = static_cast<int>(str[0]);
		f = static_cast<float>(str[0]);
		d = static_cast<double>(str[0]);

		std::cout << "   int: " << i << std::endl;
		std::cout << std::fixed << std::setprecision(1) << " float: " << f << "f" << std::endl;
		std::cout << std::fixed << std::setprecision(1) << "double: " << d << std::endl;
		return ;
	}

	if (strIsdigit(str, &accuracy))
	{
		marker = 1;
		num = atof(str);
	}
	else
		marker = 0;


	if (accuracy == 0)
		accuracy++;
	if (marker == 1)
	{
		if (num > INT_MAX || num < INT_MIN)
			std::cout << "   int: " << "impossible" << std::endl;
		else
		{
			i = static_cast<int>(num);
			std::cout << "   int: " << i << std::endl;
		}
		f = static_cast<float>(num);
		std::cout << std::fixed << std::setprecision(accuracy) << " float: " << f << "f" << std::endl;
		double	d = static_cast<double>(num);
		std::cout << std::fixed << std::setprecision(accuracy) << "double: " << d << std::endl;
	}
	else
	{
		std::cout << "   int: " << "impossible" << std::endl;
		std::cout << " float: " << "impossible" << std::endl;
		std::cout << "double: " << "impossible" << std::endl;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "Error" << std::endl;
	else
	{
		std::cout << "_________________" << std::endl;
		printChar(argv[1]);
		if (strcmp(argv[1], "-inf") == 0 || strcmp(argv[1], "+inf") == 0 || strcmp(argv[1], "nan") == 0 ||
			strcmp(argv[1], "-inff") == 0 || strcmp(argv[1], "+inff") == 0 || strcmp(argv[1], "nanf") == 0)
			printSpec(argv[1]);
		else
			printNum(argv[1]);
	}
	std::cout << "_________________" << std::endl;
	return (0);
}
