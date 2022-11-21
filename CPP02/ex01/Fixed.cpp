/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:56:07 by stissera          #+#    #+#             */
/*   Updated: 2022/11/21 19:31:46 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

int const Fixed::_bit = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_nbr = 0;
}

Fixed::Fixed(Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed& Fixed:: operator=(Fixed const &cpy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	
	this->_nbr = cpy.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_nbr = raw;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_nbr);
}

Fixed::Fixed(const int exp)
{
	this->_nbr |= (uint8_t)exp << (32 - this->_bit) | 0x0;
	std::cout << "Expo is: " <<this->_nbr << std::endl;
}

Fixed::Fixed(const float mantisse)
{
	//	this->_nbr = ((uint32_t)mantisse << this->_bit) >> this->_bit | 0x0;
	std::cout << "Mantisse: " << this->_nbr << std::endl;
}