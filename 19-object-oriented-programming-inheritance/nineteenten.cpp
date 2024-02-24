#include "./headers/Account.h"
#include "./headers/SavingAccount.h"
#include "./headers/CheckingAccount.h"

int main(void) {
  SavingAccount s1(1000, 1.5);
  CheckingAccount ch1(1000, 2.8);

  std::cout << "Prev Saving acc\n";
  ch1.getBalance();
  s1.credit(500);
  std::cout << "\nPost credit 500 + 250 default max Saving acc\n";
  s1.getBalance();
  std::cout << "\nInterest rate account: " << s1.calculateInterest()
            << std::endl;

  std::cout << "\n========================\n";

  std::cout << "\nPrev Check acc\n";
  ch1.getBalance();
  ch1.debit(300);
  std::cout << "\nPost debit 300 + interest rate Check acc\n";
  ch1.getBalance();

  return 0;
}
