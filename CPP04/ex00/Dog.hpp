/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:20:16 by stissera          #+#    #+#             */
/*   Updated: 2022/12/07 12:13:33 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "./Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const&);
		~Dog();
		Dog& operator=(Dog const&);
		void makeSound() const;
};

#endif