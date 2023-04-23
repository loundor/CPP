/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 14:30:03 by stissera          #+#    #+#             */
/*   Updated: 2023/04/23 23:38:39 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <stdlib.h>
#include <iomanip> //setprecision
#include <sys/time.h> //gettimeofday
#include <vector>
#include <deque>
#include <set> //to verify duplicates

class PmergeMe
{
	public:
		PmergeMe();
		PmergeMe(int, char **);
		PmergeMe(const PmergeMe&);
		~PmergeMe();

		double	getVectorDeltaTime() const;
		double	getDequeDeltaTime() const;

		PmergeMe&	operator=(const PmergeMe&);

	private:
		int					_size;
		bool				_sorted;
		std::vector<int>	_vector;
		std::deque<int>		_deque;
		double				_deltaTimeVector;
		double				_deltaTimeDeque;

		std::vector<int>	_parseArgsVector(int, char **);
		std::deque<int>		_parseArgsDeque(int, char **);
		void				_verifyDuplicates(void);
		void				_printBeforeAfter(void);
		void				_printTime(std::string) const;

		template <typename T>
		void				_mergeInsertSort(T&);
		double				_getTime(void);
		double				_deltaTime(long long);

	protected:

		class invalidArgumentError : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("[Error]: invalid argument");
				}
		};

		class duplicatesError : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("[Error]: can't duplicates");
				}
		};

		class containerTypeError : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("[Error]: not vector or deque");
				}
		};
};

std::ostream&	operator<<(std::ostream& o, const PmergeMe& i);

#endif
