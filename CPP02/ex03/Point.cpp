/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:10:00 by stissera          #+#    #+#             */
/*   Updated: 2022/11/28 13:20:08 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Point.hpp"

Point::Point() : _x(0), _y(0){}
Point::Point(float const x, float const y) : _x(x), _y(y){}
Point::Point(Point& cpy) : _x(cpy._x), _y(cpy._y){}
Point::~Point(){ std::cout << "Destructor called" << std::endl;}
Point	Point::operator=(Point const& cpy)
{
	this->_x = cpy._x;
	this-> _y = cpy._y;
	return (*this);
}
