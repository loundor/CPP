/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 20:43:48 by stissera          #+#    #+#             */
/*   Updated: 2022/12/08 20:43:48 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./AMateria.hpp"
#include "./Ice.hpp"
#include "./Cure.hpp"
#include "./ICharacter.hpp"
#include "./Character.hpp"
#include "./IMateriaSource.hpp"
#include "./MateriaSource.hpp"

int	main( void )
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("test");
	tmp = src->createMateria("ice");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	delete bob;
	delete me;
	delete src;

	return 0;
}