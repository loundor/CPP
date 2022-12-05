/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:42:28 by stissera          #+#    #+#             */
/*   Updated: 2022/12/05 23:21:32 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"
#include "./DiamondTrap.hpp"

int	main(void)
{
	std::cout << "---------------------------------" << std::endl;
	DiamondTrap a("Test String");
	a.whoAmI();
	a.seeInfo();
	std::cout << std::endl << "Ok we do an attack!" << std::endl;
	a.attack("Babar");
	a.seeInfo();

	std::cout << "---------------------------------" << std::endl;
	DiamondTrap b;
	b = a;
	b.whoAmI();
	b.seeInfo();
	std::cout << std::endl << "Ok we do an attack!" << std::endl;
	b.attack("Babar");
	b.seeInfo();

	std::cout << "---------------------------------" << std::endl;
	DiamondTrap c = a;
	c.whoAmI();
	c.seeInfo();
	std::cout << std::endl << "Ok we do an attack!" << std::endl;
	c.attack("Babar");
	c.seeInfo();
	std::cout << "---------------------------------" << std::endl;
	return (0);
}