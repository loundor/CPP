/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:19:10 by stissera          #+#    #+#             */
/*   Updated: 2022/11/19 03:26:58 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "\033[0;33mCreate Zombie...\033[0m" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "\033[0;33mCreate " << name + "...\033[0m" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "\033[0;33m" + this->_name << " take a headshot!\033[0m" << std::endl;
}

void	Zombie::announce()
{
	return((void)(std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl));
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}