#include "../headers/Account.h"

Account::Account(double balance) {
  this->setAccountBalance(balance);
}

int Account::MAX_CREDIT = 250;

void Account::setAccountBalance(double balance) {
  if (balance >= 0.0) {
    this->account_balance = balance;
    return;
  }
  this->account_balance = 0.0;
  throw std::invalid_argument("Initial balance was invalid");
}

double Account::getAccountBalance(void) const {
  return this->account_balance;
}

bool Account::credit(double credit = 0) {
  this->account_balance += Account::MAX_CREDIT + credit;
  return true;
}

bool Account::debit(double value = 0) {
  if (value <= this->account_balance) {
    this->account_balance -= value;
    return true;
  }

  std::cerr << "Debit amount exceeded account balance.\n";
  return false;
}

void Account::getBalance(void) const {
  std::cout << "\nCurrent balance is: " << this->account_balance;
}
