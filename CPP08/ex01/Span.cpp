/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 21:41:49 by stissera          #+#    #+#             */
/*   Updated: 2022/12/23 21:41:49 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Span.hpp"

Span::Span() : _max(0) {}

Span::Span(unsigned int const n) : _max(n) {}

Span::Span(Span const& cpy) : _max(cpy._max), _n(cpy._n){}

Span& Span::operator=(Span const& cpy)
{
	this->_max = cpy._max;
	this->_n = cpy._n;
	return (*this);
}

Span::~Span() {}

void	Span::addNumber(int n)
{
	if (_n.size() == _max)
		throw Span::maxNumberException();
	_n.push_back(n);
}

void	Span::addRandom()
{
	for (int i = this->_n.size(); i != _max; i++)
		this->addNumber(rand());
}

void	Span::rangeNumber(std::list<int>::iterator begin, std::list<int>::iterator end)
{
	for (; begin != end; ++begin)
	{
	 	try
		{
			this->addNumber(*begin);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
			return ;
		}
	}
}

int		Span::shortestSpan()
{
	if (this->_n.size() < 2)
		throw Span::lessNumberException();
	this->_n.sort();
	std::list<int>::iterator it = this->_n.begin();
	int shortest = 0;
	for (++it; it != this->_n.end();	++it)
	{
		if (std::abs(*it ^ *std::prev(it, 1)) < shortest
					&& std::abs(*it ^ *std::prev(it, 1) > 0 )
						|| shortest == 0)
			shortest = std::abs(*it ^ *std::prev(it, 1));
	}
	if (shortest == 0)
		throw Span::noDiffException();
	return (shortest);
}

int		Span::longestSpan()
{
	int max = *std::max_element(this->_n.begin(), this->_n.end());
	int min = *std::min_element(this->_n.begin(), this->_n.end());
	return (std::abs(max-min));
}

const char* Span::maxNumberException::what() const throw()
{
	return ("Too many number in list to add more...");
}

const char* Span::lessNumberException::what() const throw()
{
	return ("To less number in vector to search the sortest! Need minimum 2 number in vector");
}

const char* Span::noDiffException::what() const throw()
{
	return ("No diff between all number!");
}