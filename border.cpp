#include <iostream>
using namespace std;
#include "border.h"

Border::Border(int h, char s, string c) : Rectangle(h, s, c) { Fill(); }

void Border::Fill() {
  int i, j;
  for (j = 0; j < height; j++) {
    for (i = 0; i < width; i++) {
      if (j == 0 || j == height - 1 || i == 0 || i == width - 1)
        tab[j][i] = 1;
      else
        tab[j][i] = 0;
    }
  }
}