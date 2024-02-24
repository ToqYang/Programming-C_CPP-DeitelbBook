#ifndef HUGEINTOP_H_
#define HUGEINTOP_H_

#include <cctype>
#include <iostream>

class HugeIntOp {
  friend std::ostream &operator<<(std::ostream &, const HugeIntOp &);

 public:
  static const int digits = 30;

  HugeIntOp(long = 0);
  HugeIntOp(const std::string &);

  //  addition operator; HugeIntOp + HugeIntOp
  HugeIntOp operator+(const HugeIntOp &) const;
  //  addition operator; HugeIntOp + int
  HugeIntOp operator+(int) const;
  //  addition operator;
  //  HugeIntOp + string that represents large integer value
  HugeIntOp operator+(const std::string &) const;

  HugeIntOp operator*(const HugeIntOp &) const;
  HugeIntOp operator*(int) const;
  HugeIntOp operator*(const std::string &) const;

  HugeIntOp operator/(const HugeIntOp &) const;
  HugeIntOp operator/(int) const;
  HugeIntOp operator/(const std::string &) const;

  bool operator==(const HugeIntOp &) const;
  bool operator==(const int op2) const {
    return (*this) == (HugeIntOp(op2));
  }
  bool operator==(const std::string) const;

  bool operator!=(const HugeIntOp &inputArr) const {
    return !(*this == inputArr);
  }
  bool operator!=(const int op2) const {
    return (*this) != HugeIntOp(op2);
  }
  bool operator!=(const std::string op2) const {
    return (*this) != HugeIntOp(op2);
  }

  bool operator>(const HugeIntOp &) const;
  bool operator>(const int op2) const {
    return (*this) > HugeIntOp(op2);
  }
  bool operator>(const std::string op2) const {
    return (*this) > HugeIntOp(op2);
  }

  bool operator<(const HugeIntOp &op2) const {
    return !(*this > HugeIntOp(op2));
  }
  bool operator<(const int op2) const {
    return !(*this > HugeIntOp(op2));
  }
  bool operator<(const std::string op2) const {
    return !(*this > HugeIntOp(op2));
  }

  bool operator>=(const HugeIntOp &) const;
  bool operator>=(const int op2) const {
    return (*this >= HugeIntOp(op2));
  }
  bool operator>=(const std::string op2) const {
    return (*this >= HugeIntOp(op2));
  }

  bool operator<=(const HugeIntOp &op2) const {
    return !(*this >= HugeIntOp(op2));
  }
  bool operator<=(const int op2) const {
    return !(*this >= HugeIntOp(op2));
  }
  bool operator<=(const std::string op2) const {
    return !(*this >= HugeIntOp(op2));
  }

 private:
  std::array<short, digits> integer;
};

#endif  // HUGEINTOP_H_
