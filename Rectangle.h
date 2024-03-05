#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

class Rectangle 
{
private:
    double width;
    double height;

public:
    Rectangle(double w, double h);
    ~Rectangle();
    double getWidth();
    double getHeight();
    double calculateArea();
    void printInfo();
};

#endif // RECTANGLE_H
