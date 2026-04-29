#ifndef SHAPE_H
#define SHAPE_H

namespace shapes {

class squere
{
private:
    float side;

public:
    squere();
    squere(float side);

    void getValue(float side);
    float setSide();

    ~squere();
};

class triangle
{
private:
    float base;
    float height;

public:
    triangle();
    triangle(float base, float height);

    void getValue(float base, float height);
    float setBase();
    float setHeight();

    ~triangle();
};

class circle
{
private:
    float radius;

public:
    circle();
    circle(float radius);

    void getValue(float radius);
    float setRadius();

    ~circle();
};

class Area
{
public:
    static float areaOfSquere(squere sidelength);
    static float areaOfTriangle(triangle demession);
    static float areaOfCircle(circle c1);

    ~Area();
};

}

#endif