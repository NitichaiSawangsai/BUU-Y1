/* 
TASK : HW_04
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
int main () {
	int num=0;
	while(num<=1||num>=20000){
		cin>>num;
		if(num<=1||num>=20000){
			cout<<" ***** Please enter again ==>( 1<=number<=20,000 ) <== ***** "<<endl;
		}//if num<=1||num>=20000
	}//while(num<=1||num>=20000)	
	if(num>=10){
	num=num/10;
        num=num*2;
	}else {
		num=0;
	}//else
	cout<<""<<num<<endl;
	return 0;
}//main
