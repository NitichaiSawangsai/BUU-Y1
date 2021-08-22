#include <iostream>
#include "CylinderType.h"
#include "CircleType.h"

using namespace std;

CylinderType::CylinderType(float H,float RR) : CircleType(RR) {
	h=H;
}
void CylinderType::setCylinderType (float H,float RR){
	h=H;
	setCircleType(RR); 	
} 
float CylinderType::processCylindrical_cross (){
	return (2*(3.414*(r*r))+2*(3.414*r*h));
}   
float CylinderType::processCylinder_volume(){
	return 3.414*(r*r)*h;
}
void CylinderType::print(){
	CircleType::print();
	cout<<"H = "<<h<<endl;
	cout<<"circumference : "<<circumference()<<endl;
	cout<<"circle_area : "<<circle_area()<<endl;
	cout<<"processCylindrical_cross : "<<processCylindrical_cross()<<endl;
	cout<<"processCylinder_volume :"<<processCylinder_volume()<<endl;
}
