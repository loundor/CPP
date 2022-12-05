/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 10:51:33 by stissera          #+#    #+#             */
/*   Updated: 2022/12/04 10:51:33 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	_setDiamondTrap();
	std::cout << "DiamondTrap created!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const& name) : ClapTrap(name + "_clap_name"), _name(name)
{
	_setDiamondTrap();
	std::cout << "DiamondTrap created with name." << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& cpy) : ClapTrap(cpy), ScavTrap(cpy), FragTrap(cpy), _name(cpy._name)
{
	std::cout << "DiamondTrap created by cpy" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const& cpy)
{
	std::cout << "DiamondTrap created by operator =." << std::endl;
	ClapTrap::_name = cpy._name + "_clap_name";
	this->_energy = cpy._energy;
	this->_attack = cpy._attack;
	this->_hit = cpy._hit;
	this->_name = cpy._name;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " destruted!" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name : " << this->_name << std::endl << "ClapTrap name: " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::_setDiamondTrap(){
	this->_hit = FragTrap::_hit;
	this-> _energy = ScavTrap::_energy;
	this->_attack = FragTrap::_attack;
}