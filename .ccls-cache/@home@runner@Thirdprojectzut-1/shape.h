#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {
protected:
  int height;
  int width;
  std::string color;
  char symbol;
  int **tab;
  int x, y;

public:
  void Print();
  virtual void Fill() = 0;
  void Alloc();
  Shape(int h, char s, std::string c);
  ~Shape();

  static int counter;

  int getHeight() { return height; }
  int getWidth() { return width; }

  void setX(int posX) { x = posX; }
  void setY(int posY) { y = posY; }

  void PrintAtPosition();
};

#endif