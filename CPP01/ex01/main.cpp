/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:17:34 by stissera          #+#    #+#             */
/*   Updated: 2022/11/19 03:37:54 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int	main(void)
{
	std::cout << "\033[1;31mCreating a horde of -5 zombies. Name is NOTWORK\033[0m" << std::endl;
	Zombie	*horde = zombieHorde(-5, "NOTWORK");
	delete [] horde;
	std::cout << "\033[1;31mHorde is deleted!\033[0m" << std::endl;

	std::cout << "\033[1;31mCreating a horde of 5 zombies. Name is Hardcore\033[0m" << std::endl;
	horde = zombieHorde(5, "Hardcore");
	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete [] horde;
	std::cout << "\033[1;31mAll zombies are deads!\033[0m" << std::endl;
	return (0);
}