/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:55:58 by stissera          #+#    #+#             */
/*   Updated: 2022/11/26 13:44:14 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(Fixed const &a);
		Fixed(const int exp);
		Fixed(const float mantisse);
		Fixed& operator=(Fixed const& cpy);
		~Fixed();

		Fixed& operator+(const Fixed& a);
		Fixed& operator-(const Fixed& a);
		Fixed& operator*(const Fixed& a);
		Fixed& operator/(const Fixed& a);

		Fixed& operator<(const Fixed& a);
		Fixed& operator>(const Fixed& a);
		Fixed& operator<=(const Fixed& a);
		Fixed& operator>=(const Fixed& a);
		Fixed& operator!=(const Fixed& a);
		Fixed& operator==(const Fixed& a);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;

	private:
		int					_nbr;
		static int const	_bit;
};

std::ostream& operator<<(std::ostream &os, const Fixed &a);

#endif