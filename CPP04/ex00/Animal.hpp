/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:13:45 by stissera          #+#    #+#             */
/*   Updated: 2022/12/06 19:13:45 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
	public:
		Animal();
		Animal(Animal const&);
		~Animal();
		virtual void makeSound();
		virtual std::string getType();

	protected:
		std::string type;
};

#endif
