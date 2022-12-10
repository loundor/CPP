/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:49:40 by stissera          #+#    #+#             */
/*   Updated: 2022/12/08 11:49:40 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Ice.hpp"
#include "./ICharacter.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Constructor Ice called." << std::endl;
}

Ice::Ice(std::string const& type) : AMateria(type)
{
	std::cout << "Constructor ice by type called." << std::endl;
}

Ice::Ice(Ice const& cpy)
{
	std::cout << "Constructor Ice by copy called." << std::endl;
	this->type = cpy.type;
}

Ice& Ice::operator=(Ice const& cpy)
{
	std::cout << "Operator = Ice called." << std::endl;
	this->type = cpy.getType();
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Destructor Ice called." << std::endl;
}

AMateria* Ice::clone() const
{
	std::cout << "Clone of Ice.." << std::endl;
	AMateria *ret = new Ice(getType());
	return (ret);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}