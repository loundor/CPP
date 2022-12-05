/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:42:28 by stissera          #+#    #+#             */
/*   Updated: 2022/12/05 23:18:33 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"

int	main(void)
{
	std::cout << "---------------------------------" << std::endl;
	ScavTrap a("HELLO");
	a.seeInfo();
	a.beRepaired(10);
	a.attack("Balou");
	std::cout << "---------------------------------" << std::endl;
	ScavTrap b;
	b = a;
	b.seeInfo();
	b.guardGate();
	b.guardGate();
	std::cout << "---------------------------------" << std::endl;
	ScavTrap c = a;
	c.seeInfo();
	c.guardGate();
	c.guardGate();
	std::cout << "---------------------------------" << std::endl;
	return (0);
}