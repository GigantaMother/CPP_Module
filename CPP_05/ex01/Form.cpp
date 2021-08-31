#include "Form.hpp"

Form::Form(std::string name, int gradeSigned, int gradeDo):_name(name)
{
	std::cout << GREEN << name << " (Form) constructor" << DEFAULT << std::endl;

	if (gradeSigned > 150)
		throw Form::GradeTooLowException(this->_name + " Constructor error");
	else if (gradeSigned < 1)
		throw Form::GradeTooHighException(this->_name + " Constructor error");
	if (gradeDo > 150)
		throw Form::GradeTooLowException(this->_name + " Constructor error");
	else if (gradeDo < 1)
		throw Form::GradeTooHighException(this->_name + " Constructor error");

	this->_signed = 0;
	this->_gradeSigned = gradeSigned;
	this->_gradeDo = gradeDo;
}

Form::Form(Form const &f)
{
	std::cout << "(Form) copy" << std::endl;
	*this = f;
}

Form::~Form(void)
{
	std::cout << RED << this->_name << " (Form) destructor" << DEFAULT << std::endl;
}

const std::string	&Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSigned(void) const
{
	return (this->_signed);
}

int	Form::getGradeSigned(void) const
{
	return (this->_gradeSigned);
}

int	Form::getGradeDo(void) const
{
	return (this->_gradeDo);
}

void	Form::beSigned(const Bureaucrat &bur)
{
	if (this->_gradeSigned >= bur.getGrade())
		this->_signed = true;
	else
		throw Form::GradeTooLowException("below grade");
}

Form	&Form::operator=(const Form &f)
{
	if (this == &f)
		return (*this);
	const_cast<std::string&>(this->_name) = f.getName();
	this->_signed = f.getSigned();
	this->_gradeSigned = f.getGradeSigned();
	this->_gradeDo = f.getGradeDo();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Form &f)
{
	out
	<< "name       : " << f.getName() << std::endl
	<< "signed     : " << f.getSigned() << std::endl
	<< "gradeSigned: " << f.getGradeSigned() << std::endl
	<< "gradeDo    : " << f.getGradeDo() << std::endl;

	return (out);
}

//exception
Form::GradeTooHighException::GradeTooHighException(const std::string &e)
{
	std::cout << "(GradeTooHighException) constructor" << std::endl;
	this->_err = e;
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
	std::cout << RED << "(GradeTooHighException) destructor" << DEFAULT << std::endl;
}

const char *Form::GradeTooHighException::what(void) const throw()
{
	return ((std::string(BLUE "GradeTooHighException "DEFAULT + this->_err)).c_str());
}

Form::GradeTooLowException::GradeTooLowException(const std::string &e)
{
	std::cout << GREEN << "(GradeTooLowException) constructor" << DEFAULT << std::endl;
	this->_err = e;
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{
	std::cout << RED << "(GradeTooLowException) destructor" << DEFAULT << std::endl;
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return ((std::string(BLUE "GradeTooLowException "DEFAULT + this->_err)).c_str());
}