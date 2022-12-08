/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   'character.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:37:14 by stissera          #+#    #+#             */
/*   Updated: 2022/12/08 14:37:14 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Character.hpp"

Character::Character() : _name("NO NAME")
{
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
	std::cout << "Constructor Charactere call with NO NAME called." << std::endl;
}

Character::Character(Character const& cpy) : _name(cpy.getName())
{
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = new AMateria(cpy.inventory[i]);
	}
	std::cout << "Constructor Charactere by copy called." << std::endl;
}

Character::Character(std::string const& name) : _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = new AMateria();
	}
	std::cout << "Constructor Charactere " << name << "called." << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		delete this->inventory[i];
	}
	std::cout << "Destructor " << getName() << " called." << std::endl;
}

std::string const& Character::getName() const
{
	return (*this->_name);
}

void	Character::equip(AMateria* m)
{

}

void	Character::unequip(int idx)
{

}

void	Character::use(int idx, ICharacter& target)
{

}