/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:29:46 by stissera          #+#    #+#             */
/*   Updated: 2022/12/06 20:01:16 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat constructor called." << std::endl;
}

Cat::Cat(Cat const& cpy)
{
	this->type = cpy.type;
	std::cout << "Cat constructor called by copy" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
}

void	Cat::makeSound()
{
	std::cout << "Miaouuuu say " << this->type << "!" << std::endl;
}

std::string	Cat::getType()
{
	return (this->type);
}