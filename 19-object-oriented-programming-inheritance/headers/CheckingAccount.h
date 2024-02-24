#ifndef CHECKINGACCOUNT_H_
#define CHECKINGACCOUNT_H_

#include <iostream>

class CheckingAccount : public Account {
 public:
  explicit CheckingAccount(double, double);
  bool credit(double);
  bool debit(double);

 private:
  double fee_rate;
};

#endif  // CHECKINGACCOUNT_H_
