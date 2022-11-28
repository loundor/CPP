/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:12:52 by stissera          #+#    #+#             */
/*   Updated: 2022/11/28 19:19:16 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./bsp.hpp"

float	check_point(Point const& a, Point const& b, Point const& p)
{
	return ((a.getFloatX() - p.getFloatX()) * 
			(b.getFloatY() - p.getFloatY()) -
			(a.getFloatY() - p.getFloatY()) *
			(b.getFloatX() - p.getFloatX()));
}
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float first, second, third;

	first = check_point(a, b, point);
	second = check_point(b, c, point);
	third = check_point(c, a, point);

	if ((first > 0 && second > 0 && third > 0) ||
		(first < 0 && second < 0 && third < 0))
		return (true);
	return (false);
}
