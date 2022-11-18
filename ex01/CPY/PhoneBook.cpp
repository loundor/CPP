/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:22:38 by stissera          #+#    #+#             */
/*   Updated: 2022/11/18 14:32:12 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "\033[0;33mConstructor PhoneBook Called.\033[0m" << std::endl;
	this->last = 0;
	this->total = 0;
}

PhoneBook::~PhoneBook()
{
	std::cout << "\033[0;33mDestructor PhoneBook Called.\033[0m" << std::endl;
}

void	PhoneBook::Add()
{
	if (this->_rep[this->last].AddContact())
		std::cout << "Contact created!" << std::endl << std::endl;
	else
		return ((void)(std::cout << "Error occured!!" << std::endl << std::endl));
	if (this->last >= 7)
		this->last = 0;
	else
		this->last++;
	if (this->total <= 8)
		this->total++;
}

void	PhoneBook::List() const
{
	int			i;
	std::string	reform;

	i = -1;
	std::cout << std::endl;
	std::cout << "\033[4;34mList of contact:\033[0m" << std::endl;
	while (++i < 8)
	{
		std::cout << std::setw(10) << i << "|";
		if (this->_rep[i].GetFirst().length() > 10)
			reform = this->_rep[i].GetFirst().substr(0,9) + ".";
		else
			reform = this->_rep[i].GetFirst();
		std::cout << std::setw(10) << reform << "|";
		if (this->_rep[i].GetLast().length() > 10)
			reform = this->_rep[i].GetLast().substr(0,9) + ".";
		else
			reform = this->_rep[i].GetLast();
		std::cout << std::setw(10) << reform << "|";
		if (this->_rep[i].GetNick().length() > 10)
			reform = this->_rep[i].GetNick().substr(0,9) + ".";
		else
			reform = this->_rep[i].GetNick();
		std::cout << std::setw(10) << reform;
		std::cout<< std::endl;
	}
}

void	PhoneBook::Search() const
{
	std::string	index;

	if (this->total == 0)
		return ((void)(std::cout << std::endl << "No contact in PhoneBook - Return to main." << std::endl));
	this->List();
	std::cout << std::endl << "Select your contact: ";
	std::getline(std::cin, index);
	if (index.length() >=0 && index[0] - '0'>= 0 && index[0] - '0' < this->total)
		this->GetIndex(index[0] - '0');
	else
		return ((void)(std::cout << std::endl << "Index not exist - Return to main." << std::endl));
		
}

void	PhoneBook::GetIndex(int index) const
{
	std::cout << std::endl << std::endl;
	this->_rep[index].PrintContact();
	std::cout << std::endl << std::endl;
}
