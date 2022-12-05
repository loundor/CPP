/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:48:29 by stissera          #+#    #+#             */
/*   Updated: 2022/12/05 23:06:45 by stissera         ###   ########.fr       */
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
	this->_name = cpy._name + " cpy";
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

void	ScavTrap::attack(const std::string& target)
{
	if (!this->checkEnergy())
		return ((void)(std::cout << "Empty energy! Can't attack..." << std::endl));
	if (!this->alive())
		return ((void)(std::cout << this->_name << " is dead!" << std::endl));
	std::cout << "ScavTrap \033[0;36m" << this->_name << "\033[0m attacks \033[0;33m" <<  target << "\033[0m, causing \033[1;31m" << this->_attack << "\033[0m points of damage!" << std::endl;
	this->_energy--;
}