/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:06:39 by stissera          #+#    #+#             */
/*   Updated: 2022/11/20 16:36:39 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

int	main(int ac, char *av[])
{
	Harl	grumpy;

	if (ac != 2)
		return (0);
	grumpy.Complain(av[1]);
	return (0);
}