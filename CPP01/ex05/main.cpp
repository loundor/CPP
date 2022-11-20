/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:06:39 by stissera          #+#    #+#             */
/*   Updated: 2022/11/20 15:08:01 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

int	main()
{
	Harl	grumpy;

	std::cout << "Harl say a DEBUG" << std::endl;
	grumpy.Complain("DEBUG");
	std::cout << "Harl say a INFO" << std::endl;
	grumpy.Complain("INFO");
	std::cout << "Harl say a WARNING" << std::endl;
	grumpy.Complain("WARNING");
	std::cout << "Harl say a ERROR" << std::endl;
	grumpy.Complain("ERROR");
	return (0);
}