/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 23:09:14 by stissera          #+#    #+#             */
/*   Updated: 2022/12/06 23:09:14 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& cpy)
{
	this->type = cpy.type;
	std::cout << "WrongAnimal constructor by copy called." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor WrongAnimal called." << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& cpy)
{
	this->type = cpy.type;
	std::cout << "WrongAnimal operator = called." << std::endl;
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Chuuuttttt... It's WrongAnimal" << std::endl;
}