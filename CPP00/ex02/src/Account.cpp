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

int	Account::_nbAccounts = 0;
int Account::_totalNbWithdrawals = 0;
int	Account::_totalNbDeposits = 0;
int Account::_totalAmount = 0;