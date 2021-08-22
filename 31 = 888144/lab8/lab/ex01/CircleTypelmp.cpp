#include <iostream>
#include "CylinderType.h"

using namespace std;

CircleType::CircleType(){
	r=0;
}
CircleType::CircleType(float R){
	r=R;
}
void CircleType::setCircleType (float R){
	r=R;	       
}
float CircleType::circumference (){
	return  2*(3.414*r) ;  
}
float CircleType::circle_area (){
	return  3.414*(r*r) ;  
}
void CircleType::print(){
	cout<<"r = "<<r<<endl;
}
