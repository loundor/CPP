/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:26:16 by stissera          #+#    #+#             */
/*   Updated: 2022/12/07 12:14:40 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(Dog const& cpy)
{
	this->type = cpy.type;
	std::cout << "Dog constructor by copy called." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
}

Dog&	Dog::operator=(Dog const& cpy)
{
	this->type = cpy.type;
	std::cout << "Dog operator = called." << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woufff say " << this->type << "!" << std::endl;
}
