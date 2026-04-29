#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    Rectangle rectangle;
    float length, width;
    cout << "Enter the length of the rectangle: " << endl;
    cin >> length;
    cout << "Enter the width of the rectangle: " << endl;
    cin >> width;
    rectangle.assignValues(length, width);

    cout << "The Area of the rectangle is: " << rectangle.calculateArea() << endl;
    cout << "Enter another length and width: " << endl;
    cin >> length >> width;
  Rectangle rectangle2(length, width);
    cout << "The Area of the rectangle is: " << rectangle2.calculateArea() << endl;
    return 0;
}