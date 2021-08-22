/* 
TASK : HW_02
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
int main () {
	int num,sum,discount;
	cin>>num;	
	if(num>0&&num<=1000){
		discount=(num*0)/100;
                sum=num-discount;
	}//if num<0&&num<=1000
	if(num>=1001&&num<=2000) {
		discount=(num*5)/100;
                sum=num-discount;
	}//num<=1001&&num<=2000 
	if(num>=2001&&num<=5000) {
		discount=(num*10)/100;
                sum=num-discount;
	}//num<=2001&&num<=5000
	if(num>=5001&&num<=10000) {
		discount=(num*15)/100;
                sum=num-discount;
	}//num<=5001&&num<=10000
	if(num>=10001) {
		discount=(num*20)/100;
                sum=num-discount;
	}//num>=10001

        cout<<""<<sum<<endl;
	return 0;
}//main
