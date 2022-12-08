/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:01:34 by stissera          #+#    #+#             */
/*   Updated: 2022/12/08 11:01:34 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Constructor of AMateria called." << std::endl;
}

AMateria::AMateria(std::string const& type)
{
	this->type = type;
	std::cout << "Constructor of AMateria with type called." << std::endl;
}

AMateria::AMateria(AMateria const& cpy) : type(cpy.type)
{
	std::cout << "Constructor of AMateria by copy called." << std::endl;
}

AMateria& AMateria::operator=(AMateria const& cpy)
{
	this->type = cpy.type;
	std::cout << "Operator = called." << std::endl;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "Destructor of AMateria called." << std::endl;
}

std::string const& AMateria::getType() const
{
	return (this->type); // Maybe need passed in const
}

void AMateria::use(ICharacter& target)
{
	
}