/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:10:12 by stissera          #+#    #+#             */
/*   Updated: 2022/11/29 19:45:00 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>
#include <cmath>
#include "./Fixed.hpp"

class Point
{
	public:
		Point();
		Point(float const x, float const y);
		Point(Point const& cpy);
		~Point();

		Point	operator=(Point const& cpy);
		float	getFloatX() const;
		float	getFloatY() const;

	private:
		Fixed	_x;
		Fixed	_y;
};

std::ostream& operator<<(std::ostream& os, Point const& a);
#endif