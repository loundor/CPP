/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 21:32:07 by stissera          #+#    #+#             */
/*   Updated: 2022/12/21 21:32:07 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap(T &src1, T &src2)
{
	T temp = src1;
	src1 = src2;
	src2 = temp;
}
template <typename T> T min(T const& first, T const& second) { return (first < second ? first : second); }
template <typename T> T max(T const& first, T const& second) { return (first > second ? first : second); }

#endif