#include <string>
#include "shape.h"

class Rectangle : public Shape {
public:
    using Shape::Shape;
    virtual void Fill();
    Rectangle(int h, int w, char s, std::string c);
    Rectangle(int h, char s, std::string c);
};