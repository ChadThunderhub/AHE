#include "Rectangle.h"

Rectangle::Rectangle(double w, double h) : width(w), height(h)
{
    std::cout << "Konstruktor Rectangle\n\n";
}

Rectangle::~Rectangle() 
{
    std::cout << "\nDekonstruktor Rectangle\n";
}

double Rectangle::getWidth()
{
    return width;
}

double Rectangle::getHeight()
{
    return height;
}

/// <summary>
/// Calculates the area of a rectangle
/// Returns square centimeters
/// </summary>
/// <returns>
/// Width multiplied by height of the rectangle
/// </returns>
double Rectangle::calculateArea()
{
    return width * height;
}

/// <summary>
/// Prints the height, the width and the area of a rectangle
/// </summary>
void Rectangle::printInfo()
{
    std::cout << "Dane Prostok¹ta:" << std::endl;
    std::cout << "Szerokoœæ: " << width << " cm" << std::endl;
    std::cout << "Wysokoœæ: " << height << " cm" << std::endl;
    std::cout << "Pole: " << calculateArea() << " cm kwadratowych" << std::endl;
}
