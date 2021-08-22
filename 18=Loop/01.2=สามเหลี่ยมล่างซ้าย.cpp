/* 
TASK : 01.2
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
int main () {
	int  i,j,num,cuot=0;
	cin>>num;
	num=num+1;
	for(i=((num-1)-1);i>-1;i--) {
		for(j=0;j<=i;j++){
                     cout<<"*";
		}
/*		for(j=0;j<((num-1)-(i+1))*2;j++){
			cout<<" ";
		}
		for(j=i;j>=0;j--){
                        cout<<" ";
		}
*/		cout<<endl;
	}//for i  
	return 0;
}//ma
