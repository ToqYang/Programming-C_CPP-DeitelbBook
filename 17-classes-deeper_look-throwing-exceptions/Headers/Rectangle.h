
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <cmath>
using namespace std;

class Rectangle {
 public:
  explicit Rectangle(float, float);
  void setLength(float);
  void setWidth(float);

  float getLength(void) const;
  float getWidth(void) const;

  float perimeter(void) const;
  float area(void) const;

  void print(void) const;

 private:
  float length, width;
};

class RectangleTwo {
 public:
  explicit RectangleTwo(float, float, float, float, char, char);
  RectangleTwo(float, float, float, float);
  void setX1(float);
  void setX2(float);
  void setY1(float);
  void setY2(float);
  void setFillCharacter(char);
  void setPerimeterCharacter(char);

  float getX1(void) const;
  float getX2(void) const;
  float getY1(void) const;
  float getY2(void) const;

  float perimeter(void) const;
  float area(void) const;
  float length(void) const;
  float width(void) const;
  bool square(void) const;

  void print(void) const;
  void draw(void) const;

 private:
  float x1, x2, y1, y2;
  char fill, border;
};

#endif  //  RECTANGLE_H
