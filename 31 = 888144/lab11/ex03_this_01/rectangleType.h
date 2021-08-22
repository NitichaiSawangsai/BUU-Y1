#ifndef rectangleType_H
#define rectangleType_H

class rectangleType
{
public:
    void setDimension(double l, double w);

    double getLength() const;

    double getWidth() const;

    double area() const;

    double perimeter() const;

    void print() const;

    rectangleType();

    rectangleType(double l, double w);

    rectangleType doubleDimensions();

private:
    double length;
    double width;
};

#endif
