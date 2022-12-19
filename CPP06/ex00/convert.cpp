/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:39:54 by stissera          #+#    #+#             */
/*   Updated: 2022/12/17 14:39:54 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./convert.hpp"

int	main(int ac, char* av)
{
	if (ac < 2)
	{
		std::count << "Need one argument! ex: ./" << av[0] << " a" << std::endl;
		return (1);
	}

	return (0);
}

void print_char(static_cast<char> str)
{
	std::cout << "char: ";
	if (str > 31 && str < 126)
		std::cout << str;
	else if (str >= 0 && str < 126)
		std::cout << "Non displayable";
	else
		std::cout << "impossible";
	std::cout << std::endl;
}

void print_int(static_cast<int> nbr)
{

}

void print_float(static_cast<float> real)
{

}

void print_double(static_cast<double> real)
{

}