/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:20:30 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/28 16:08:26 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

Account::Account() : _accountIndex(Account::_nbAccounts),\
 _amount(0), _nbDeposits(0), _nbWithdrawals(0) {
	
	Account::_nbAccounts++;
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			<< ";amount:" << this->_amount
			<< ";created" << std::endl;

}

Account::Account(int initial_deposit) : _accountIndex(Account::_nbAccounts),\
 _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
	
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			<< ";amount:" << this->_amount
			<< ";created" << std::endl;

}

Account::~Account() {

	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			<< ";amount:" << this->_amount
			<< ";closed" << std::endl;

}

void	Account::makeDeposit(int deposit) {

	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			<< ";p_amount:" << this->_amount
			<< ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	std::cout << ";amount:" << this->_amount
			<< ";nb_deposits:" << this->_nbDeposits
			<< std::endl ;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits ++;
	
}

bool	Account::makeWithdrawal(int withdrawal) {

	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			<< ";p_amount:" << this->_amount ;
	if (withdrawal > this->_amount)
		{
			std::cout << ";withdrawal:refused" << std::endl;
			return (false);
		}
	std::cout << ";withdrawal:" << withdrawal;
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	std::cout << ";amount:" << this->_amount
			<< ";nb_withdrawals:" << this->_nbDeposits
			<< std::endl ;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals ++;
	return (true);
	
}

int	Account::checkAmount() const{

	return (this->_amount);

}

void	Account::displayStatus() const {

	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			<< ";amount:" << this->_amount
			<< ";deposits:" << this->_nbDeposits
			<< ";withdrawals:" << this->_nbWithdrawals
			<< std::endl;

}

void	Account::_displayTimestamp() {
	
	time_t	current_time;
	tm		*timeinfo;

	time(&current_time);
	timeinfo = localtime(&current_time);
	std::cout << '['
			<< std::setfill('0') << std::setw(4) << timeinfo->tm_year + 1900
			<< std::setfill('0') << std::setw(2) << timeinfo->tm_mon + 1
			<< std::setfill('0') << std::setw(2) << timeinfo->tm_mday
			<< '_'
			<< std::setfill('0') << std::setw(2) << timeinfo->tm_hour
			<< std::setfill('0') << std::setw(2) << timeinfo->tm_min
			<< std::setfill('0') << std::setw(2) << timeinfo->tm_sec
			<< ']';

}

int	Account::getNbAccounts() {

	return (Account::_nbAccounts);

}

int	Account::getTotalAmount() {

	return (Account::_totalAmount);

}

int	Account::getNbDeposits() {

	return (Account::_totalNbDeposits);

}

int	Account::getNbWithdrawals() {

	return (Account::_totalNbWithdrawals);

}

void	Account::displayAccountsInfos() {

	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::getNbAccounts()
			<< ";total:" << Account::getTotalAmount()
			<< ";deposits:" << Account::getNbDeposits()
			<< ";withdrawals:" << Account::getNbWithdrawals()
			<< std::endl ;

}

	
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;