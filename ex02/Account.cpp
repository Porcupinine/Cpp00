/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Acount.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/06 10:51:22 by laura         #+#    #+#                 */
/*   Updated: 2023/11/06 10:51:22 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account() {
	int i = getNbAccounts() + 1;

	_accountIndex = i;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";amount:"<<_amount<<";created";
}

Account::	Account( int initial_deposit ) {
	int i = getNbAccounts() + 1;

	_accountIndex = i;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout<<"index:"<<_accountIndex<<";amount:"<<_amount<<";created";
}

Account::~Account(){
	_displayTimestamp();
}

int	Account::getNbAccounts( void ) {
	return _nbAccounts;
}

int	Account::getTotalAmount( void ) {
	return _totalAmount;
}

int	Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}
int	Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}
void	Account::displayAccountsInfos( void ) {
	std::cout<<"Index:"<<Account::getNbAccounts()<< ";";
	std::cout<<"Amount:"<<Account::getTotalAmount()<< ";";
	std::cout<<"Number of Deposits:"<<Account::getNbDeposits()<< ";";
	std::cout<<"Number of withdrawals:"<<Account::getNbWithdrawals()<< ";";
}
void	Account::makeDeposit( int deposit ) {
	_amount += deposit;
}
bool	Account::makeWithdrawal( int withdrawal ) {
	if (withdrawal > _amount)
	{
		std::cout<<"refused";
		return false;
	}
	_amount -= withdrawal;
	return true;
}
int		Account::checkAmount( void ) const {
	return _totalAmount;
}
void	Account::displayStatus( void ) const {

}
void	Account::_displayTimestamp( void ) {
	std::time_t t = std::time(nullptr);   // get time now
	std::tm* now = std::localtime(&t);
	std::cout<<"["<<now->tm_year<<now->tm_mon<<now->tm_mday;
	std::cout<<"_"<<now->tm_hour<<now->tm_min<<now->tm_sec<<"] ";
}