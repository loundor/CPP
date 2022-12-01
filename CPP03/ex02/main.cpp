/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:42:28 by stissera          #+#    #+#             */
/*   Updated: 2022/12/01 16:31:24 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"

int	main(void)
{
	ScavTrap a("HELLO");
	ScavTrap b;
	a.seeInfo();
	a.beRepaired(10);
	std::cout << "New ScavTrap by cpy" << std::endl;
	b = a;
	std::cout << "B: " << std::endl;
	b.seeInfo();
	b.guardGate();
	b.guardGate();
	return (0);
}