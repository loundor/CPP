/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 21:40:59 by stissera          #+#    #+#             */
/*   Updated: 2022/12/23 21:40:59 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>

class Span
{
	public:
		Span();
		Span(unsigned int const);
		Span(Span const&);
		~Span();
		Span& operator=(Span const&);
		void	addNumber(int);
		int		shortestSpan();
		int		longestSpan();
		void	addRandom();
		void	rangeNumber(std::list<int>::iterator, std::list<int>::iterator);
		class maxNumberException : public std::exception
		{
			const char* what() const throw();
		};
		class lessNumberException : public std::exception
		{
			const char* what() const throw();
		};
		class noDiffException : public std::exception
		{
			const char* what() const throw();
		};

	private:
		unsigned int	_max;
		std::list<int>	_n;
};

#endif