/* 
   TASK : HW_01
   LANG : C++
   AUTHOR : NItichai Sawangsai
   STUDENTID : 59160668
   MAJOR : SE
*/
using namespace std;
#include <iostream>
int main () {
	int a=0,b=0,sum=0;
   while(a<=0||a>=1000000000) {
                cin>>a;
                if(a<=0||a>=1000000000){
                  cout<<" ***** Please enter again ==> (0<=a<=1000000000) <== *****"<<endl;
                }//a<=0||a>=1000000000
    }//while a<=0||a>=1000000000
   while(b<=0||b>=1000000000) {
                cin>>b;
                if(b<=0||b>=1000000000){
                  cout<<" ***** Please enter again ==> (0<=b<=1000000000) <== *****"<<endl;
                }//b<=0||b>=1000000000
    }//while b<=0||b>=1000000000
                sum=a+b;
                cout<<""<<sum<<endl;
	return 0;
}//main
