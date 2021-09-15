#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <exception>

# include "Form.hpp"

# define DEFAULT	"\033[0m"
# define BOLD		"\033[1m"
# define UNDERLINE	"\033[4m"
# define REVERS		"\033[7m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define AQUA		"\033[36m"

class	Bureaucrat;
class	Form;

class	Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat(void);
		Bureaucrat(std::string, int num);
		Bureaucrat(Bureaucrat const &bur);
		~Bureaucrat(void);

		const std::string	&getName(void) const;
		int					getGrade(void) const;
		void				higherGrade(void);
		void				belowGrade(void);
		void				signForm(Form &f);

		Bureaucrat			&operator=(Bureaucrat const &bur);

		class GradeTooHighException: public std::exception
		{
			private:
					std::string _err;
			public:
					GradeTooHighException(const std::string &e);
					~GradeTooHighException() throw();

					const char *what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			private:
					std::string _err;
			public:
					GradeTooLowException(const std::string &e);
					~GradeTooLowException() throw();

					const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bur);

# endif
