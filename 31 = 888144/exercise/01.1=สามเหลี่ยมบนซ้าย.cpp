/* 
TASK : 01.1
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
int main () {
	int  i,j,num;
	cin>>num;
	for(i=0;i<num;i++) {
		for(j=0;j<=i;j++){
                     cout<<"*";
		}
		cout<<endl;
	}//for i  
	return 0;
}//main
