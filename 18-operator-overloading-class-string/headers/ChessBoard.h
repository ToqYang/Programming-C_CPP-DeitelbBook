#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <iostream>
#include <stdexcept>

class ChessBoard {
  friend std::ostream &operator<<(std::ostream &, const ChessBoard &);
  friend std::istream &operator>>(std::istream &, ChessBoard &);

 public:
  explicit ChessBoard(int = 10, int = 10);
  ChessBoard(const ChessBoard &);
  ~ChessBoard(void);

  const ChessBoard &operator=(const ChessBoard &);
  bool operator==(const ChessBoard &) const;
  bool operator!=(const ChessBoard &inputArr) const {
    return !(*this == inputArr);
  }

 private:
  int rows, cols;
  size_t size;
  int **ptr;
};

#endif  //  CHESSBOARD_H
