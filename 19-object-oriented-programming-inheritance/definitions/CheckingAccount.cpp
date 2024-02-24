#include "../headers/Account.h"
#include "../headers/CheckingAccount.h"

CheckingAccount::CheckingAccount(double balance, double fee_rate) : Account(
    balance) {
  this->fee_rate = fee_rate;
}

bool CheckingAccount::credit(double credit = 0) {
  bool res_transaction = Account::credit(credit);
  if (res_transaction) {
    double final_credit = this->getAccountBalance()
        - (this->fee_rate * Account::MAX_CREDIT) / 100;
    this->setAccountBalance(final_credit);
    return true;
  }
  return false;
}

bool CheckingAccount::debit(double balance) {
  bool res_transaction = Account::debit(balance);
  if (res_transaction) {
    double final_debit =
        this->getAccountBalance() - (balance * this->fee_rate) / 100;
    this->setAccountBalance(final_debit);
    return true;
  }
  return false;
}
