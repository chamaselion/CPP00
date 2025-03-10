/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:27:25 by bszikora          #+#    #+#             */
/*   Updated: 2025/03/10 13:50:57 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

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

