#include "border.h"
#include "rectangle.h"
#include "tree.h"
#include "triangle.h"
#include <iostream>
using namespace std;

int Shape::counter = 0;

int main() {
    Tree roof(12, '*', "red");
    Rectangle base(8, 10, '*', "green");
    Border window(4, '#', "yellow");

    roof.Print();
    int roof_center = roof.getWidth() / 2;
    int base_center = base.getWidth() / 2;
    int window_center = window.getWidth() / 2;
    int offset_base = roof_center - base_center;
    int offset_window = base_center - window_center;

    for (int i = 0; i <= base.getHeight(); i++) {
        for (int j = 0; j <= base.getWidth(); j++) {
            if (i >= base.getHeight() / 2 - window.getHeight() / 2 &&
                i < base.getHeight() / 2 + window.getHeight() / 2 &&
                j >= base_center - window.getWidth() / 2 + offset_base &&
                j < base_center + window.getWidth() / 2 + offset_base) {
                window.setX(i - (base.getHeight() / 2 - window.getHeight() / 2));
                window.setY(j - (base_center - window.getWidth() / 2 + offset_base));
                window.PrintAtPosition();
            } else {
                base.setX(i);
                base.setY(j - offset_base);
                base.PrintAtPosition();
            }
        }
        cout << endl;
    }

    cout << endl;

    Rectangle p(5, 7, '*', "green");
    Rectangle k(5, '^', "green");
    Triangle tr1(5, '%', "blue", Triangle::UPRIGHT);
    Triangle tr2(5, '$', "yellow", Triangle::UPLEFT);
    Triangle tr3(5, '#', "green", Triangle::DOWNRIGHT);
    Triangle tr4(5, '@', "blue", Triangle::DOWNLEFT);

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