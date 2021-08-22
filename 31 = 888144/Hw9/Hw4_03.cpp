#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Rectangle {
	private :
                 int width;
                 int length;
	public    :
                Rectangle(int w,int l){
                   width=w;
                   length=l;
                }
                void setArea(int w,int l){
                   width=w;
                   length=l;
                }
                int area(){
                    return width*length;
                }
                int perimeter(){
                    return 2*(width+length);
                }
};

int main(){
        int num1,num2;
        cin>>num1>>num2;
        Rectangle aa(num1,num2);
        cout<<aa.area()<<endl;
        cout<<aa.perimeter()<<endl;
	return 0;
}//main

