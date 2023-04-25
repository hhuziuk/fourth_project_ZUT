#include <iostream>
using namespace std;
#include "triangle.h"

Triangle::Triangle(int h, char s, string c, Direction d) : Shape(h, s, c) {
  width = h;
  direction = d;
  Alloc();
  Fill();
}

void Triangle::Fill() {
  int i, j;
  for (j = 0; j < height; j++) {
    for (i = 0; i < width; i++) {
      if (direction == UPRIGHT && i >= j)
        tab[j][i] = 1;
      else if (direction == UPLEFT && i <= j)
        tab[j][i] = 1;
      else if (direction == DOWNRIGHT && i >= width - j - 1)
        tab[j][i] = 1;
      else if (direction == DOWNLEFT && i <= width - j - 1)
        tab[j][i] = 1;
      else
        tab[j][i] = 0;
    }
  }
}