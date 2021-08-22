#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Point {
        private :

	public  :
		int x,y;
		Point (){
			x=0;y=0;
		}
		void setPoint (int X,int Y){
			x=X;y=Y;	       
		}
		void print(){
			cout<<"( "<<x<<" , "<<y<<" )"<<endl;
		}
};

class Line :  public  Point {
        private :
 
	public  :
		int x1,y1;
		int x2,y2;
		Line() {
			x1=0;y1=0;
			x2=0;y2=0;
		}
		void setLineStart (){
			x1=x,y1=y;	
		} 
		void setLineEnd (){
			x2=x,y2=y;	
		}
		float process (){
			float sum,sum1=0,sum2=0;
			sum1=x2-x1;
			sum2=y2-y1;
			sum=(sum1*sum1)+(sum2*sum2);
			sum=sqrt(sum);

			return sum;
		}   
		void printLine(){
			cout<<"------------ Line------------"<<endl;	 
			cout<<"( "<<x1<<" , "<<y1<<" )"<<" ";
			cout<<"( "<<x2<<" , "<<y2<<" )"<<" ";
		}


};

int main(){
	float Max=0,num;
	int x,y,sum=0,NUM=5;
	Line clark[NUM];
	for(int i=1;i<=NUM;i++){
		cout<<"(X1,Y1) && (X2,Y2) = ";cin>>x>>y;
		clark[i].setPoint(x,y);
		clark[i].setLineStart();
		cin>>x>>y;
		clark[i].setPoint(x,y);
		clark[i].setLineEnd();
		clark[i].printLine();
		num=clark[i].process();
                cout<<"SUM =  "<< num <<endl;
		if(i==1){
			Max=num;
		}
		if(Max<num){
                        Max=num;
			sum=i;
		}else if(Max==num){
                       Max=num;
                       sum=i;
                }
                if(i==NUM){
                  cout<<"-----------------------------"<<endl;
                }
	}  
	cout <<"The longest straight line  = "<< sum << endl << endl;
	return 0;
}

