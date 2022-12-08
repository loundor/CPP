/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:18:21 by stissera          #+#    #+#             */
/*   Updated: 2022/12/07 12:18:21 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
	public:
		Brain();
		Brain(Brain const&);
		Brain(Brain const*);
		Brain&	operator=(Brain const&);
		~Brain();
		std::string	getString(int) const;
		bool	setString(int, std::string const&);

	private:
		std::string ideas[100];
};

#endif