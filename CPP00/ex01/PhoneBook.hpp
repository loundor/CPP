#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include <iomanip>
#ifndef CONTACT_HPP
	#include "Contact.hpp"
#endif

class PhoneBook{
	public:
		PhoneBook();
		~PhoneBook();
		void		Add();
		void		List() const;
		void		Search() const;
		void		GetIndex(int index) const;
		int			Last();
		int			last;
		int			total;

	private:
		Contact _rep[8];
};

#endif