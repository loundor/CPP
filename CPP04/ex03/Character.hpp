/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:27:50 by stissera          #+#    #+#             */
/*   Updated: 2022/12/08 12:27:50 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include "./ICharacter.hpp"
#include "./AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;

	protected:
		AMateria	*inventory[4];

	public:
		Character();
		Character(std::string const&);
		Character(Character const&);
		Character& operator=(Character const&);
		~Character();
		virtual std::string const& getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif