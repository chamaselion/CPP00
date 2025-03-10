/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:27:25 by bszikora          #+#    #+#             */
/*   Updated: 2025/03/10 15:40:02 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account() { }

Account::Account(int initial_deposit)
:_accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
}

int Account::getNbAccounts( void ) {return _nbAccounts;}
int Account::getTotalAmount( void )	{return _totalAmount;}
int Account::getNbDeposits( void ) {return _totalNbDeposits;}
int Account::getNbWithdrawals( void ) {return _totalNbWithdrawals;}
void Account::displayAccountsInfos( void )
{
	_displayTimestamp();
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
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";deposit:";
	std::cout << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << "\n";
}


bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > _amount)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused\n";
		return false;
	}
	int	p_amount = _amount;
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << "\n";
	return true;
}

int Account::checkAmount( void ) const {return _amount;}

void Account::displayStatus( void ) const
{
	_displayTimestamp();
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
