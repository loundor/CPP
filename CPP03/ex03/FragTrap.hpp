/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:44:01 by stissera          #+#    #+#             */
/*   Updated: 2022/12/05 19:28:11 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define	FRAGTRAP_HPP
#include <iostream>
#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
        FragTrap();
        FragTrap(FragTrap const& cpy);
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap& operator=(FragTrap const& cpy);
        virtual void	attack(const std::string& target);

    private:
        void    highFivesGuys(void);
        void    _setPoints(void);
};

#endif