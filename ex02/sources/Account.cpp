/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:27:25 by bszikora          #+#    #+#             */
/*   Updated: 2025/03/10 15:13:21 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

Account::Account()
{
	
}
Account::~Account()
{
	
}

int Account::getNbAccounts( void ) {return _nbAccounts;}
int Account::getTotalAmount( void )	{return _totalAmount;}
int Account::getNbDeposits( void ) {return _totalNbDeposits;}
int Account::getNbWithdrawals( void ) {return _totalNbWithdrawals;}
void Account::displayAccountsInfos( void )
{
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount;
	std::cout << ";deposits" << _totalNbDeposits << ";withdrawals" << _totalNbWithdrawals << "\n";
}

void Account::makeDeposit( int deposit )
{
	int p_amount = _amount;
	_totalNbDeposits++;
	_nbDeposits++;
	_totalAmount += deposit;
	_amount += deposit;
}


bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > _amount)
		return false;
	int	p_amount = _amount;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	return true;
}

int Account::checkAmount( void ) const {return _amount;}

void Account::displayStatus( void ) const
{
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:";
	std::cout << _nbDeposits << ";withdrawals:" << _nbWithdrawals << "\n";
}

void Account::_displayTimestamp( void )
{
	char time[20];
	time_t current;
	
	std::time(&current);
	std::strftime(time, sizeof(time), "%Y%m%d", std::localtime(&current));
	std::cout << time;
}
