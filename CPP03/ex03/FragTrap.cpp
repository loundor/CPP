/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:45:45 by stissera          #+#    #+#             */
/*   Updated: 2022/12/05 23:15:41 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "Constructor FragTrap called" << std::endl;
    this->_setPoints();
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Constructor FragTrap with name " << name << " called." << std::endl;
    this->_setPoints();
}

FragTrap::FragTrap(FragTrap const& cpy) : ClapTrap(cpy)
{
    std::cout << "Constructor FragTrap by copy called." << std::endl;
}

FragTrap&   FragTrap::operator=(FragTrap const& cpy)
{
    std::cout << "Constructor FragTrap by operator called." << std::endl;
    this->_name = cpy._name + " cpy";
    this->_attack = cpy._attack;
    this->_energy = cpy._energy;
    this->_hit = cpy._hit;
    return (*this);
}

void    FragTrap::_setPoints()
{
    this->_hit = 100;
    this->_energy = 100;
    this->_attack = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor " << _name << "." << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "Give me high five ?!." << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (!this->checkEnergy())
		return ((void)(std::cout << "Empty energy! Can't attack..." << std::endl));
	if (!this->alive())
		return ((void)(std::cout << this->_name << " is dead!" << std::endl));
	std::cout << "FragTrap \033[0;36m" << this->_name << "\033[0m attacks \033[0;33m" <<  target << "\033[0m, causing \033[1;31m" << this->_attack << "\033[0m points of damage!" << std::endl;
	this->_energy--;
}