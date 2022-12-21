/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 21:52:46 by stissera          #+#    #+#             */
/*   Updated: 2022/12/21 21:52:46 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T>
void	iter(T *addr, size_t stab, void (*fctn)(T const &))
{
	for (int i = 0; i < static_cast<int>(stab); i++)
		fctn(addr[i]);
}

template <typename T> void test(T line) { std::cout << line << std::endl; }

#endif