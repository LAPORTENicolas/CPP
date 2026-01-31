/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 00:39:07 by nlaporte          #+#    #+#             */
/*   Updated: 2026/01/31 02:02:09 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>


int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}	

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << _amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
    char mbstr[100];

	std::time_t t = std::time(nullptr);
    if (std::strftime(mbstr, sizeof(mbstr), "[%Y%m%d_%H%M%S] ", std::localtime(&t)))
   		std::cout << mbstr;
        
}

Account::Account(void) : _accountIndex{ 0 }, _amount{ 0 }, _nbDeposits{ 0 }, _nbWithdrawals { 0 }
{
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
}

Account::Account(int inital_deposit) : _accountIndex{ 0 }, _amount{ 0 }, _nbDeposits{ 0 }, _nbWithdrawals { 0 }
{
	_displayTimestamp();
	std::cout << "index:" << _nbAccounts << ";amount:" << inital_deposit << ";created" << std::endl;
	this->_accountIndex = _nbAccounts;
	this->_amount = inital_deposit;
	_totalAmount += inital_deposit;
	_nbAccounts++;
}

Account::~Account()
{
	_nbAccounts--;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	this->_nbDeposits++;
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit << ";amount:" << this->_amount + deposit << ";nb_deposits:" << this->_nbDeposits << std::endl;
	this->_amount += deposit;
	_totalNbDeposits++;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (this->_amount < withdrawal)
	{
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
		return 0;
	}
	this->_nbWithdrawals++;
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:" << withdrawal << ";amount:" << this->_amount - withdrawal << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	return 1;
}

int		Account::checkAmount(void) const
{
	return this->_amount;
}
