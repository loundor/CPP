/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WringCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 23:13:39 by stissera          #+#    #+#             */
/*   Updated: 2022/12/06 23:13:39 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat constructor called." << std::endl;
}

WrongCat::WrongCat(WrongCat const& cpy)
{
	this->type = cpy.type;
	std::cout << "WrongCat constructor called by copy." << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat const& cpy)
{
	this->type = cpy.type;
	std::cout << "WrongCat operator = called." << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Chinoimaouuuuu (C'est un fake chat 'chinois')" << std::endl;
}