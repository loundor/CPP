/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 22:37:38 by stissera          #+#    #+#             */
/*   Updated: 2023/04/23 13:13:57 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>

class BitcoinExchange
{
	typedef std::multimap<std::string, float>	ExchangeRates;

	public:
		BitcoinExchange(const std::string&);
		BitcoinExchange(const BitcoinExchange&);
		~BitcoinExchange();

		BitcoinExchange&	operator=(const BitcoinExchange&);
		float 				getExchangeRate(const std::string&, float) const;

	private:
		ExchangeRates		_exchangeRates;

	protected:
		class runtimeError : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: could not open bitcoin price database file.");
				}
		};

		class invalidArgument : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: no exchange rate found for given date.");
				}
		};

		class invalidFile : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: file is not valid.");
				}
		};

		class negativeValue : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: not a positive number.");
				}
		};

		class tooLargeNumber : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: too large a number.");
				}
		};

		class inexistentDate : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: inexistent date.");
				}
		};
};

namespace ft
{
	bool	checkDate(const std::string&);
}

std::ostream&	operator<<(std::ostream& o, const BitcoinExchange& i);

#endif
