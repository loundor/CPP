/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:06:25 by stissera          #+#    #+#             */
/*   Updated: 2022/12/08 12:06:25 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cure.hpp"
#include "./ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Constructor cure called." << std::endl;
}

Cure::Cure(Cure const& cpy) : AMateria(type)
{
	std::cout << "Constructor cure by copy called." << std::endl;
}

Cure::Cure(std::string const& type) : AMateria(type)
{
	std::cout << "Constructor cure by type called." << std::endl;
}

Cure& Cure::operator=(Cure const& cpy)
{
	this->type = cpy.type;
	std::cout << "Operator = cure called." << std::endl;
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Destructor cure called." << std::endl;
}

AMateria*	Cure::clone() const
{
	std::cout << "Clone of Cure." << std::endl;
	AMateria *ret = new Cure(getType());
	return (ret);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}