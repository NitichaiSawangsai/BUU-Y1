#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Point{
	private:
		float x;
		float y;
	public:
		Point (){
			x=0.00;y=0.00;
		}
		void setPoint (float X,float Y){
			x=X;y=Y;
		}
		float get_x (){
			return x;  
		}
		float get_y (){
			return y;  
		}
		void print(){
			cout<<"( "<<x<<" , "<<y<<" )"<<endl;
		}
};

class Line {
	private:
		Point start;
		Point end;
	public:
                Line(){
                }
		void setLine(float x1,float y1,float x2,float y2){ start.setPoint(x1,y1);end.setPoint(x2,y2);}
		float process(){
			return sqrt((pow((end.get_x()-start.get_x()),2.00) + pow((end.get_y()-start.get_y()),2.00)));
		}
		void print(){
			cout<<"------------ Line------------"<<endl;	 
			cout<<"( "<<start.get_x()<<" , "<<start.get_y()<<" )"<<" ";
			cout<<"( "<<end.get_x()<<" , "<<end.get_y()<<" )"<<" "<<endl;
		}

};

int main(){
	int sum=0,i=0;
	float Max=0.00,num=0.00;
        float q,w,e,r;
             for(i=0;i<5;i++){
		Line a[i];
                cin>>q>>w>>e>>r;
                a[i].setLine(q,w,e,r);
                num=a[i].process();
		a[i].print();
                cout<<"Ans = "<<num<<endl;
	        cout<<"-----------------------------"<<endl;	
                if(i==0){
			Max=num;
		}
		if(Max<=num){
			Max=num;
			sum=(i+1); 
		}
              }
	cout <<"The longest straight line  = "<< sum << endl ;

	return 0;
}

