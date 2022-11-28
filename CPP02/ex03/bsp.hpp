/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:13:04 by stissera          #+#    #+#             */
/*   Updated: 2022/11/28 11:08:56 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSP_H
#define BSP_H

#include <iostream>
#include <cmath>
#include <./Point.hpp>

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif