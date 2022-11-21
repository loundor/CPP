/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:55:58 by stissera          #+#    #+#             */
/*   Updated: 2022/11/21 11:11:18 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FEXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed( Fixed *a);
		Fixed( Fixed &a);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					_nbr;
		static int const	_bit;
};

#endif