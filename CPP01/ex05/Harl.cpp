/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:08:10 by stissera          #+#    #+#             */
/*   Updated: 2022/11/20 15:08:05 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void	Harl::debug()
{
	std::cout << "\033[0;36mI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !\033[0m" << std::endl;
}

void	Harl::info()
{
	std::cout << "\033[0;35mI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !\033[0m"  << std::endl;
}

void	Harl::warning()
{
	std::cout << "\033[0;33mI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\033[0m" << std::endl;
}

void	Harl::error()
{
	std::cout << "\033[1;31mThis is unacceptable ! I want to speak to the manager now.\033[0m" << std::endl;
}

void	Harl::Complain(std::string level)
{
	void	(Harl::*ptr[])(void) {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	std::string	type[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
		if (level == type[i])
			(this->*ptr[i])();
}