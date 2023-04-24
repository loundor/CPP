/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 22:37:32 by stissera          #+#    #+#             */
/*   Updated: 2023/04/24 13:49:01 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::string& open)
{
	std::ifstream file(open.c_str());
	if (!file.is_open())
		throw runtimeError();

	std::string line;
	std::getline(file, line);

	if (line.find_first_of(",") != line.find_last_of(",") || line.find_first_of(",") == line.npos)
		throw invalidFile();

	while (std::getline(file, line))
	{
		if (line.find_first_of(",") != line.find_last_of(",") || line.find_first_of(",") == line.npos)
		{
			std::cout << "Line not valid and ingnored: \"" << line << "\"" << std::endl;
			continue;
		}

		std::string date(line, 0, line.find_first_of(","));
		if (ft::checkDate(date) == false)
		{
			std::cout << "Date not valid and ignored: \"" << date << "\"" << std::endl;
			continue;
		}
		try
		{
			_exchangeRates.insert(std::pair<std::string,float>(date, std::stof(line.substr(line.find_first_of(",") + 1))));
		}
		catch (const std::exception& e)
		{
			std::cout << "Value not valid and ignored: \"" << line.substr(line.find_first_of(",") + 1) << "\"" << std::endl;
		}
	}
	file.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj) { *this = obj; }
BitcoinExchange::~BitcoinExchange(void) {}



BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& cpy)
{
	if (this != &cpy)
		this->_exchangeRates = cpy._exchangeRates;
	return (*this);
}

float BitcoinExchange::getExchangeRate(const std::string& date, float value) const
{
	if (value < 0)
		throw negativeValue();
	if (value > 1000)
		throw tooLargeNumber();
	ExchangeRates::const_iterator it = _exchangeRates.find(date);
	if (it == _exchangeRates.end())
	{
		it = _exchangeRates.lower_bound(date);
		if (it == _exchangeRates.begin())
			throw invalidArgument();
		--it;
	}
	if (it->first.compare(date) == 0 && &it->first != &_exchangeRates.begin()->first)
	{
		while (it->first.compare(date) == 0 && &it->first != &_exchangeRates.begin()->first)
			it--;
		it++;
	}
	return (it->second);
}

std::ostream&	operator<<(std::ostream& out, const BitcoinExchange& ref)
{
	static_cast<void>(ref);
	return out;
}

bool	ft::checkDate(const std::string& dateStr)
{
	std::stringstream check(dateStr);
	int year, month, day;
	char sep;

	check >> year >> sep >> month >> sep >> day;
	
	if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
		return (false);
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		return (false);
	else if (month == 2)
	{
		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		{
			if (day > 29)
				return (false);
		}
		else if (day > 28)
			return (false);
	}
	return (true);
}