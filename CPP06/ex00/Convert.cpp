/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:39:54 by stissera          #+#    #+#             */
/*   Updated: 2022/12/17 14:39:54 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Convert.hpp"

Convert::Convert(std::string const& str) :
		_isNumber(false), _str(str)
{
	this->checkStr();
}

Convert::Convert(Convert const& cpy) :
		_isNumber(cpy._isNumber), _str(cpy._str), _ld(cpy._ld)
{}

Convert::~Convert()
{}

void	Convert::checkStr()
{
	std::stringstream stold;
	stold << _str;
	stold >> this->_ld;
	stold.fail() ? _isNumber = false : _isNumber = true;
}

void Convert::printAll() const
{
	std::cout << "char: ";
	if (_ld >= 0 && _ld <= 127 && _isNumber)
		(_ld >= 32 && _ld <= 126)? std::cout << "'" << static_cast<char>(_ld) << "'" : std::cout << " Non displayable";
	else
		std::cout << "impossible";
	std::cout << std::endl;

	if (_isNumber)
	{
	 	std::cout << "int: " << static_cast<int>(this->_ld)  << std::endl;
		std::cout << "float: " <<  static_cast<float>(this->_ld)  << ((static_cast<float>(this->_ld) - static_cast<int>(this->_ld) == 0) ? ".0" : "") << "f" << std::endl;
		std::cout << "double: " <<  static_cast<double>(this->_ld)  << ((static_cast<double>(this->_ld) - static_cast<int>(this->_ld) == 0) ? ".0" : "") << std::endl;
		return;
	}
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
}