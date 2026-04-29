#include "shape.h"

namespace shapes {

// ===== squere =====
squere::squere() {
    side = 0.0f;
}

squere::squere(float side) {
    this->side = side;
}

void squere::getValue(float side) {
    this->side = side;
}

float squere::setSide() {
    return side;
}

squere::~squere() {}


// ===== triangle =====
triangle::triangle() {
    base = 0.0f;
    height = 0.0f;
}

triangle::triangle(float base, float height) {
    this->base = base;
    this->height = height;
}

void triangle::getValue(float base, float height) {
    this->base = base;
    this->height = height;
}

float triangle::setBase() {
    return base;
}

float triangle::setHeight() {
    return height;
}

triangle::~triangle() {}


// ===== circle =====
circle::circle() {
    radius = 0.0f;
}

circle::circle(float radius) {
    this->radius = radius;
}

void circle::getValue(float radius) {
    this->radius = radius;
}

float circle::setRadius() {
    return radius;
}

circle::~circle() {}


// ===== Area =====
float Area::areaOfSquere(squere sidelength) {
    return sidelength.setSide() * sidelength.setSide();
}

float Area::areaOfTriangle(triangle demession) {
    return demession.setBase() * demession.setHeight() / 2;
}

float Area::areaOfCircle(circle c1) {
    return 3.142857142857142 * c1.setRadius() * c1.setRadius();
}

Area::~Area() {}

}