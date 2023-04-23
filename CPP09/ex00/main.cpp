/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 22:37:24 by stissera          #+#    #+#             */
/*   Updated: 2023/04/23 13:43:19 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./BitcoinExchange.hpp"

int main(int ac, char** av)
{
	if (ac != 2)
	{
		std::cerr << "Miss parameter, use: " << av[0] << " \"file\"" << std::endl;
		return (1);
	}

	std::ifstream file(av[1]);
	if (file.is_open() == false)
	{
		std::cerr << "File not found or can't open." << std::endl;
		return (1);
	}

	BitcoinExchange *exchange;
	try
	{
		exchange = new BitcoinExchange("./data.csv");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (1);
	}

	std::string	line;
	std::getline(file, line);

	if (line.find_first_of("|") != line.find_last_of("|") || line.find_first_of("|") == line.npos)
	{
		std::cout << "Error: file is not valid." << line << std::endl;
		return (1);
	}

	while (std::getline(file, line))
	{
		if (line.find_first_of("|") != line.find_last_of("|") || line.find_first_of("|") == line.npos)
		{
			std::cout << "Line not valid and ingnored: \"" << line << "\"" << std::endl;
			continue ;
		}

		std::string date(line, line.find_first_not_of(" \t\n\r\f\v"), line.find_first_of("|"));
		if (ft::checkDate(date) == false)
		{
			std::cout << "Date not valid and ignored: \"" << date << "\"" << std::endl;
			continue;
		}

		float value;
		try
		{
		 	value = std::stof(line.substr(line.find_first_of("|") + 1));
		}
		catch (const std::exception& e)
		{
			std::cout << "Value not valid and ignored: \"" << line.substr(line.find_first_of("|") + 1) << "\"" << std::endl;
			continue;
		}
		try
		{
			float sum = value * exchange->getExchangeRate(date, value);
			std::cout << date << " => " << value << " = " << sum << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	delete exchange;
	file.close();
	return (0);
}
