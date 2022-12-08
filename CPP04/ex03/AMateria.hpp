/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:58:20 by stissera          #+#    #+#             */
/*   Updated: 2022/12/08 10:58:20 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include "./Ice.hpp"
#include "./Cure.hpp"
#include "./ICharacter.hpp"

class AMateria
{
	protected:
		std::string	type;

	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria& operator=(AMateria const&);
		virtual ~AMateria();
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif