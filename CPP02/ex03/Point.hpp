/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:10:12 by stissera          #+#    #+#             */
/*   Updated: 2022/11/28 11:23:27 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <cmath>
#include "./Fixed.hpp"

class Point
{
	public:
		Point();
		Point(float const x, float const y);
		Point(Point& cpy);
		~Point();

		Point	operator=(Point const& cpy);

	private:
		Fixed	_x;
		Fixed	_y;
};

#endif