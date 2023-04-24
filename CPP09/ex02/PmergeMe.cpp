/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 14:29:57 by stissera          #+#    #+#             */
/*   Updated: 2023/04/24 19:27:30 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) : _size(0), _sorted(false) { return ; }
PmergeMe::PmergeMe(const PmergeMe& cpy) { *this = cpy; }
PmergeMe::~PmergeMe(void)	{}
double	PmergeMe::get_vector_time(void) const	{ return (this->_time_vector);}
double	PmergeMe::get_deque_time(void) const	{ return (this->_time_deque);}

PmergeMe::PmergeMe(int ac, char **av)
{
	this->_size = ac - 1;
	this->_sorted = false;
	this->make_vector(av);
	this->make_deque(av);
}

void	PmergeMe::add(int ac, char **av)
{
	this->_size = ac - 1;
	this->_sorted = false;
	this->make_vector(av);
	this->make_deque(av);
}

void	PmergeMe::sort_all()
{
	double tBegin = _get_time();
	sort(_vector);
	this->_time_vector = _deltaTime(tBegin);
	tBegin = _get_time();
	sort(_deque);
	this->_time_deque = _deltaTime(tBegin);
	_sorted = true;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& cpy)
{
	if (this != &cpy)
	{
		this->_size = cpy._size;
		this->_sorted = cpy._sorted;
		this->_vector = cpy._vector;
		this->_deque = cpy._deque;
		this->_time_vector = cpy._time_vector;
		this->_time_deque = cpy._time_deque;
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& out, const PmergeMe& i)
{
	out << "Vector delta time: " << i.get_vector_time() << std::endl << "Deque delta time: " << i.get_deque_time();
	return out;
}

void PmergeMe::make_vector(char **av)
{
	std::vector<int>	vec;
	for (int i = 1; i < _size + 1; ++i)
	{
		int value = atoi(av[i]);
		if (value <= 0)
			throw invalid_argument();
		this->_vector.push_back(value);
	}
}

void	PmergeMe::make_deque(char **av)
{
	for (int i = 1; i < _size + 1; ++i)
	{
		int value = atoi(av[i]);
		if (value <= 0)
			throw invalid_argument();
		_deque.push_back(value);
	}
}

double	PmergeMe::_get_time()
{
	struct timeval	time;

	gettimeofday(&time, NULL);
	return ((time.tv_sec * 1000) + (time.tv_usec * 0.001));
}

double	PmergeMe::_deltaTime(long long time)
{
	if (time > 0)
		return (_get_time() - time);
	return (0);
}

void	PmergeMe::print() const
{
	if (_sorted == false)
		std::cout << "\033[0;31m" << "Before: " << "\033[0m" << std::endl;
	else
		std::cout << "\033[0;31m" << "After:  " << "\033[0m" << std::endl;
	
	std::cout << "\033[0;32m" << "Vector: " << "\033[0m";
	for (std::vector<int>::const_iterator it = this->_vector.begin(); it != this->_vector.end(); ++it)
		std::cout << " " << *it;
	std::cout << std::endl;
	
	std::cout << "\033[0;33m" << "Deque: " << "\033[0m";
	for (std::deque<int>::const_iterator it = this->_deque.begin(); it != this->_deque.end(); ++it)
		std::cout << " " << *it;
	std::cout << std::endl;
}

void	PmergeMe::print_time(std::string vector_deque) const
{
	double time;
	if (vector_deque == "vector")
		time = _time_vector;
	else if (vector_deque == "deque")
		time = _time_deque;
	else
		throw container_type();
	std::cout << _size	<< " elements with " << vector_deque << ": \033[0;32m" << std::fixed << std::setprecision(10) << time << " ms\033[0m" << std::endl;
}

template <typename T>
void	PmergeMe::sort(T& container)
{
	if (container.size() < 2)
		return ;
	if (container.size() < 16)
	{
		for (typename T::iterator i = container.begin(); i != container.end(); ++i)
		{
			typename T::iterator j = i;
			while (j != container.begin() && *(j - 1) > *j)
				std::swap(*j, *(j-- - 1));
		}
		return ;
	}
	typename T::iterator middle = container.begin() + container.size() / 2;
	T left(container.begin(), middle);
	T right(middle, container.end());
	sort(left);
	sort(right);
	typename T::iterator l = left.begin();
	typename T::iterator r = right.begin();
	typename T::iterator c = container.begin();
	while (l != left.end() && r != right.end())
	{
		if (*l < *r)
		{
			*c = *l;
			++l;
		}
		else
		{
			*c = *r;
			++r;
		}
		++c;
	}
	while (l != left.end())
	{
		*c = *l;
		++l;
		++c;
	}
	while (r != right.end())
	{
		*c = *r;
		++r;
		++c;
	}
}
