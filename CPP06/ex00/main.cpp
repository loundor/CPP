/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:51:22 by stissera          #+#    #+#             */
/*   Updated: 2022/12/19 15:51:22 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "./Convert.hpp"


int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Need one argument! ex: " << av[0] << " 12.345f" << std::endl;
		return (1);
	}
	Convert conv(av[1]);
	conv.printAll();
	return (0);
}