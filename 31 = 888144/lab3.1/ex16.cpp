using namespace std;
#include <iostream>
#include<math.h>
#define Pi 3.14159
int distance (double x1,double y1,double x2,double y2){
	double sumx=0,sumy=0,sum=0;
	sumx=x2-x1;
	sumx=sumx*sumx;
	sumy=y2-y1;
	sumy=sumy*sumy;
	sum=sumx+sumy;
	sum=sqrt(sum);
	cout<<"distance = "<<sum<<endl;
	return sum;
}//distance
int radius (double x1,double y1,double x2,double y2){
	double sum=0;
	sum=distance(x1,y1,x2,y2);
	return sum;
}//radius
int circumference (double numradius){
	double sum=0;
	sum=(2*Pi)*numradius;
	cout<<"circumference = "<<sum<<endl;
	return sum;
}//circumference
int area (double numcircumference){
	double sum=0;
	sum=Pi*(numcircumference*numcircumference);
	cout<<"area = "<<sum;
}//area

int main () {
	double x1,y1,x2,y2,sum=0,sum1=0;
	cout<<"X1 : ";
	cin>>x1;
	cout<<"Y1 : ";
	cin>>y1;
	cout<<"X2 : ";
	cin>>x2;
	cout<<"Y2 : ";
	cin>>y2;
	sum=radius(x1,y1,x2,y2);
	sum1=circumference(sum);
	area(sum1);
	cout<<endl;
	return 0;
}//main


