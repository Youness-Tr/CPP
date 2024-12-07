#include "Account.hpp"
#include <iostream>


Account::Account(int initial_deposit) {

    std::cout << "[ time ]::";
    std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _totalNbDeposits = 0;
    _totalNbWithdrawals = 0;
}

Account::~Account(void) {

    std::cout << "[ time ]::";
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int Account::getNbAccounts(void) {

    return _nbAccounts;
}

int Account::getTotalAmount(void) {

    return _totalAmount;
}

int Account::getNbDeposits(void)
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void) {

    std::cout << "[ time ]::";
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}
