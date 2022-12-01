/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:48:29 by stissera          #+#    #+#             */
/*   Updated: 2022/12/01 16:29:24 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

void	ScavTrap::_setScavTrap(int hit, int energy, int attack){
	this->_hit = hit;
	this-> _energy = energy;
	this->_attack = attack;
}

ScavTrap::ScavTrap() : ClapTrap(), _guard(false) {
	this->_setScavTrap(100, 50, 20);
	std::cout << "Scavtrap without name!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), _guard(false) {
	this->_setScavTrap(100, 50, 20);
	std::cout << name << " is a ScavTrap!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& cpy) : ClapTrap(cpy), _guard(false){
	std::cout << "Copy of ScavTrap " << _name << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const & cpy){
	std::cout << "operator = of ScavTrap " << _name << std::endl;
	this->_guard = cpy._guard;
	this->_name = cpy._name;
	this->_setScavTrap(cpy._hit, cpy._energy, cpy._attack);
	return (*this);
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called." << std::endl;
}

void	ScavTrap::guardGate(){
	if (this->_guard)
	{
		std::cout << _name << " stop guardGate!" << std::endl;
		_guard = false;
	}
	else
	{
		std::cout << _name << " start guardGate!" << std::endl;
		_guard = true;
	}
}