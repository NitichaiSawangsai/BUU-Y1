/* 
TASK : HW_06
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
int main () {
	int num=0,i,min=0,max=0,num1[1000]={0};
	do{
		cin>>num;
	}while(num<1||num>1000);
	for(i=1;i<=num;i++) {
		do{
			cin>>num1[i];
		}while(num1[i]<-2000000000||num1[i]>2000000000);
	}//for i
	for(i=1;i<=num;i++){
		if(i==1){ 
			min=num1[1]; 
			max=num1[1];      
		}//if i==1 
		if(num1[i]<min){
			min=num1[i];
		}//if num1[i]<max 
		if(num1[i]>max){
			max=num1[i];
		}//if num1[i]>min
	}//for i
	cout<<""<<min<<endl;
	cout<<""<<max<<endl;
	return 0;
}//main
