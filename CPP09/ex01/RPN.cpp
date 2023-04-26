/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 23:26:21 by stissera          #+#    #+#             */
/*   Updated: 2023/04/26 18:53:25 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void) 							{}
RPN::~RPN(void) 						{}
RPN::RPN(const RPN& obj)				{ *this = obj; }
bool		RPN::is_ope(char c) const	{ return (c == '+' || c == '-' || c == '*' || c == '/'); }
long double	RPN::get_result(void) const	{ return (this->_stack.top()); }

RPN& RPN::operator=(const RPN& cpy)
{
	if (this != &cpy)
		this->_stack = cpy._stack;
	return (*this);
}

void	RPN::reversePolishNotation(const std::string &av)
{
	for (std::size_t i = 0; i < av.length(); i++)
	{
		std::string c = av.substr(i, 1);
		if (!c.compare(" "))
			continue;
		else if (std::isdigit(static_cast<unsigned char>(c[0])))
			_stack.push(std::atoi(c.c_str()));
		else if (is_ope(*c.c_str()))
		{
			if (_stack.size() < 2)
				throw invalidOperation();
			long double second = _stack.top();
			_stack.pop();
			long double first = _stack.top();
			_stack.pop();
			_stack.push(sum(first, second, av[i]));
		}
		else
			throw invalidToken();
	}
	if (_stack.size() != 1)
		throw invalidOperation();
}

long double	RPN::sum(long double first, long double second, char op)
{
	switch (op)
	{
		case '+':
			return (first + second);
		case '-':
			return (first - second);
		case '*':
			return (first * second);
		case '/':
			if (second == 0x00)
				throw divisionByZero();
			return (first / second);
	}
	return (0);
}

std::ostream&	operator<<(std::ostream& out, const RPN& sum)
{
	out << sum.get_result();
	return out;
}
