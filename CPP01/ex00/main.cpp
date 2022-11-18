/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:17:34 by stissera          #+#    #+#             */
/*   Updated: 2022/11/18 22:45:43 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int	main(void)
{
	std::cout << "Creating first Zombie with newZombie(). Name is Windows" << std::endl;
	Zombie	*zstack;
	zstack = newZombie("Windows");
	zstack->announce();
	std::cout << "After first zombie." << std::endl;

	std::cout << "Sreating second Zombie with randomChump. Name is MS-DOS" << std::endl;
	randomChump("MS-DOS");
	std::cout << "After second zombie." << std::endl;
	return (0);
}