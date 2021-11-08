/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:01:45 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/08 19:29:42 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <string>

std::string getDatetimeStr() {
	time_t t = time(NULL);
	struct tm *tm = localtime(&t);
	char buf[64];
	strftime(buf, sizeof(buf), "%Y%m%d_%H%M%S", tm);
	return std::string(buf);
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	std::cout << "[" << getDatetimeStr() << "] "; 
	std::cout << "index:" << _nbAccounts << ";"
		<< "amount:" << initial_deposit << ";"
		<< "created" << std::endl;
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += initial_deposit;
}

Account::~Account()
{
	std::cout << "[" << getDatetimeStr() << "] "; 
	std::cout << "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";"
		<< "closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}
int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}
int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	std::cout << "[" << getDatetimeStr() << "] "; 
	std::cout << "accounts:" << getNbAccounts() << ";"
		<< "total:" << getTotalAmount() << ";"
		<< "deposits:" << getNbDeposits() << ";"
		<< "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	std::cout << "[" << getDatetimeStr() << "] "; 
	std::cout << "index:" << _accountIndex << ";"
		<< "p_amount:" << _amount << ";"
		<< "deposit:" << deposit << ";" 
		<< "amount:" << _amount + deposit << ";"
		<< "nb_deposits:" << _nbDeposits + 1 << std::endl;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits += 1;
	_totalNbDeposits += 1;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	std::cout << "[" << getDatetimeStr() << "] "; 
	std::cout << "index:" << _accountIndex << ";"
		<< "p_amount:" << _amount << ";";
	if (_amount < withdrawal)
		std::cout << "withdrawal:" << "refused" << std::endl;
	else
	{
		std::cout << "withdrawal:" << withdrawal << ";"
			<< "amount:" << _amount - withdrawal << ";"
			<< "nb_withdrawals:" << _nbWithdrawals + 1 << std::endl;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
	}
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (0);
}

void	Account::displayStatus( void ) const 
{
	std::cout << "[" << getDatetimeStr() << "] "; 
	std::cout << "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";"
		<< "deposits:" << _nbDeposits << ";"
		<< "withdrawals:" << _nbWithdrawals << std::endl;
}
