#include <iostream>
using namespace std;
#include "tree.h"

Tree::Tree(int h, char s, string c) : Shape(h, s, c) {
  cout << "Konstruktor tree z parametrami\n";
  width = 2 * height - 1;
  Alloc();
  Fill();
}

void Tree::Fill() {
  int i, j;
  for (j = 0; j < height; j++) {
    for (i = 0; i < width; i++) {
      if (i >= width / 2 - j && i <= width / 2 + j)
        tab[j][i] = 1;
      else
        tab[j][i] = 0;
    }
  }
}