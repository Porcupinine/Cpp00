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
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account() {
	int i = getNbAccounts();

	_nbAccounts++;
	_accountIndex = i;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";amount:"<<_amount<<";created\n";
}

Account::	Account( int initial_deposit ) {
	int i = getNbAccounts();

	_nbAccounts++;
	_accountIndex = i;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";amount:"<<_amount<<";created\n";
}

Account::~Account(){
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";amount:"<<_amount<<";closed\n";
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
	_displayTimestamp();
	std::cout<<"accounts:"<<Account::getNbAccounts()<< ";";
	std::cout<<"total:"<<Account::getTotalAmount()<< ";";
	std::cout<<"deposits:"<<Account::getNbDeposits()<< ";";
	std::cout<<"withdrawals:"<<Account::getNbWithdrawals()<< "\n";
}
void	Account::makeDeposit( int deposit ) {
	_nbDeposits++;
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";p_amount:"<<_amount;
	_amount += deposit;
	std::cout<<";deposit:"<<deposit<<";amount:"<<_amount;
	std::cout<<";nb_deposits:"<<_nbDeposits<<"\n";
	_totalAmount += deposit;

}
bool	Account::makeWithdrawal( int withdrawal ) {
	if (withdrawal > _amount)
	{
		_displayTimestamp();
		std::cout<<"index:"<<_accountIndex<<";amount:"<<_amount;
		std::cout<<";withdrawal:refused\n";
		return false;
	}
	_nbWithdrawals++;
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";p_amount:"<<_amount;
	_amount -= withdrawal;
	std::cout<<";withdrawal:"<<withdrawal<<";amount:"<<_amount;
	std::cout<<";nb_withdrawal:"<<_nbWithdrawals<<"\n";
	_totalAmount -= withdrawal;

	return true;
}
int		Account::checkAmount( void ) const {
	return _totalAmount;
}
void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<< ";";
	std::cout<<"amount:"<<_amount<< ";";
	std::cout<<"deposits:"<<_nbDeposits<< ";";
	std::cout<<"withdrawals:"<<_nbDeposits<< "\n";
}
void	Account::_displayTimestamp( void ) {
	std::time_t t = std::time(nullptr);   // get time now
	std::tm* now = std::localtime(&t);
	std::cout<<"["<<now->tm_year + 1900<<now->tm_mon<<now->tm_mday<<"_";
	std::cout<<std::setw(2) << std::setfill('0')<<now->tm_hour;
	std::cout<<std::setw(2) << std::setfill('0')<<now->tm_min;
	std::cout<<std::setw(2) << std::setfill('0')<<now->tm_sec<<"] ";
}