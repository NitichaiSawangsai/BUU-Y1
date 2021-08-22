#include <iostream>
#include <string>
using namespace std;
class TriangleType {
	public :
                TriangleType();
                TriangleType(double b,double a);
		double area();
		void setBase(double base);
		double getBase();
		void setAltitude(double altitude);
		double getAltitude();
		void setValue(double b,double a);
		void print();
	private:
		static double pi;
		double _base;
		double _altitude;
};
double TriangleType::pi=0.5;
TriangleType::TriangleType(){
            setBase(0);
            setAltitude(0);
}
TriangleType::TriangleType(double b,double a){
            setBase(b);
            setAltitude(a);
}

double TriangleType::area(){
	return pi*(_base*_altitude);
}//area
void TriangleType::setBase(double base){
	_base=base;
}//setBase
double TriangleType::getBase(){
	return  _base;
}//getBase
void TriangleType::setAltitude(double altitude){
	_altitude=altitude;
}//setAltitude
double TriangleType::getAltitude(){
	return _altitude;
}//getAltitude
void TriangleType::setValue(double b,double a){
	setBase(b);
	setAltitude(a);
}//setValue
void TriangleType::print(){
        cout<<"Sum Area : "<<area()<<endl;
}//print
int main() { 
	TriangleType  T;
	int numbase,numaltitude,sum=0,sumnumbase;
	cin>>numbase>>numaltitude;
	T.setValue(numbase,numaltitude);
        T.print();
	return 0;
}//end main 
