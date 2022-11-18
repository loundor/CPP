/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:18:04 by stissera          #+#    #+#             */
/*   Updated: 2022/11/18 22:45:45 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>



class Zombie
{
	public:
		Zombie(std::string);
		~Zombie();
		void	announce( void );

	private:
		std::string	_name;
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif