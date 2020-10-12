#include "cylinderType.h"

cylinderType::cylinderType() {
    radius = 0;
    height = 0;
}

//constructor
cylinderType::cylinderType(double r, double h) {
    radius = r;
    height = h;
}

//define getters and setters
void cylinderType::setRadius(double r) {
    radius = r;
}

void cylinderType::setHeight(double h) {
    height = h;
}

double cylinderType::getRadius() const {
    return radius;
}

double cylinderType::getHeight() const {
    return height;
}

//calculate area and volume methods
double cylinderType::getArea() const {
    return ((2 * 3.14 * radius * radius) + (2 * 3.14 * radius * height));
}

double cylinderType::getVolume() const {
    return (3.14 * radius * radius * height);
}