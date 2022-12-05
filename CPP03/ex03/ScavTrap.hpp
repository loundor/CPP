/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:47:45 by stissera          #+#    #+#             */
/*   Updated: 2022/12/05 19:26:27 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
#include "./ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const& cpy);
		ScavTrap& operator=(ScavTrap const& cpy);
		~ScavTrap();
		void			guardGate();
		virtual void	attack(const std::string& target);

	private:
		bool	_guard;
		void	_setPoints(void);

};

#endif