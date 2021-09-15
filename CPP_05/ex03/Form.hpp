#ifndef FORM_H
#define FORM_H

#define DEFAULT		"\033[0m"
#define BOLD		"\033[1m"
#define UNDERLINE	"\033[4m"
#define REVERS		"\033[7m"
#define RED		"\033[31m"
#define GREEN		"\033[32m"
#define YELLOW		"\033[33m"
#define BLUE		"\033[34m"
#define	AQUA		"\033[36m"

#include <iostream>
#include <string>
#include <exception>
#include <fstream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		int					_gradeSigned;
		int					_gradeDo;
		std::string 		_target;

		virtual void	executedAll(void) const = 0;

	public:
		Form(void);
		Form(std::string name, int gradeSigned, int gradeDo, std::string target);
		Form(Form const &f);
		virtual ~Form(void);

		const std::string	&getName(void) const;
		bool			getSigned(void) const;
		int			getGradeSigned(void) const;
		int			getGradeDo(void) const;
		const std::string	&getTarget(void) const;

		void                	beSigned(Bureaucrat const &bur);
		void                	execute(Bureaucrat const &executor) const;

		Form			&operator=(Form const &f);

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

std::ostream &operator<<(std::ostream &out, const Form &f);

#endif
