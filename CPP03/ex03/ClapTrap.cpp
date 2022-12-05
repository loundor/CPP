/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:33:15 by stissera          #+#    #+#             */
/*   Updated: 2022/12/05 19:23:07 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

ClapTrap::~ClapTrap(){																				std::cout << "ClapTrap \033[0;36m" << this->_name << "\033[0m is destructed!" << std::endl;}
ClapTrap::ClapTrap() : _hit(10), _energy(10), _attack(0){											std::cout << "ClapTrap without name are welcome in the matrix!" << std::endl;}
ClapTrap::ClapTrap(std::string const& name): _name(name), _hit(10), _energy(10), _attack(0){		std::cout << "ClapTrap \033[0;36m" << this->_name << "\033[0m are welcome in the matrix!" << std::endl;}
bool	ClapTrap::checkEnergy() const {																return (this->_energy > 0 ? true : false);}
bool	ClapTrap::alive() const {																	return (this->_hit > 0 ? true : false);}

ClapTrap::ClapTrap(ClapTrap const& cpy) :
	_name(cpy._name),
	_attack(cpy._attack),
	_energy(cpy._energy),
	_hit(cpy._hit)
{
	std::cout << "ClapTrap \033[0;36m" << cpy._name << "\033[0m copy by reference, are welcome in the matrix!" << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const& cpy)
{
	std::cout << "ClapTrap \033[0;36m" << cpy._name << "\033[0m by operator, are welcome in the matrix!" << std::endl;
	this->_name = cpy._name;
	this->_attack = cpy._attack;
	this-> _energy = cpy._energy;
	this->_hit = cpy._hit;
	return (*this);
}

void 	ClapTrap::attack(const std::string& target)
{
	if (!this->checkEnergy())
		return ((void)(std::cout << "Empty energy! Can't attack..." << std::endl));
	if (!this->alive())
		return ((void)(std::cout << this->_name << " is dead!" << std::endl));
	std::cout << "ClapTrap \033[0;36m" << this->_name << "\033[0m attacks \033[0;33m" <<  target << "\033[0m, causing \033[1;31m" << this->_attack << "\033[0m points of damage!" << std::endl;
	this->_energy--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->alive())
		return ((void)(std::cout << this->_name << " is dead!" << std::endl));
	std::cout << "ClapTrap \033[0;36m" << _name << "\033[0m take \033[1;31m" << amount << "\033[0m points of damage!" << std::endl;
	this->_hit -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->checkEnergy())
		return ((void)(std::cout << "Empty energy! Can't repair..." << std::endl));
	if (!this->alive())
		return ((void)(std::cout << this->_name << " is dead!" << std::endl));
	std::cout << "ClapTrap \033[0;36m" << _name << "\033[0m get \033[1;31m" << amount << "\033[0m hit point!" << std::endl;
	this->_hit += amount;
	this->_energy--;
}

void	ClapTrap::seeInfo() const
{
	std::cout << "Name: " << this->_name << std::endl;
	std::cout << "Hit: " << this->_hit << std::endl;
	std::cout << "Energy: " << this->_energy << std::endl;
	std::cout << "Attack: " << this->_attack << std::endl;
	std::cout << "Status is: " << (this->alive()?"Alive":"Dead") << std::endl;
}
