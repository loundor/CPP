/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:10:00 by stissera          #+#    #+#             */
/*   Updated: 2022/11/28 19:06:03 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Point.hpp"

Point::Point() : _x(0), _y(0) {								std::cout << "Base constructor called" << std::endl;}
Point::Point(float const x, float const y) : _x(x), _y(y){	std::cout << "Float constructor called" << std::endl;}
Point::Point(Point const& cpy) : _x(cpy._x), _y(cpy._y){	std::cout << "Copy constructor called" << std::endl;}
Point::~Point()
{
	std::cout << "Point destructor called" << std::endl;
	this->_x.~Fixed();
	this->_y.~Fixed();
}

Point	Point::operator=(Point const& cpy)
{
	std::cout << "Operator = called" << std::endl;
	this->_x = cpy._x;
	this-> _y = cpy._y;
	return (*this);
}

float	Point::getFloatX() const {			return (_x.toFloat());}
float	Point::getFloatY() const {			return (_y.toFloat());}

std::ostream& operator<<(std::ostream& os, Point const& a)
{
	os << "(x: " << a.getFloatX() << " - y: " << a.getFloatY() << ")";
	return (os);
}