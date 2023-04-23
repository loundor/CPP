/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 23:26:58 by stissera          #+#    #+#             */
/*   Updated: 2023/04/23 23:36:47 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <string>
#include <stdlib.h>

class RPN
{
	public:
		RPN();
		RPN(const RPN&);
		virtual ~RPN();
		RPN&			operator=(const RPN&);
		void			reversePolishNotation(const std::string &);
		bool			is_ope(char) const;
		long double		sum(long double, long double, char);
		long double		get_result(void) const;

	private:
		std::stack<long double> _stack;

	protected:
		class missNumber : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("[Error]: insufficient number");
				}
		};

		class invalidToken : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("[Error]: invalid token");
				}
		};

		class tooManyOperands : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("[Error]: too many operands");
				}
		};

		class divisionByZero : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("[Error]: division by zero");
				}
		};
};

std::ostream&	operator<<(std::ostream& o, const RPN& i);

#endif
