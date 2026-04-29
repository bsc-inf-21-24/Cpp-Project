#include "Rectangle.h"

Rectangle::Rectangle() {
    length = 0.0f;
    width = 0.0f;
}
Rectangle::Rectangle(float l, float w) {
    length = l;
    width =  w;
}

Rectangle::~Rectangle() {
    // Does nothing for now
}

void Rectangle::assignValues(float l, float w) {
    length = l;
    width = w;
}

float Rectangle::retrieveValues1() {
    return length;
}

float Rectangle::retrieveValues2() {
    return width;
}

float Rectangle::calculateArea() {
    return length * width;
}