/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 14:30:03 by stissera          #+#    #+#             */
/*   Updated: 2023/04/24 19:22:09 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <sys/time.h>
#include <vector>
#include <deque>

class PmergeMe
{
	public:
		PmergeMe();
		PmergeMe(int, char **);
		PmergeMe(const PmergeMe&);
		~PmergeMe();
		PmergeMe&			operator=(const PmergeMe&);
		void				add(int, char **);
		double				get_vector_time() const;
		double				get_deque_time() const;
		void				sort_all();
		void				print_time(std::string) const;
		void				print() const;

	private:
		void				make_vector(char **);
		void				make_deque(char **);
		template <typename T>
		void				sort(T&);
		double				_get_time(void);
		double				_deltaTime(long long);
		std::vector<int>	_vector;
		std::deque<int>		_deque;
		int					_size;
		bool				_sorted;
		double				_time_vector;
		double				_time_deque;

	protected:
		class invalid_argument : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Invalid argument");
				}
		};

		class container_type : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Not vector or deque");
				}
		};
};

std::ostream&	operator<<(std::ostream& o, const PmergeMe& i);

#endif
