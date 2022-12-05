/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:32:32 by stissera          #+#    #+#             */
/*   Updated: 2022/12/05 19:23:11 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string const& name);
		ClapTrap(ClapTrap const& cpy);
		~ClapTrap();
		ClapTrap& operator=(ClapTrap const& cpy);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		bool	checkEnergy() const;
		bool	alive() const;
		void	seeInfo() const;

	protected:
		std::string		_name;
		int				_hit;
		int				_energy;
		int				_attack;
};

#endif
