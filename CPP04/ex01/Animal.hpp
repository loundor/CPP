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
#include "./Brain.hpp"

class Animal
{
	public:
		Animal();
		Animal(Animal const&);
		virtual ~Animal();
		virtual void makeSound() const;
		virtual std::string getString(int) const;
		virtual bool	setString(int, std::string const&) const;
		Animal& operator=(Animal const&);
		virtual std::string getType() const;
	protected:
		std::string type;

	private:
		Brain *brain;
};

#endif
