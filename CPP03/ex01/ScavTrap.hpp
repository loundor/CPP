/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:47:45 by stissera          #+#    #+#             */
/*   Updated: 2022/12/01 16:24:56 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
#include "./ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const& cpy);
		ScavTrap& operator=(ScavTrap const& cpy);
		~ScavTrap();
		void	guardGate();

	private:
		bool	_guard;
		void	_setScavTrap(int hit, int energy, int attack);

};

#endif