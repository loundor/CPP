/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:42:28 by stissera          #+#    #+#             */
/*   Updated: 2022/12/05 23:18:42 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"

int	main(void)
{
	std::cout << "---------------------------------" << std::endl;
	FragTrap a("HELLO");
	a.highFivesGuys();
	std::cout << "---------------------------------" << std::endl;
	FragTrap b;
	b = a;
	a.highFivesGuys();
	std::cout << "---------------------------------" << std::endl;
	FragTrap c = a;
	c.highFivesGuys();
	std::cout << "---------------------------------" << std::endl;
	return (0);
}