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
		virtual ~Animal();
		virtual void makeSound() const;
		Animal& operator=(Animal const&);
		std::string getType() const;
	protected:
		std::string type;
};

#endif
