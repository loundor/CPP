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

#include "./ICharacter.hpp"
#include "./Character.hpp"

Character::Character() : _name("NO NAME")
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	std::cout << "Constructor Charactere call with NO NAME called." << std::endl;
}

Character::Character(Character const& cpy) : _name(cpy.getName())
{
	AMateria *inventor;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
		if (this->inventory[i] != NULL)
		{
			inventor = cpy.inventory[i];
			this->inventory[i] = inventor->clone();
		}
		else
			this->inventory[i] = NULL;
	}
	std::cout << "Constructor Charactere by copy called." << std::endl;
}

Character::Character(std::string const& name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	std::cout << "Constructor Charactere " << name << " called." << std::endl;
}

Character& Character::operator=(Character const& cpy)
{
	if (this == &cpy)
		return (*this);
	this->_name = cpy.getName();

	AMateria *inventor;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
		if (cpy.inventory[i] != NULL)
		{
			inventor = cpy.inventory[i];
			this->inventory[i] = inventor->clone();
		}
		else
			this->inventory[i] = NULL;
	}
	return (*this);
}

Character::~Character()
{
	AMateria *inventor;
	for (int i = 0; i < 4; i++)
	{
		inventor = this->inventory[i];
		if 	(inventor != NULL)
		{
			std::cout << this->getName() << " drop " << this->inventory[i]->getType() << std::endl;
			delete inventor;
		}
	}
	std::cout << "Destructor " << getName() << " called." << std::endl;
}

std::string const& Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	std::cout << "Caracter " << this->getName() << " equip function called." << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->inventory[idx] != NULL)
	{
		AMateria *leave = this->inventory[idx];
		std::cout << this->getName() << " unequiped " << this->inventory[idx]->getType() << std::endl;
		this->inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	
	if (idx >= 0 && idx < 4)
	{
		AMateria *item = this->inventory[idx];
		if (item != NULL)
			item->use(target);
	}
}