/* 
TASK : HW_03
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
int main () {
	int num=0,mun=0,mun11=0,mun1=0,mun2=0,mun3=0,mun4=0;
	while(num<=1000||num>=9999){
		cin>>num;
		if(num<=1000||num>=9999){
			cout<<" ***** Please enter again ==>( 1000<=number<=9999 ) <== ***** "<<endl;
		}//if num<=1000||num>=9999
	}//while(num<=1000||a>=9999)	
	mun4=num%10;
	mun=(num-mun4)/10;
	mun3=mun%10; 
	mun11=(mun-mun3)/10;
	mun2=mun11%10; 
	mun1=(mun11-mun2)/10; 
	cout<<""<<mun4<<mun3<<mun2<<mun1<<endl;
	return 0;
}//main
