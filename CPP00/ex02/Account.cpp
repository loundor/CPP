/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:31:39 by stissera          #+#    #+#             */
/*   Updated: 2022/11/18 18:51:59 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << getNbAccounts() << ";";
	std::cout << "amount:" << getTotalAmount() << ";";
	std::cout << "created" << std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
	Account::_nbAccounts--;
	Account::_totalAmount -= this->checkAmount();
}

int Account::getNbAccounts()
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return(_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "withdrawal:" << deposit << ";";
	this->_totalNbDeposits++;
	this->_nbDeposits++;
	this->_amount += deposit;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_withdrawal:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal > checkAmount())
	{
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "withdrawal:" << withdrawal << ";";
	this->_totalNbWithdrawals++;
	this->_nbWithdrawals++;
	this->_amount -= withdrawal;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_withdrawal:" << this->_nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	char		buffer[20];
	time_t		now;
	struct tm	*timeinfo;
	

	time (&now);
	timeinfo = localtime (&now);
	strftime(buffer, 20 ,"[%Y%m%d_%H%M%S] ",timeinfo);
	std::cout << buffer;
}