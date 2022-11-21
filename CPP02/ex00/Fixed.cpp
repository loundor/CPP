/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:56:07 by stissera          #+#    #+#             */
/*   Updated: 2022/11/21 11:06:25 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

int const Fixed::_bit = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_nbr = 0;
}

Fixed::Fixed(Fixed *a)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(a->getRawBits());
}

Fixed::Fixed(Fixed &a)
{
	std::cout << "Test call" << std::endl;
	this->setRawBits(a.getRawBits());
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