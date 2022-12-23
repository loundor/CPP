/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 01:53:08 by stissera          #+#    #+#             */
/*   Updated: 2022/12/23 01:53:08 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./easyfind.hpp"

int main( void )
{
	std::list<int> test;
	test.push_back(55);
	test.push_back(30);
	test.push_back(23);
	test.push_back(4);
	test.push_back(8);
	test.push_back(13);
	test.push_back(0);
	test.push_back(12);
	test.push_back(18);
	test.push_back(15);

	try { easyfind(test, 4); }
	catch (std::invalid_argument &e) { std::cout << e.what() << std::endl; }

	try { easyfind(test, 12); }
	catch (std::invalid_argument &e) { std::cout << e.what() << std::endl; }

	try { easyfind(test, 24); }
	catch (std::invalid_argument &e) { std::cout << e.what() << std::endl; }

	try { easyfind(test, 54); }
	catch (std::invalid_argument &e) { std::cout << e.what() << std::endl; }

	try { easyfind(test, 55); }
	catch (std::invalid_argument &e) { std::cout << e.what() << std::endl; }

	return (0);
}