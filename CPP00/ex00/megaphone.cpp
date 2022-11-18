/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:46:03 by stissera          #+#    #+#             */
/*   Updated: 2022/11/18 14:46:04 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char *av[]) {
	int	i;

	i = 0;
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		while (av[++i])
			while (*av[i])
				std::cout << (char)(std::toupper(*av[i]++));
		std::cout << std::endl;
	}
}