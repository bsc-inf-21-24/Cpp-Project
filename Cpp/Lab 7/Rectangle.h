#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;
public:
    Rectangle();
    Rectangle(float l, float w);
    ~Rectangle();
    void assignValues(float l, float w);
    float retrieveValues1();
    float retrieveValues2();
    float calculateArea();
};

#endif