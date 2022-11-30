/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:42:28 by stissera          #+#    #+#             */
/*   Updated: 2022/11/30 19:25:34 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"

int	main(void)
{
	ScavTrap a("HELLO");

	a.seeInfo();

	std::cout << "New ScavTrap by cpy" << std::endl;
	ScavTrap b = a;
	return (0);
}