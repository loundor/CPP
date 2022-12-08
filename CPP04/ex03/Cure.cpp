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

Cure::Cure() : AMateria("cure")
{
	std::cout << "Constructor cure called." << std::endl;
}

Cure::Cure(Cure const& cpy)
{
	Cure->type = cpy.type;
	std::cout << "Constructor cure by copy called." << std::endl;
}

Cure::Cure(std::string const& cpy) : AMateria(type)
{}

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
	AMateria const *ret = new Cure(this);
	return (ret);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}