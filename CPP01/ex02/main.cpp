/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 03:39:39 by stissera          #+#    #+#             */
/*   Updated: 2022/11/19 03:49:47 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	var = "HI THIS IS BRAIN";
	std::string *stringPTR = &var;
	std::string	&stringREF = var;

	std::cout << "String address: " << &var << std::endl;
	std::cout << "Value of stringPTR: " << stringPTR << std::endl;
	std::cout << "Value of stringREF: " << &stringREF << std::endl << std::endl;

	std::cout << "Value of string: " << var << std::endl;
	std::cout << "Value of *: " << *stringPTR << std::endl;
	std::cout << "Value of &: " << stringREF << std::endl;

	return (0);
}