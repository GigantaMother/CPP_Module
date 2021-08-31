#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target): Form("RobotomyRequestForm", 72, 45, target)	
{
	std::cout << GREEN << "(RobotomyRequestForm) constructor" << DEFAULT << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy): Form(copy)
{
	std::cout << "(RobotmyRequestForm) copy" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << RED << "(RobotmyRequestForm) destructor" << DEFAULT << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &f)
{
	if (this == &f)
		return (*this); 
	Form::operator=(f);
	return (*this);
}

void	RobotomyRequestForm::executedAll(void) const
{
	srand(time(NULL)); 
	std::cout << "Вы живёте в самой лучшей стране в мире," << std::endl
	<< "А остальные страны испытывают к вам одну лишь зависть!" << std::endl
	<< "Каждый гражданин нашей страны получает всё необходимое для счастливой и беззаботной жизни!" << std::endl
	<< "Мыло, сахар, хлеб и поощрительные грамоты!" << std::endl;
	if((rand() % 2) == 0)
		std::cout << this->getTarget() << ": successfully" << std::endl;
	else
		std::cout << this->getTarget() << ": no successfully" << std::endl;
}
