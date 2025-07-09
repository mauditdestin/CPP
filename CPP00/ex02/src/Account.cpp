/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:59:25 by pleblond          #+#    #+#             */
/*   Updated: 2025/07/09 14:59:25 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Account.hpp"
#include "ctime"
#include <iostream>

int	Account::_nbAccounts = 0;
int Account::_totalNbWithdrawals = 0;
int	Account::_totalNbDeposits = 0;
int Account::_totalAmount = 0;

Account::Account(int initial_deposit)
{
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = getNbAccounts();
	_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount();
	std::cout << ";created" << std::endl;
	Account::_nbAccounts++;
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount();
	std::cout << ";closed" << std::endl;
	Account::_nbAccounts--;
}

void	Account::_displayTimestamp(void)
{
	time_t	now = time(NULL);
	char	timestamp[20];
	struct tm	*LocalTime = localtime(&now);
	strftime(timestamp, sizeof(timestamp), "[%Y%m%d_%H%M%S] ", LocalTime);
	std::cout << timestamp;
}