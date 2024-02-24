#include "../headers/HugeIntOp.h"

HugeIntOp::HugeIntOp(long value) {
  for (short &element : integer)
    element = 0;

  for (size_t j = digits - 1; value != 0 && j >= 0; j--) {
    integer[j] = value % 10;
    value /= 10;
  }
}

HugeIntOp::HugeIntOp(const std::string &number) {
  for (short &element : integer) element = 0;
  size_t length = number.size();
  for (size_t j = digits - length, k = 0; j < digits; ++j, ++k)
    if (isdigit(number[k]))
      integer[j] = number[k] - '0';
}


HugeIntOp HugeIntOp::operator+(const HugeIntOp &op2) const {
  HugeIntOp temp;
  int carry = 0;

  for (int i = digits - 1; i >= 0; i--) {
    temp.integer[i] = integer[i] + op2.integer[i] + carry;

    if (temp.integer[i] > 9) {
      temp.integer[i] %= 10;
      carry = 1;
    } else {
      carry = 0;
    }
  }
  return temp;
}

HugeIntOp HugeIntOp::operator+(int op2) const {
  return *this + HugeIntOp(op2);
}

HugeIntOp HugeIntOp::operator+(const std::string &op2) const {
  return *this + HugeIntOp(op2);
}


HugeIntOp HugeIntOp::operator*(int op2) const {
  return (*this) * (HugeIntOp(op2));
}

HugeIntOp HugeIntOp::operator*(const std::string &op2) const {
  return (*this) * (HugeIntOp(op2));
}

HugeIntOp HugeIntOp::operator*(const HugeIntOp &op2) const {
  HugeIntOp temp;  //  temporary result first 25 * 12 = 50
  HugeIntOp tmpRes;  //  Store result to sum before multiplication
  int carry = 0;

  for (int i = digits - 1, z = 0; i >= 0; i--, z++) {
    temp = 0;
    for (int j = digits - 1; j >= 0; j--) {
      temp.integer[j - z] = (integer[j] * op2.integer[i]) + carry;

      if (temp.integer[i] > 9) {
        temp.integer[i] %= 10;  //  reduce to 0-9
        carry = 1;
      } else {
        carry = 0;
      }
    }
    tmpRes = tmpRes + temp;
  }

  return tmpRes;
}

HugeIntOp HugeIntOp::operator/(const HugeIntOp &op2) const {
  return (*this) / (HugeIntOp(op2));
}

HugeIntOp HugeIntOp::operator/(int op2) const {
  return (*this) / (HugeIntOp(op2));
}

bool HugeIntOp::operator==(const HugeIntOp &inputArr) const {
  for (int i = 0; i < HugeIntOp::digits; i++) {
    if (inputArr.integer[i] != (this->integer[i])) {
      return false;
    }
  }
  return true;
}

bool HugeIntOp::operator>(const HugeIntOp &inputArr) const {
  int left = 0, right = 0;
  for (left = 0; (left < HugeIntOp::digits) && (0 == (this->integer[left]));
       ++left);

  for (right = 0;
       (right < HugeIntOp::digits) && (0 == (inputArr.integer[right]));
       ++right);

  if (right == left) {
    for (int i = 0; i < HugeIntOp::digits; i++) {
      if (((int) this->integer[i]) != ((int) inputArr.integer[i])
          && (int) this->integer[i] < (int) inputArr.integer[i]) {
        return false;
      }
    }
    return true;
  }

  return right > left;
}

bool HugeIntOp::operator>=(const HugeIntOp &inputArr) const {
  int left = 0, right = 0;
  for (left = 0; (left < HugeIntOp::digits) && (0 == (this->integer[left]));
       ++left);

  for (right = 0;
       (right < HugeIntOp::digits) && (0 == (inputArr.integer[right]));
       ++right);

  if (right == left) {
    for (int i = 0; i < HugeIntOp::digits; i++) {
      if (((int) this->integer[i]) != ((int) inputArr.integer[i])
          && (int) this->integer[i] <= (int) inputArr.integer[i]) {
        return false;
      }
    }
    return true;
  }

  return right >= left;
}

std::ostream &operator<<(std::ostream &output, const HugeIntOp &num) {
  int i;
  for (i = 0; (i < HugeIntOp::digits) && (0 == num.integer[i]);
       ++i);

  if (i == HugeIntOp::digits)
    output << 0;
  else
    for (; i < HugeIntOp::digits; ++i)
      output << num.integer[i];

  return output;
}
