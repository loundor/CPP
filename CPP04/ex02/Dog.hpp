/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:20:16 by stissera          #+#    #+#             */
/*   Updated: 2022/12/07 17:15:46 by stissera         ###   ########.fr       */
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
		bool	setString(int, std::string const&) const;
		std::string getString(int) const;

	private:
		Brain	*brain;	
};

#endif