/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:20:16 by stissera          #+#    #+#             */
/*   Updated: 2022/12/07 12:25:37 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "./Animal.hpp"
#include "./Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const&);
		~Dog();
		Dog& operator=(Dog const&);
		void makeSound() const;

	private:
		Brain	*brain;	
};

#endif