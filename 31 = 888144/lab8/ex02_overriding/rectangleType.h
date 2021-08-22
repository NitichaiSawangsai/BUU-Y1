#ifndef rectangleType_H
#define rectangleType_H

class RectangleType
{
public: 
    void setDimension(double l, double w);

    double getLength() const;

    double getWidth() const;

    double area() const;

    double perimeter() const;

    void print() const;

    RectangleType();

    RectangleType(double l, double w);

private:
    double length;
    double width;
};

#endif
