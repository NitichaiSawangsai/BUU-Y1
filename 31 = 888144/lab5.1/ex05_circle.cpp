class CircleType {
	public:
		void setRadius(double r){
			if(r>=0){
				radius=r;
			}else{
				radius =0;
			}
		}
		double getRadius(){
			return radius;     
		}
		double area(){

			return 3.141*(radius*radius);
		}
		double circumference(){
			return (2*3.141)*radius;
		}

	private:
		double radius;
};
#include <iostream>
#include <iomanip>
using namespace std;
int main() //Line 1
{ //Line 2
	CircleType circle1; //Line 3
	CircleType circle2; //Line 4
	double radius; //Line 5
	circle1.setRadius(8);
	cout << fixed << showpoint << setprecision(2); //Line 6
	cout << "Line 7: circle1 - "
		<< "radius: " << circle1.getRadius()
		<< ", area: " << circle1.area()
		<< ", circumference: " << circle1.circumference()
		<< endl; //Line 7
	cout << "Line 8: circle2 - "
		<< "radius: " << circle2.getRadius()
		<< ", area: " << circle2.area()
		<< ", circumference: " << circle2.circumference()
		<< endl << endl; //Line 8
	cout << "Line 9: Enter the radius of a circle: "; //Line 9
	cin >> radius; //Line 10
	cout << endl; //Line 11
	circle2.setRadius(radius); //Line 12
	cout << "Line 13: After setting the radius." << endl; //Line 13
	cout << "Line 14: circle2 - "
		<< "radius: " << circle2.getRadius()
		<< ", area: " << circle2.area()
		<< ", circumference: " << circle2.circumference()
		<< endl; //Line 14
	return 0; //Line 15
}//end main 
