#include "./headers/HugeIntOp.h"

int main() {
  HugeIntOp n1(7654321);
  HugeIntOp n2(7891234);
  HugeIntOp n3("99999999999999999999999999999");
  HugeIntOp n4("1");
  HugeIntOp n5;

  HugeIntOp n6(1001);
  HugeIntOp n7(2);
  HugeIntOp n8;

  HugeIntOp n9;
  HugeIntOp n10(25);
  HugeIntOp n11(12);

  std::cout << "n1 is " << n1 << "\nn2is " << n2
            << "\nn3 is " << n3 << "\nn4 is " << n4
            << "\nn5 is " << n5 << "\n\n";

  n5 = n1 + n2;
  std::cout << n1 << " + " << n2 << " = " << n5 << "\n\n";

  std::cout << n3 << " + " << n4 << "\n= " << (n3 + n4) << "\n\n";

  n5 = n1 + 9;
  std::cout << n1 << " + " << 9 << " = " << n5 << "\n\n";

  n5 = n2 + "10000";
  std::cout << n2 << " + " << "10000" << " = " << n5 << std::endl;

  n8 = n7 + n6;
  std::cout << n7 << " + " << n6 << " = " << n8 << std::endl;

  std::cout << "======================================\n\n";

  n9 = n6 * n7;
  std::cout << n6 << " * " << n7 << " = " << n9 << std::endl;

  n9 = n10 * n11;
  std::cout << n10 << " * " << n11 << " = " << n9 << std::endl;

  std::cout << n10 << " * " << 3 << " = " << (n10 * 3) << std::endl;
  std::cout << n10 << " * " << 5 << " = " << (n10 * "5") << std::endl;

  std::cout << "======================================\n\n";
  n10 = 1002;
  std::cout << "Equals (" << n6 << " == " << n10 << ") = " << (n6 == n10)
            << std::endl;
  std::cout << "Equals (" << n6 << " > " << n10 << ") = " << (n6 > n10)
            << std::endl;
  std::cout << "Equals (" << n6 << " >= " << n10 << ") = " << (n6 >= n10)
            << std::endl;
  std::cout << "Equals (" << n6 << " < " << n10 << ") = " << (n6 < n10)
            << std::endl;
  std::cout << "Equals (" << n6 << " <= " << n10 << ") = " << (n6 <= n10)
            << std::endl;

  return 0;
}
