/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:46:51 by stissera          #+#    #+#             */
/*   Updated: 2022/12/23 01:45:41 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Array.hpp"

int main( void )
{
	std::cout << "Create a Array with template String" << std::endl;
	Array<std::string> test;
	std::cout << "Array have "<< test.size() << " array." << std::endl;

	std::cout << "Create a new Array text with template string and array of 10." << std::endl;
	Array<std::string> text(10);
	std::cout << "Write some world in array..." << std::endl;
	text[0] = "Now";
	text[1] = " You";
	text[2] = " Can";
	text[3] = " See";
	text[4] = " All";
	text[5] = " World";
	text[6] = " I";
	text[7] = " Writed";
	text[8] = " in";
	text[9] = " array!";
	for (int i = 0 ; i < static_cast<int>(text.size()); i++)
		std::cout << text[i];
	std::cout << std::endl;

	std::cout << "Use copy constructor and operator =.." << std::endl;
	Array<std::string> forop(5);
	forop = text;
	Array<std::string> copy(text);
	forop[0] = "Here";
	forop[9] = " operator..";
	copy[0] = "and here";
	copy[9] = " copy!";
	for (int i = 0 ; i < static_cast<int>(forop.size()); i++)
		std::cout << forop[i];
	std::cout << std::endl;
	for (int i = 0 ; i < static_cast<int>(copy.size()); i++)
		std::cout << copy[i];
	std::cout << std::endl;

	std::cout << "Create a Array with template int with 5 array" << std::endl;
	Array<int> test2(5);
	std::cout << "Array have "<< test2.size() << " array." << std::endl;
	for (int i = -1; i < static_cast<int>(test2.size() + 2); i++) {
		std::cout << "Index " << i << ": "; 
		try
		{
			std::cout << test2[i] <<  std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() <<  std::endl;
		}
	}
	std::cout << "Change some value and list the array." << std::endl;
	test2[1] = 3412;
	test2[2] = -123;
	test2[4] = 1;
	for (int i = 0 ; i < static_cast<int>(test2.size()); i++)
		std::cout << "Index " << i << ": " << test2[i] <<  std::endl; // Dont test with try catch (know what I do...)


	return (0);
}