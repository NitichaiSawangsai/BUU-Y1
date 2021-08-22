#ifndef boxType_H
#define boxType_H

#include "rectangleType.h"
 
class BoxType: public RectangleType
{
public:
    void setDimension(double l, double w, double h);

    double getHeight() const;

    double area() const;

    double volume() const;

    void print() const;

    BoxType();

    BoxType(double l, double w, double h);

private:
    double height;
};

#endif
