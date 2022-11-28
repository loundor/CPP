/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:55:58 by stissera          #+#    #+#             */
/*   Updated: 2022/11/27 21:04:38 by stissera         ###   ########.fr       */
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

		Fixed& operator++(void);
		Fixed operator++(int a);
		Fixed& operator--(void);
		Fixed operator--(int a);
		
		Fixed& operator+(const Fixed& a);
		Fixed& operator-(const Fixed& a);
		Fixed& operator*(const Fixed& a);
		Fixed& operator/(const Fixed& a);

		bool operator<(const Fixed& a) const;
		bool operator>(const Fixed& a) const;
		bool operator<=(const Fixed& a) const;
		bool operator>=(const Fixed& a) const;
		bool operator!=(const Fixed& a) const;
		bool operator==(const Fixed& a) const;

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;

		static Fixed&		min(Fixed& a, Fixed& b);
		static Fixed const&	min(Fixed const& a, Fixed const& b);
		static Fixed&		max(Fixed& a, Fixed& b);
		static Fixed const&	max(Fixed const& a, Fixed const& b);

	private:
		int					_nbr;
		static int const	_bit;
};

std::ostream& operator<<(std::ostream &os, const Fixed &a);

#endif