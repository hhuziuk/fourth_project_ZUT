
#include "shape.h"

class Tree : public Shape {
public:
  using Shape::Shape;
  virtual void Fill();
  Tree(int h, char s, std::string c);
};