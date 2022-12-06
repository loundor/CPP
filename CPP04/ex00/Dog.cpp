/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:26:16 by stissera          #+#    #+#             */
/*   Updated: 2022/12/06 20:00:29 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"

Dog::Dog()
{
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

void	Dog::makeSound()
{
	std::cout << "Woufff say " << this->type << "!" << std::endl;
}

std::string	Dog::getType()
{
	return (this->type);
}