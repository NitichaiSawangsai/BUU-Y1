/* 
TASK : HW2_08
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
int main () {
	int  i,num,cuot=0,sum=0;
	cin>>num;
	int array[1000]={0};    
	for(i=1;i<=num;i++){
		cin>>array[i];
	}//for i input 
		cuot++;
	for(i=1;i<=num;i++){
		cuot++;
		sum+=array[cuot];
		cuot++;
	}//for i
	cout<<sum<<endl;
	return 0;
}//main
