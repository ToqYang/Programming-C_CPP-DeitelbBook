#include <iostream>

template<typename T, typename U>
void isEqualToFunc(T a, U b) {
  std::cout << ((a == b) ? "equal" : "not equal") << std::endl;
}

class Compare {
 public:
  Compare(int value) : value(value) {}

  bool operator==(const Compare& other) const {
    return value == other.value;
  }

 private:
  int value;
};

template<typename T>
bool isEqualTo(const T& a, const T& b) {
  return a == b;
}


int main() {
  int a = 0, b = 0;
  std::string c = "2";

  std::cout << "Function (a == b):" << std::endl;
  std::cout << "a = " << a <<  std::endl;
  std::cout << "b = " << b <<  std::endl;
  std::cout << "It is equal?: ";
  isEqualToFunc(a, b);

  std::cout << "================" << std::endl;


  std::cout << "Function (a == c):" << std::endl;
  std::cout << "a = " << a <<  std::endl;
  std::cout << "c = " << c <<  std::endl;
  std::cout << "Is it equal?: ";
  isEqualToFunc(a, b);

  std::cout << "================" << std::endl;

  Compare obj1(5);
  Compare obj2(6);

  std::cout << "isEqualTo(obj1, obj2): " << isEqualTo(obj1, obj2) << std::endl;

  return 0;
}