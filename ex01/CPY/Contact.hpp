#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
#include <iomanip>

class Contact{
	public:
		Contact();
		~Contact();

		bool	AddContact();
		bool	SetFirst();
		bool	SetLast();
		bool	SetNick();
		bool	SetNumber();
		bool	SetSecret();

		std::string	GetFirst() const;
		std::string	GetLast() const;
		std::string	GetNick() const;
		std::string	GetNumber() const;
		std::string	GetSecret() const;
		void	PrintContact() const;

	private:
		std::string	_first;
		std::string	_last;
		std::string _nick;
		std::string _number;
		std::string _secret;
};

#endif