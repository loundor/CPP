/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:47:23 by stissera          #+#    #+#             */
/*   Updated: 2022/12/22 17:38:45 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template<class T> class Array
{
	private:
		T				*_array;
		unsigned int	_aindex;

	public:
		Array();
		Array(unsigned int);
		Array(T const&);
		~Array();

		T&				operator=(T const &);
		T&				operator[](unsigned int);
		unsigned int	size() const;
};

#include "./Array.tpp"

#endif