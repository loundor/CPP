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


	const WrongAnimal* wmeta = new WrongAnimal();
	const Animal* wj = new Dog();
	const WrongAnimal* wi = new WrongCat();
	std::cout << wj->getType() << " " << std::endl;
	std::cout << wi->getType() << " " << std::endl;
	wi->makeSound(); //will output the cat sound!
	wj->makeSound();
	wmeta->makeSound();

	delete meta;
	delete j;
	delete i;
	delete wmeta;
	delete wj;
	delete wi;
	return (0);
}