/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:16:39 by stissera          #+#    #+#             */
/*   Updated: 2022/12/06 19:57:17 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"

Animal::Animal()
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
