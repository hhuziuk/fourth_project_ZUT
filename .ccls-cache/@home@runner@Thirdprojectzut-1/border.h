#ifndef BORDER_H
#define BORDER_H

#include "rectangle.h"
#include <string>

class Border : public Rectangle {
public:
  using Rectangle::Rectangle;
  virtual void Fill();
  Border(int h, char s, std::string c);
};

#endif