/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 14:29:49 by stissera          #+#    #+#             */
/*   Updated: 2023/04/24 19:28:24 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	PmergeMe test;
	if (ac < 2)
	{
		std::cout << "Miss agruments" << std::endl;
		return (1);
	}
	try
	{
		test.add(ac, av);
		test.print();
		test.sort_all();
		test.print();
		test.print_time("vector");
		test.print_time("deque");
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
