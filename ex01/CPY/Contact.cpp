/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:22:18 by stissera          #+#    #+#             */
/*   Updated: 2022/11/18 14:35:13 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"

Contact::Contact() : _first(""), _last(""), _nick(""), _number(""), _secret("")
{
	std::cout << "\033[0;33mConstructor Contact called.\033[0m" << std::endl;
}

Contact::~Contact()
{
	std::cout << "\033[0;33mDestructor Contact called.\033[0m" << std::endl;
}

bool	Contact::AddContact()
{
	std::cout << std::endl << "\033[4;34mAdd new contact...\n\033[0m";
	if (this->SetFirst() && this->SetLast() && this->SetNick() && this->SetNumber() && this->SetSecret())
		return (true);
	return (false);
}
bool	Contact::SetFirst()
{
	std::string str;
	std::cout << "\033[0;36mEntrer the first name: \033[0m";
	while (str.length() == 0 && std::getline(std::cin, str));
	this->_first.assign(str);
	return (true);
}

bool	Contact::SetLast()
{
	std::string str;
	std::cout << "\033[0;36mEntrer the last name: \033[0m";
	while (str.length() == 0 && std::getline(std::cin, str));
	this->_last.assign(str);
	return (true);
}

bool	Contact::SetNick()
{
		std::string str;
	std::cout << "\033[0;36mEntrer the nick name: \033[0m";
	while (str.length() == 0 && std::getline(std::cin, str));
	this->_nick.assign(str);
	return (true);
}

bool	Contact::SetNumber()
{
		std::string str;
	std::cout << "\033[0;36mEntrer the phone number: \033[0m";
while (str.length() == 0 && std::getline(std::cin, str));
	this->_number.assign(str);
	return (true);
}

bool	Contact::SetSecret()
{
	std::string str;
	std::cout << "\033[0;35mEntrer his biggest secret?!: \033[0m";
while (str.length() == 0 && std::getline(std::cin, str));
	this->_secret.assign(str);
	return (true);
}

void	Contact::PrintContact() const
{
	std::cout << "\033[4;34mContact Information:\033[0m" << std::endl;
	std::cout << "\033[0;36mFirst name: \033[0m" << _first << std::endl;
	std::cout << "\033[0;36mLast name: \033[0m" << _last << std::endl;
	std::cout << "\033[0;36mNick name: \033[0m" << _nick << std::endl;
	std::cout << "\033[0;36mPhone number: \033[0m" << _number << std::endl;
	std::cout << "\033[0;35mSecret: \033[0m" << _secret << std::endl;
}

std::string	Contact::GetFirst() const
{
	return (_first);
}

std::string	Contact::GetLast() const
{
	return (_last);
}

std::string	Contact::GetNick() const
{
	return (_nick);
}

std::string	Contact::GetNumber() const
{
	return (_number);
}

std::string	Contact::GetSecret() const
{
	return (_secret);
}
