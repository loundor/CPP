/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:48:29 by stissera          #+#    #+#             */
/*   Updated: 2022/11/30 19:23:14 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "Scavtrap without name!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << name << " is a ScavTrap!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& cpy) : ClapTrap(cpy)
{
	std::cout << "Copy of ScavTrap " << _name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called." << std::endl;
}

