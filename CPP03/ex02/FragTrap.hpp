/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:44:01 by stissera          #+#    #+#             */
/*   Updated: 2022/12/01 16:32:02 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define	FRAGTRAP_HPP
#include <iostream>
#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
        FragTrap();
        FragTrap(FragTrap const& cpy);
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap& operator=(FragTrap const& cpy);

    private:
        void    highFivesGuys(void);
        void    setPoints(void);
};

#endif