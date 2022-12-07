/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 23:33:17 by stissera          #+#    #+#             */
/*   Updated: 2022/12/05 23:33:17 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"
#include "./WrongAnimal.hpp"
#include "./WrongCat.hpp"
#include "./Dog.hpp"
#include "./Cat.hpp"


int	main (void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "---------------------------------" << std::endl;

	std::cout << "Set a Dog..." << std::endl;
	const Dog chien;
	chien.setString(0, "Hello ");
	chien.setString(1, "to ");
	chien.setString(2, "dog!");
	std::cout << chien.getString(0) << chien.getString(1) << chien.getString(2) << std::endl;
	std::cout << "---------------------------------" << std::endl;

	std::cout << "Set a copy Dog..." << std::endl;
	const Dog *cp = new Dog(chien);
	std::cout << cp->getString(0) << cp->getString(1) << cp->getString(2) << std::endl;
	std::cout << "---------------------------------" << std::endl;

	std::cout << "Modify copy Dog:" << std::endl;
	cp->setString(0, "Hello ");
	cp->setString(1, "to ");
	cp->setString(2, "copy!");
	std::cout << "---------------------------------" << std::endl;

	std::cout << "Get Dog" << std::endl;
	std::cout << chien.getString(0) << chien.getString(1) << chien.getString(2) << std::endl;

	std::cout << "Get copyDog" << std::endl;
	std::cout << cp->getString(0) << cp->getString(1) << cp->getString(2) << std::endl;
	std::cout << "---------------------------------" << std::endl;
	delete meta;
	delete j;
	delete i;
	delete cp;

	return (0);
}