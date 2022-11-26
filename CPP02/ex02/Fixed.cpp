/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:56:07 by stissera          #+#    #+#             */
/*   Updated: 2022/11/26 13:47:34 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

int const Fixed::_bit = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_nbr = 0;
}

Fixed::Fixed(Fixed const &a)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed& Fixed:: operator=(Fixed const &cpy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(cpy.getRawBits());
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::setRawBits(int const raw)
{
	this->_nbr = raw;
}

int	Fixed::getRawBits(void) const
{
	return(this->_nbr);
}

Fixed::Fixed(const int exp)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(exp << this->_bit);
}

Fixed::Fixed(const float mantisse)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(mantisse * 256));
}

float	Fixed::toFloat( void ) const
{
	float num;
	if ((int)this->_nbr & (1 << 8))
	{
		num = (1.0f * -(int)this->_nbr) / pow(2,8);
		return (num * -1); 
	}
	num = (1.0f * (int)this->_nbr) / pow(2,this->_bit);
	return (num);
}

int	Fixed::toInt( void ) const
{
	return (this->_nbr >> this->_bit);
}

std::ostream& operator<<(std::ostream & os, const Fixed &a)
{
	os << a.toFloat();
	return (os);
}

Fixed& Fixed::operator+(const Fixed& a)
{

	return (*this);
}
Fixed& Fixed::operator-(const Fixed& a)
{
	return (*this);
}
Fixed& Fixed::operator*(const Fixed& a)
{
	return (*this);
}
Fixed& Fixed::operator/(const Fixed& a)
{
	return (*this);
}

bool Fixed::operator<(int a);
bool Fixed::operator>(int b);
bool Fixed::operator<=(int a);
bool Fixed::operator>=(int b);
bool Fixed::operator!=(int a);
bool Fixed::operator==(int b);