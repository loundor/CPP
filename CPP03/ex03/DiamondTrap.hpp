/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 10:51:53 by stissera          #+#    #+#             */
/*   Updated: 2022/12/04 10:51:53 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include <iostream>
#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    public:
        DiamondTrap();
        DiamondTrap(DiamondTrap const& cpy);
        DiamondTrap(std::string const& name);
        ~DiamondTrap();
        DiamondTrap& operator=(DiamondTrap const& cpy);
        void	attack(const std::string& target);
        void whoAmI();

    private:
        std::string _name;
        void	    _setDiamondTrap(void);
};

#endif