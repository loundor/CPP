/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 20:46:54 by stissera          #+#    #+#             */
/*   Updated: 2022/12/08 20:46:54 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->stock[i] != NULL)
			delete this->stock[i];
		this->stock[i] = NULL; 
	}
	std::cout << "MateriaSource constructor called." << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const& cpy)
{
	std::cout << "MateriaSource constructor by copy called." << std::endl;
}

MateriaSource& MateriaSource::operator=(AMateria const &)
{
	return (*this);
}

MateriaSource& MateriaSource::operator=(MateriaSource const &)
{
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->stock[i] != NULL)
			delete this->stock[i];
	}
	std::cout << "Destructor MateriaSource" << std::endl;
}

void	MateriaSource::learnMateria(AMateria* learn)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->stock[i] == NULL)
		{
			std::cout << "MateriaSource learned.." << std::endl;
			this->stock[i] = learn->clone();
			return ;
		}
	}
	std::cout << "Can't learn more MateriaSource..." << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4 ; i++)
	{
		if (this->stock[i] && this->stock[i]->getType() == type)
		{
			std::cout << "MateriaSource \"" << type << "\" cloned " << std::endl;
			return (this->stock[i]->clone());
		}
	}
	std::cout << "Can't found MateriaSource" << std::endl;
	return (0);
}