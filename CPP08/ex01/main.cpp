/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 21:40:28 by stissera          #+#    #+#             */
/*   Updated: 2022/12/23 21:40:28 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Span.hpp"
#include <ctime>

int main( void )
{
	srand (time(NULL));
	Span sp = Span(2200);
	
  	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(19);
	sp.addNumber(9);
	sp.addNumber(12);
	sp.addNumber(22);
	sp.addNumber(15);
	sp.addRandom();
	std::cout << "List of 2200 element full" << std::endl;
 	try
	{
		sp.addNumber(34);
		sp.addNumber(7823);
		sp.addNumber(342);
		sp.addNumber(1);
		sp.addNumber(311);
		sp.addNumber(12);
		sp.addNumber(973);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		sp.shortestSpan();
		sp.longestSpan();
	}
	catch (std::exception &e)
	{ 
		std::cout << e.what() << std::endl;
		return (0);
	}
	std::cout << "Shortest difference: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest difference: " << sp.longestSpan() << std::endl;

	Span sp2 = Span(2200);
	sp2.rangeNumber(0, 1200);

	return (0);
}
