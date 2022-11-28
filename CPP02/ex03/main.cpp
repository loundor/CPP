/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:55:47 by stissera          #+#    #+#             */
/*   Updated: 2022/11/28 19:28:36 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./bsp.hpp"
#include "./Fixed.hpp"
#include "./Point.hpp"
#include <iostream>

void	print_screen(bool value)
{
	std::cout << "\033[0;36mThe point is ";
	if (value)
		std::cout << "inside!";
	else
		std::cout << "ouside!";
	std::cout << "\033[0m" << std::endl;
}

int	main( void )
{
	{
		// Test Inside
		Point const	a(0.0f, 0.0f);
		Point const	b(0.0f, 3.122f);
		Point const	c(4.32f, 3);
		Point const	p(1, 2);

		std::cout << "\033[0;35ma: " << a << "\nb: " << b << "\nc: " << c << "\nPoint: " << p << " \033[0m" << std::endl;
		print_screen(bsp(a,b,c,p));
	}

	{
		// Test Ouside
	    Point const a(0.0f, 0.0f);
	    Point const b(0.0f, 3.12f);
	    Point const c(4.3f, 3.0f);
	    Point const p(100.0f, 200.0f);
	
		std::cout << "\033[0;35ma: " << a << "\nb: " << b << "\nc: " << c << "\nPoint: " << p << " \033[0m" << std::endl;
		print_screen(bsp(a,b,c,p));
	}
	return 0;
}