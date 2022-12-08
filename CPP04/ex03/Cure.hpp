/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:01:50 by stissera          #+#    #+#             */
/*   Updated: 2022/12/08 12:01:50 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "./AMateria.hpp"
#include <iostream>

class Cure : public AMateria
{
	public:
		Cure();
		//Cure(std::string const&);
		Cure(Cure const&);
		Cure& operator=(Cure const&);
		~Cure();
		AMateria* clone() const;
		void use(ICharacter&);
};

#endif