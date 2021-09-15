#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form()	
{
	std::cout << GREEN << "(PresidentialPardonForm) constructor" << DEFAULT << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target): Form("PresidentialPardonForm", 25, 5, target)	
{
	std::cout << GREEN << "(PresidentialPardonForm) constructor" << DEFAULT << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy):Form(copy)
{
	std::cout << "(PresidentialPardonForm) copy" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << RED << "(PresidentialPardonForm) destructor" << DEFAULT << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &f)
{
	if (this == &f)
		return (*this); 
	Form::operator=(f);
	return (*this);
}

void	PresidentialPardonForm::executedAll(void) const
{
	std::cout << this->getTarget() << ": has been pardoned by Zafod Beeblebrox." << std::endl;
}
