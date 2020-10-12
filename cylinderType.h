#ifndef LIQUIDBUSINESS_CYLINDERTYPE_H
#define LIQUIDBUSINESS_CYLINDERTYPE_H


class cylinderType {
public:
    cylinderType();
    cylinderType(double, double);
    void setRadius(double);
    void setHeight(double);
    double getRadius() const;
    double getHeight() const;
    double getArea() const;
    double getVolume() const;

private:
    double radius;
    double height;
};


#endif
