/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:18:04 by stissera          #+#    #+#             */
/*   Updated: 2022/11/19 03:32:34 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
	public:
		Zombie(void);
		Zombie(std::string);
		~Zombie();
		void	announce( void );
		void	setName(std::string);

	private:
		std::string	_name;
};
Zombie	*zombieHorde( int N, std::string name );

#endif