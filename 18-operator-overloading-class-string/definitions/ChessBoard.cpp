#include "../headers/ChessBoard.h"

ChessBoard::ChessBoard(int rows, int cols) {
  if (rows > 0 && cols > 0) {
    this->rows = rows;
    this->cols = cols;
    ptr = new int *[rows];

    for (int row = 0; row < rows; row++) {
      ptr[row] = new int[cols];
      for (size_t col = 0; col < cols; col++) {
        ptr[row][col] = 0;
      }
    }
  }
}

ChessBoard::~ChessBoard(void) {
  for (size_t i = 0; i < this->rows; ++i) {
    delete[] ptr[i];
  }
  delete ptr;
}

const ChessBoard &ChessBoard::operator=(const ChessBoard &inputArr) {
  if (&inputArr != this) {
    if (inputArr.rows != this->rows || inputArr.cols != this->cols) {
      for (size_t i = 0; i < this->rows; ++i) {
        delete[] this->ptr[i];
      }
      delete this->ptr;

      this->rows = inputArr.rows;
      this->cols = inputArr.cols;
      this->ptr = new int *[(this->rows)];

      for (size_t row = 0; row < this->rows; row++) {
        this->ptr[row] = new int[(this->cols)];
        for (size_t col = 0; col < this->cols; col++) {
          this->ptr[row][col] = inputArr.ptr[row][col];
        }
      }
    }
  }

  return *this;
}

bool ChessBoard::operator==(const ChessBoard &inputArr) const {
  if (inputArr.rows != this->rows) {
    return false;
  }

  for (size_t row = 0; row < this->rows; row++) {
    for (size_t col = 0; col < this->cols; col++) {
      if (this->ptr[row][col] != inputArr.ptr[row][col]) {
        return false;
      }
    }
  }

  return true;
}

std::ostream &operator<<(std::ostream &output, const ChessBoard &inputArr) {
  for (size_t i = 0; i < inputArr.rows; ++i) {
    for (size_t j = 0; j < inputArr.cols; ++j) {
      output << inputArr.ptr[i][j] << " ";
    }
    output << std::endl;
  }
  return output;
}

std::istream &operator>>(std::istream &input, ChessBoard &inputArr) {
  for (size_t i = 0; i < inputArr.rows; ++i) {
    for (size_t j = 0; j < inputArr.cols; ++j) {
      input >> inputArr.ptr[i][j];
    }
  }

  return input;
}
