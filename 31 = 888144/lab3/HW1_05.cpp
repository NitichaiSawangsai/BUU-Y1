/* 
TASK : HW_05
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
int main () {
	int num1=0,num2=0,num3=0;
	cin>>num1>>num2>>num3;
	if(num1==num2&&num2==num3&&num1==num3){
           cout<<"all the same"<<endl;
	}//if num1==num2&&num2==num3&&num1==num3
	if(num1!=num2&&num2!=num3&&num1!=num3){
           cout<<"all different"<<endl;
	}//if num1!=num2&&num2!=num3&&num1!=num3
        if(num1!=num2&&num2!=num3&&num1==num3) { 
           cout<<"neither"<<endl;
        }//if num1!=num2&&num2!=num3&&num1==num3   
	return 0;
}//main
