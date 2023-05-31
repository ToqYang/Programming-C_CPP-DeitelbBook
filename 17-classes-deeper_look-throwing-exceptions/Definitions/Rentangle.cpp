#include "../headers/Rectangle.h"

Rectangle::Rectangle(float l, float w) {
  setLength(l);
  setWidth(w);
}

void Rectangle::setLength(float l) {
  if (l >= 0 && l <= 20) {
    length = l;
    return;
  }
  length = 0;
}

void Rectangle::setWidth(float w) {
  if (w >= 0 && w <= 20) {
    width = w;
    return;
  }
  width = 0;
}

float Rectangle::getLength(void) const {
  return length;
}

float Rectangle::getWidth(void) const {
  return width;
}

float Rectangle::perimeter(void) const {
  return (length * 2) + (width * 2);
}

float Rectangle::area(void) const {
  return length * width;
}

void Rectangle::print(void) const {
  cout << "Length: " << round(length) << " - width: " << round(width)
       << " - Perimeter: " << round(perimeter())
       << " - Area: " << round(area())
       << endl;
}

/*
 * =========================================================================
 * */

RectangleTwo::RectangleTwo(float xStart,
                           float xEnd,
                           float yStart,
                           float yEnd,
                           char fillCharacter = '*',
                           char borderCharacter = '*') {
  setX1(xStart);
  setX2(xEnd);
  setY1(yStart);
  setY2(yEnd);
  setFillCharacter(fillCharacter);
  setPerimeterCharacter(borderCharacter);
}

RectangleTwo::RectangleTwo(float xStart, float xEnd, float yStart, float yEnd) {
  setX1(xStart);
  setX2(xEnd);
  setY1(yStart);
  setY2(yEnd);
}

void RectangleTwo::setX1(float x) {
  if (x >= 0 && x <= 20) {
    x1 = x;
    return;
  }
  x1 = 0;
}

void RectangleTwo::setX2(float x) {
  if (x >= 0 && x <= 20) {
    x2 = x;
    return;
  }
  x2 = 0;
}

void RectangleTwo::setY1(float y) {
  if (y >= 0 && y <= 20) {
    y1 = y;
    return;
  }
  y1 = 0;
}

void RectangleTwo::setY2(float y) {
  if (y >= 0 && y <= 20) {
    y2 = y;
    return;
  }
  y2 = 0;
}

float RectangleTwo::length(void) const {
  return x2 - x1;
}

float RectangleTwo::width(void) const {
  return y2 - y1;
}

float RectangleTwo::perimeter(void) const {
  return (length() * 2) + (width() * 2);
}

float RectangleTwo::area(void) const {
  return length() * width();
}

bool RectangleTwo::square(void) const {
  return length() == width();
}

void RectangleTwo::print(void) const {
  cout << "Length: " << round(length()) << " - width: " << round(width())
       << " - Perimeter: " << round(perimeter())
       << " - Area: " << round(area())
       << " - Square: " << (square() ? "Yes" : "No")
       << endl;
}

void RectangleTwo::draw(void) const {
  for (int lengthStart = y1; lengthStart < width(); lengthStart++) {
    for (int widthStart = x1; widthStart < length(); widthStart++) {
      cout << fill;
    }
    cout << "\n";
  }
}

void RectangleTwo::setFillCharacter(char x = '*') {
  fill = x;
}

void RectangleTwo::setPerimeterCharacter(char x = '*') {
  border = x;
}
