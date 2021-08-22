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
	//	Line(float x1,float y1,float x2,float y2) : start(x1,y1),end(x2,y2){}
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
	int NUM=5,sum=0,i=0;
	float Max=0.00,num=0.00;
       
		Line a1;
                a1.setLine(1,1,1,2);
                num=a1.process();
		a1.print();
                cout<<"Ans = "<<num<<endl;
	        cout<<"-----------------------------"<<endl;	
 
		Line a2;
                a2.setLine(1,1,1,3);
                num=a2.process();
		a2.print();
                cout<<"Ans = "<<num<<endl;
	        cout<<"-----------------------------"<<endl;

		Line a3;
                a3.setLine(1,1,1,4);
                num=a3.process();
		a3.print();
                cout<<"Ans = "<<num<<endl;
	        cout<<"-----------------------------"<<endl;	

		Line a4;
                a4.setLine(2,2,2,5);
                num=a4.process();
		a4.print();
                cout<<"Ans = "<<num<<endl;
	        cout<<"-----------------------------"<<endl;	
 
		Line a5;
                a5.setLine(2,3,3,8);
                num=a5.process();
		a5.print();
                cout<<"Ans = "<<num<<endl;
	        cout<<"-----------------------------"<<endl;	
	
                if(i==0){
			Max=num;
		}
		if(Max<=num){
			Max=num;
			sum=i; 
		}

            //  }
	cout <<"The longest straight line  = "<< sum << endl ;

	return 0;
}

