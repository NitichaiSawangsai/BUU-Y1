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

    rectangleType& setLength(double l);

    rectangleType& setWidth(double w);

    rectangleType(double l = 0.0, double w = 0.0);

private:
    double length;
    double width;
};

#endif
