/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:29:46 by stissera          #+#    #+#             */
/*   Updated: 2022/12/07 14:08:43 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat constructor called." << std::endl;
}

Cat::Cat(Cat const& cpy)
{
	this->type = cpy.type;
	this->brain = new Brain(cpy.brain);
	std::cout << "Cat constructor called by copy" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called." << std::endl;
}

Cat&	Cat::operator=(Cat const& cpy)
{
	this->type = cpy.type;
	this->brain = new Brain();
	this->brain = cpy.brain;
	std::cout << "Cat operator = called." << std::endl;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Miaouuuu say " << this->type << "!" << std::endl;
}
