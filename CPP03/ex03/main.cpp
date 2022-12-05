/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:42:28 by stissera          #+#    #+#             */
/*   Updated: 2022/12/05 19:23:08 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"
#include "./DiamondTrap.hpp"

int	main(void)
{
	ScavTrap test("Scav");
	test.seeInfo();

	DiamondTrap a("Test String");
	a.whoAmI();
	a.seeInfo();
	std::cout << std::endl << "Ok we do an attack!" << std::endl;
	a.attack("Babar");
	a.seeInfo();

	std::cout << std::endl << std::endl << "B:\n";
	DiamondTrap b;
	b = a;
	b.whoAmI();
	b.seeInfo();
	return (0);
}