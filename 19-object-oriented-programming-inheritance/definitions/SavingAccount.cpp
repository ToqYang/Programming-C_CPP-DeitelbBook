#include "../headers/Account.h"
#include "../headers/SavingAccount.h"

SavingAccount::SavingAccount(double balance, double interest_rate) : Account(
    balance) {
  this->interest_rate_percentage = interest_rate;
}

double SavingAccount::calculateInterest(void) {
  return (this->interest_rate_percentage * this->getAccountBalance());
}

