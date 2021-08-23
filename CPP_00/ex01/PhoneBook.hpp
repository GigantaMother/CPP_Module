#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include <iomanip> 
# include "Contact.hpp"

class PhoneBook
{
	private:
		int			_max_contacts;
		int 		_now_contacts;
		int 		_rec_contacts;
		Contact		_con[8];
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void	add(void);
		void	search(void);
		int		index_valid(std::string str);
		void	menu(void);
};

#endif
