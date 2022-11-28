/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:56:07 by stissera          #+#    #+#             */
/*   Updated: 2022/11/28 10:06:22 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

int const Fixed::_bit = 8;

Fixed::Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	this->_nbr = 0;
}

Fixed::Fixed(Fixed const& a)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed& Fixed::operator=(Fixed const& cpy)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(cpy.getRawBits());
	return (*this);
}

Fixed::Fixed(const int exp)
{
	//std::cout << "Int constructor called" << std::endl;
	this->setRawBits(exp << this->_bit);
}

Fixed::Fixed(const float mantisse)
{
	//std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(mantisse * (1 << this->_bit)));
}


// Member Function
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

int	Fixed::toInt( void ) const								{return (this->_nbr >> this->_bit);}
Fixed::~Fixed()												{}
void Fixed::setRawBits(int const raw)						{this->_nbr = raw;}
int Fixed::getRawBits(void) const							{return(this->_nbr);}
Fixed& Fixed::min( Fixed& a, Fixed& b)						{return (a < b ? a : b);}
Fixed const& Fixed::min( Fixed const& a, Fixed const& b)	{return (a < b ? a : b);}
Fixed& Fixed::max( Fixed& a, Fixed& b)						{return (a > b ? a : b);}
Fixed const& Fixed::max( Fixed const& a, Fixed const& b)	{return (a > b ? a : b);}

//Operator Pre and Post

Fixed& Fixed::operator++(void)
{
	this->_nbr += 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed copy(*this);
	this->_nbr += 1;
	return (copy);
}

Fixed& Fixed::operator--(void)
{
	this->_nbr -= 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed cpy(*this);
	this->_nbr -= 1;
	return (cpy);
}

// Operator Comp
bool Fixed::operator<(const Fixed& a) const {return (this->_nbr < a.getRawBits() ? true : false);}
bool Fixed::operator>(const Fixed& a) const {return (this->_nbr > a.getRawBits() ? true : false);}
bool Fixed::operator<=(const Fixed& a) const {return (this->_nbr <= a.getRawBits() ? true : false);}
bool Fixed::operator>=(const Fixed& a) const {return (this->_nbr >= a.getRawBits() ? true : false);}
bool Fixed::operator!=(const Fixed& a) const {return (this->_nbr != a.getRawBits() ? true : false);}
bool Fixed::operator==(const Fixed& a) const {return (this->_nbr == a.getRawBits() ? true : false);}

// Operator Arithmetic
Fixed& Fixed::operator+(const Fixed& a)
{
	this->_nbr += a.toFloat();
	return (*this);
}

Fixed& Fixed::operator-(const Fixed& a)
{
	this->_nbr -= a.toFloat();
	return (*this);
}

Fixed& Fixed::operator*(const Fixed& a)
{
	this->_nbr *= a.toFloat();
	return (*this);
}

Fixed& Fixed::operator/(const Fixed& a)
{
	this->_nbr /= a.toFloat();
	return (*this);
}

// ostream operator
std::ostream& operator<<(std::ostream & os, const Fixed &a)
{
	os << a.toFloat();
	return (os);
}