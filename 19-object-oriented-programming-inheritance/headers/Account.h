#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <iostream>

class Account {
 public:
  static int MAX_CREDIT;
  explicit Account(double);

  void setAccountBalance(double);
  double getAccountBalance(void) const;
  bool credit(double);
  bool debit(double);
  void getBalance(void) const;

 private:
  double account_balance;
};

#endif  //  ACCOUNT_H_
