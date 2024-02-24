#include "./headers/ChessBoard.h"

int main() {
  ChessBoard arr1(10, 5);
  ChessBoard arr2(4, 10);
  ChessBoard arr3(2, 2);

  std::cout << "Before" << std::endl;
  std::cout << "ChessBoard1:\n" << arr1 << std::endl;
  std::cout << "ChessBoard2:\n" << arr2 << std::endl;
  std::cout << "Are differents ChessBoard?: " << (arr1 != arr2) << std::endl;
  std::cout << "Are equals ChessBoard?: " << (arr1 == arr2) << std::endl
            << std::endl;
  std::cout << "=============================" << std::endl;

  arr1 = arr2;

  std::cout << "After" << std::endl;
  std::cout << "ChessBoard1:\n" << arr1 << std::endl;
  std::cout << "Are differents ChessBoard1-2?: " << (arr1 != arr2) << std::endl;
  std::cout << "Are equals ChessBoard1-2?: " << (arr1 == arr2) << std::endl;

  std::cout << "Enter 10, 20 to Chessboard3:" << std::endl;
  std::cin >> arr3;
  std::cout << "ChessBoard2:\n" << arr3 << std::endl;

  return 0;
}
