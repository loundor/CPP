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

class Character : public ICharacter 
{
	private:
		std::string	const _name;

	protected:
		AMateria	*inventory[4];

	public:
		Character();
		Character(std::string const&);
		Character(Character const&);
		~Character();
		std::string const& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif