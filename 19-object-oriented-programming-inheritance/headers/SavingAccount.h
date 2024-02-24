#ifndef SAVINGACCOUNT_H_
#define SAVINGACCOUNT_H_

#include <iostream>

class SavingAccount : public Account {
 public:
  explicit SavingAccount(double, double);
  double calculateInterest(void);

 private:
  double interest_rate_percentage;
};

#endif  // SAVINGACCOUNT_H_
