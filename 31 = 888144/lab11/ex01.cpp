using namespace std;
#include <iostream>     //              Language  C++                 //
#include <string.h>     //             Input Letter                   //
#include <iomanip>
class Shape {
    public:
		virtual double area() =0;
		virtual double perimeter() =0;
};
class Action {
	public:
		Action(){
		}
		virtual void resize(int percent)=0;
		~Action();
};

class Circle : public  Shape,Action {
	private:
		double radius;
	public:
		Circle(){
			radius=0;
		}
		Circle(double r) {
		    radius=r;
		}
		void setRadius(double r){
			radius=r;
		}
		double area(){
			return (radius*radius)*3.14;
		}
		double perimeter(){
			 return 2*3.14*radius;
		}
		void resize(int percent){
			radius = (radius *percent)/100;
		}
		double getRadius(){
			return radius; 	
		}

};

int main(){
	double r;
	int percent;
		cin >> r;
		cin >> percent;	
		Shape *s = new Circle(r);
		cout << fixed << setprecision(2)<< s->area() << " " << s->perimeter() << endl;
		cout << "Resize " << percent << " %" << endl;
		((Circle*)s)->resize(percent);
		cout << s->area() << " " << s->perimeter() << endl;	
    return 0;
}
