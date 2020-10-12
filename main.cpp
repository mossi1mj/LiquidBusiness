// Program: Cylinder Cost Calculator
// Description: Calculates the cost of shipping a container by amount of liquid.
// Inputs: radius, height, shipping cost, and painting cost
// Outputs: volume, area, total shipping cost, total paint cost
// Written by: Myron Moss
// Last Modification: 10/10/2020

#include "cylinderType.h"
#include "cylinderType.cpp"
#include <iostream>

using namespace std;

//prototype methods
double getShippingCost(double, double);
double getPaintingCost(double, double);

int main() {
    //define variables
    double radius, height, area, volume;
    double shippingCost, paintingCost;
    double shippingCostLiter, paintCostPerFoot;

    //take user input
    cout << "Enter the radius of the container: ";
    cin >> radius;
    cout << "Enter the height of the container: ";
    cin >> height;

    //create new object from cylindertype class
    cylinderType ct(radius,height);

    //take user input for calculations
    cout << "Enter the shipping cost: ";
    cin >> shippingCostLiter;

    cout <<"Enter paint cost: ";
    cin >> paintCostPerFoot;

    //import calculations from cyclindertype class
    volume = ct.getVolume();
    area = ct.getArea();

    //use methods to calculate cost for shipping and paint
    shippingCost = getShippingCost(volume, shippingCostLiter);
    paintingCost = getPaintingCost(area, paintCostPerFoot);

    //display results
    cout << "Volume of the cylinder: " << volume << endl;
    cout << "Area of the cylinder: " << area << endl;
    cout << "Shipping cost: $" << shippingCost << endl;
    cout << "Painting cost: $" << paintingCost << endl;

    return 0;
}

//calculate shipping and paint cost methods
double getShippingCost(double volume, double shippingCostLiter){
    return volume * 28.32 * shippingCostLiter;
}

double getPaintingCost(double area, double paintCostPerFoot){
    return area * paintCostPerFoot;
}
