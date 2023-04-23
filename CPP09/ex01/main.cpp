/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 23:24:52 by stissera          #+#    #+#             */
/*   Updated: 2023/04/23 23:36:46 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	RPN	test;

	if (ac != 2)
		std::cout << "Use: " << av[0] << " <RPN>" << std::endl;
	else
	{
		try
		{
			test.reversePolishNotation(av[1]);
			std::cout << test << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}
