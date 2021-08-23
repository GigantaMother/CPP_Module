#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>
# include <iomanip> 

class Contact
{
	private:
		int 		_index;
		std::string	_name;
		std::string	_surname;
		std::string	_nickname;
		std::string	_number;
		std::string	_secret;
	public:
		Contact(void);
		~Contact(void);

		void	add(int ind);
		void	display(void);
		void	display_short(void);
		void	display_shorten(std::string str);
};

#endif
