/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:26:16 by stissera          #+#    #+#             */
/*   Updated: 2022/12/07 13:25:13 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(Dog const& cpy)
{
	this->type = cpy.type;
	this->brain = new Brain(this->brain);
	std::cout << "Dog constructor by copy called." << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called." << std::endl;
}

Dog&	Dog::operator=(Dog const& cpy)
{
	this->type = cpy.type;
	this->brain = new Brain();
	this->brain = cpy.brain;
	std::cout << "Dog operator = called." << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woufff say " << this->type << "!" << std::endl;
}
