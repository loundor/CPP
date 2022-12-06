/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:22:08 by stissera          #+#    #+#             */
/*   Updated: 2022/12/06 20:01:06 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "./Animal.hpp"
#include <iostream>

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const&);
		~Cat();
		void makeSound();
		std::string getType();
};

#endif