#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name("(no)")
{
	int	grade = 0;

	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException(this->_name + " constructor error");
	else if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException(this->_name + " constructor error");

	this->_grade = grade;
}

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name)
{
	std::cout << GREEN << name << " (Bureaucrat) constructor" << DEFAULT << std::endl;

	if (grade > 150)
		throw Bureaucrat::GradeTooLowException(this->_name + " constructor error");
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException(this->_name + " constructor error");

	this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &bur)
{
	std::cout << "(Bureaucrat) copy" << std::endl;
	*this = bur;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << RED << this->_name << " (Bureaucrat) destructor" << DEFAULT << std::endl;
}

const std::string	&Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::higherGrade(void)
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException(this->_name + " higherGrade error");
	else
		this->_grade = this->_grade - 1;
	return ;
}

void	Bureaucrat::belowGrade(void)
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException(this->_name + " belowGrade error");
	else
		this->_grade = this->_grade + 1;
	return ;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bur)
{
	if (this == &bur)
		return (*this);
	const_cast<std::string&>(this->_name) = bur.getName();
	this->_grade = bur.getGrade();
	return (*this);
}

void	Bureaucrat::signForm(Form &f)
{
	if (f.getSigned() == true)
			std::cerr << this->_name << " cannot sign " << f.getName() << " because: the form is signed" << std::endl;
	else 
	{
		try
		{
			f.beSigned(*this);
			std::cout << this->_name << " signs " << f.getName() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << this->_name << " not sign " << f.getName() << " because: ";
			std::cout << e.what() << std::endl;
		}
	}
	return ;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bur)
{
	out << bur.getName() << " (bureaucrat) grade  {" << bur.getGrade() << "}";
	return (out);
}

//exception
Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string &e)
{
	std::cout << GREEN << "(GradeTooHighException) constructor" << DEFAULT << std::endl;
	this->_err = e;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
	std::cout << RED << "(GradeTooHighException) destructor" << DEFAULT << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ((std::string(YELLOW "GradeTooHighException "DEFAULT + this->_err)).c_str());
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string &e)
{
	std::cout << GREEN << "(GradeTooLowException) constructor" << DEFAULT << std::endl;
	this->_err = e;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
	std::cout << RED << "(GradeTooLowException) destructor" << DEFAULT << std::endl;
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ((std::string(YELLOW "GradeTooLowException "DEFAULT + this->_err)).c_str());
}
