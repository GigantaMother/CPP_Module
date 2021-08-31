#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): Form("ShrubberyCreationForm", 145, 137, target)	
{
	std::cout << GREEN << "(ShrubberyCreationForm) constructor" << DEFAULT << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy):Form(copy)
{
	std::cout << "(ShrubberyCreationForm) copy" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << RED << "(ShrubberyCreationForm) destructor" << DEFAULT << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &f)
{
	if (this == &f)
		return (*this); 
	Form::operator=(f);
	return (*this);
}

void	ShrubberyCreationForm::executedAll(void) const
{
	std::cout << this->getTarget() << "..." << std::endl;
	std::ofstream file;

	file.open(std::string(this->getTarget() + "_shrubbery"));
	if(file.is_open())
	{
		file << "		                                " << std::endl;        
		file << "                2222222 2              " << std::endl;
		file << "             2224222242222222          " << std::endl;
		file << "            2222224244224424222        " << std::endl;
		file << "          22222244444444244422222      " << std::endl;
		file << "      222222422242444444444222222      " << std::endl;
		file << "     2224222244444444444444224422      " << std::endl;
		file << "    22244422222444242444422224222      " << std::endl;
		file << "   22442444242242224242222442424222    " << std::endl;
		file << "   22444444422442222422222224222222    " << std::endl;
		file << "  22444242222222222242244224222222     " << std::endl;
		file << "   22222224444444444444442222222222    " << std::endl;
		file << "     2222222444422444442222242222222   " << std::endl;
		file << "    22222222222222244222222222224222   " << std::endl;
		file << "     222222   2 2222222422222244222    " << std::endl;
		file << "                  2222222 22222222     " << std::endl;
		file << "                   222                 " << std::endl;
		file << "                   22                  " << std::endl;
		file << "                   242                 " << std::endl;
		file << "                   222                 " << std::endl;
		file << "                   222                 " << std::endl;
		file << "                   222                 " << std::endl;
		file << "                   222                 " << std::endl;
		file << "                   222                 " << std::endl;
		file << "                  2222                 " << std::endl;
		file << "                  222                  " << std::endl;
		file.close();
	}
	return ;
}
