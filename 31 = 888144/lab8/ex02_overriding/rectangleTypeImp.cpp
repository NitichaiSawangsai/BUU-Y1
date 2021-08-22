#include <iostream>
#include "rectangleType.h"

using namespace std;
 
void RectangleType::setDimension(double l, double w)
{
    if (l >= 0)
        length = l;
    else
        length = 0;

    if (w >= 0)
        width = w;
    else
        width = 0;
}

double RectangleType::getLength() const
{
    return length;
}

double RectangleType::getWidth()const
{
    return width;
}

double RectangleType::area() const
{
    return length * width;
}

double RectangleType::perimeter() const
{
     return 2 * (length + width);
}

void RectangleType::print() const
{
    cout << "Length = "  << length << "; Width = " << width;
}

RectangleType::RectangleType(double l, double w)
{
    setDimension(l, w);
}

RectangleType::RectangleType()
{
    length = 0;
    width = 0;
}
