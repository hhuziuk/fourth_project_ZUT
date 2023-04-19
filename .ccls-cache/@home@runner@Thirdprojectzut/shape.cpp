
#include <iostream>
using namespace std;
#include "shape.h"

void Shape::Print() {
    int i, j;
    cout << color;
    for (j = 0; j < height; j++) {
        for (i = 0; i < width; i++)
            if (tab[j][i]) {
                cout << color;
                cout << symbol;
            } else
                cout << ' ';
        cout << endl;
    }
    cout << "\033[0m";
}

Shape::Shape(int h, char s, string c) {
    int i, j;
    height = h;
    width = 1;
    symbol = s;
    cout << " Konstruktor Shape z parametrami\n";
    if (c == "green") color = "\033[1;32m";
    if (c == "red") color = "\033[1;31m";
    if (c == "yellow") color = "\033[1;33m";
    counter++;
}

void Shape::Alloc() {
    int i, j;
    tab = new int* [height];
    for (j = 0; j < height; j++) {
        tab[j] = new int[width];
        for (i = 0; i < width; i++)
            tab[j][i] = 0;
    }
}

Shape::~Shape() {
    int j;
    counter--;
    cout << "kasuje shape\nzostalo " << counter << "\n";
    for (j = 0; j < height; j++)
        delete tab[j];
    delete tab;
    cout << " destruktor shape\n";
}