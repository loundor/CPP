/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:22:08 by stissera          #+#    #+#             */
/*   Updated: 2022/12/07 12:25:33 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "./Animal.hpp"
#include "./Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const&);
		~Cat();
		Cat& operator=(Cat const&);
		void makeSound() const;

	private:
		Brain	*brain;
};

#endif