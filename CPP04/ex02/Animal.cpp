/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:16:39 by stissera          #+#    #+#             */
/*   Updated: 2022/12/07 17:47:35 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Constructor Animal" << std::endl;
}

Animal::Animal(Animal const& cpy)
{
	this->type = cpy.type;
	std::cout << "Constructor Animal by copy" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

Animal&	Animal::operator=(Animal const& cpy)
{
	this->type = cpy.type;
	std::cout << "Animal copy operator = called." << std::endl;
	return (*this);
}

std::string	Animal::getType() const
{
	return (this->type);
}
