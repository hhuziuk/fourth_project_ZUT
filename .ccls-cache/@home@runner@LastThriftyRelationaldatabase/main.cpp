#include <iostream>
#include "rectangle.h"
#include "tree.h"

using namespace std;

int Shape::counter = 0;

int main() {
    int i, j;
    Rectangle p(5, 7, '*', "green");
    Rectangle k(5, '*', "green");
    Tree t(5, '*', "red");

    p.Print();
    cout << endl;
    k.Print();
    cout << endl;
    t.Print();
}