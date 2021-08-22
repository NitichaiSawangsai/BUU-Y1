#include <iostream>
#include "rectangleType.h"
#include "boxType.h"
  
using namespace std;

void BoxType::setDimension(double l, double w, double h)
{
    RectangleType::setDimension(l, w);

    if (h >= 0)
        height = h;
    else
        height = 0;
}

double BoxType::getHeight() const
{
    return height;
}

double BoxType::area() const
{
    return  2 * (getLength() * getWidth() + getLength() * height + getWidth() * height);
}

double BoxType::volume() const
{
    return RectangleType::area() * height;
}

void BoxType::print() const
{
    RectangleType::print();
    cout << "; Height = " << height;
}

BoxType::BoxType()	
{
    height = 0.0;
}

BoxType::BoxType(double l, double w, double h): RectangleType(l, w)
{ 
    if (h >= 0)
        height = h;
    else
        height = 0;
}
