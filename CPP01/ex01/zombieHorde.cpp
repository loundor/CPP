/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 02:10:05 by stissera          #+#    #+#             */
/*   Updated: 2022/11/19 03:36:13 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name )
{
	if (N <= 0)
		return (NULL);
	Zombie	*horde = new Zombie[N];
	for(int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}
