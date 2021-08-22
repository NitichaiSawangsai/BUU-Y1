#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Rectangle {
	private :
		int width;
		int length;
	public    :
		Rectangle(){
			width=0;
			length=0;
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
		void print(){
			for(int i=0;i<width;i++){
				for(int j=0;j<length;j++){
					cout<<"*";
				}
				cout<<endl;
			}
		}
};
int main(){
	int num1,num2;
	cin>>num1>>num2;
        Rectangle aa;
        aa.setArea(num1,num2);
	aa.print();
	return 0;
}//main

