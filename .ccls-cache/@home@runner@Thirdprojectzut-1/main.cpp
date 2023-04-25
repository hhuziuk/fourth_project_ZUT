#include "border.h"
#include "rectangle.h"
#include "tree.h"
#include "triangle.h"
#include <iostream>

using namespace std;

int Shape::counter = 0;

int main() {
  Tree roof(5, '*', "red");
  Rectangle base(5, 7, '*', "green");
  Border window(3, '*', "yellow");

  // Print roof
  roof.Print();

  // Find the center of the roof
  int roof_center = roof.getWidth() / 2;

  // Print base with window
  for (int i = 0; i < base.getHeight(); i++) {
    for (int j = 0; j < base.getWidth(); j++) {
      if (i >= 2 && i <= 4 && j >= 2 && j <= 4) {
        window.setX(i - 2);
        window.setY(j - 2);
        window.PrintAtPosition();
      } else {
        base.setX(i);
        base.setY(j + roof_center -
                  base.getWidth() / 2); // Align the left edge of the base with
                                        // the center of the roof
        base.PrintAtPosition();
      }
    }
    cout << endl;
  }
  cout << endl;
  // Print other shapes
  Rectangle p(5, 7, '*', "green");
  Rectangle k(5, '*', "green");
  Triangle tr1(5, '*', "blue", Triangle::UPRIGHT);
  Triangle tr2(5, '*', "blue", Triangle::UPLEFT);
  Triangle tr3(5, '*', "blue", Triangle::DOWNRIGHT);
  Triangle tr4(5, '*', "blue", Triangle::DOWNLEFT);

  p.Print();
  cout << endl;
  k.Print();
  cout << endl;
  tr1.Print();
  cout << endl;
  tr2.Print();
  cout << endl;
  tr3.Print();
  cout << endl;
  tr4.Print();
  cout << endl;
}