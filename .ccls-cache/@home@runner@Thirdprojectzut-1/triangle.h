#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"

class Triangle : public Shape {
public:
  using Shape::Shape;
  enum Direction { UPRIGHT, UPLEFT, DOWNRIGHT, DOWNLEFT };
  virtual void Fill();
  Triangle(int h, char s, std::string c, Direction d);

private:
  Direction direction;
};

#endif