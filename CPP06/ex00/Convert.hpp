/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:49:33 by stissera          #+#    #+#             */
/*   Updated: 2022/12/17 14:49:33 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <iostream>
#include <sstream>

class Convert
{
	private:
		std::string	const	_str;
		long double			_ld;
		bool				_isNumber;
		void	checkStr();

	public:
		Convert(std::string const&);
		Convert(Convert const&);
		~Convert();
		Convert&	operator=(Convert const&);
		void	printAll() const;
};

#endif