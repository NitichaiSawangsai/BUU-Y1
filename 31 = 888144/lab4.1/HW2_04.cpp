/* 
TASK : HW2_04
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
int main () {
	int  i,j,num,numcount=0;
	cin>>num;
	for(i=0;i<=num;i++){
		for(j=0;j<i;j++){
                   numcount++; 
                   cout<<numcount<<" "; 
		}//for j
		cout<<endl;
	}//for i
	return 0;
}//main
