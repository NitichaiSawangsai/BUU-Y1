/* 
TASK : G3_Q1
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
int main () {
	int  num1=0,num2=0,sum=0;
	do{
		cin>>num1>>num2;
	}while(num1>=50 || num1<=0||num2>=50||num2<=0);
		if(num1>=25){
			cout<<"G";
		}else{
			cout<<"B";
		}
		if(num2>=25){
			cout<<"G";
		}else{
			cout<<"B";
		}
		sum=num1+num2;
		if(sum>=50){
			cout<<"G";
		}else{ cout<<"B";}

	cout<<endl;
	return 0;
}//main
