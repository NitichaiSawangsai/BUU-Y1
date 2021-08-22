#ifndef CircleType_H
#define CircleType_H
#include <iostream>
#include <string>

using namespace std;

class CircleType {
	protected :
		float r;
	public    :
		CircleType();
		CircleType(float R);
		void setCircleType (float R);
		float circumference ();
		float circle_area ();
		void print();
};
#endif
