/* 
TASK : HW_10
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
int main() {
	int i,j,num;
	cin>>num;
	for(i=0;i<(num+1);i++){
		for(j=num-i;j>0;j--){
			cout<<" ";
		}//for j
		for(j=i;j>0;j--){
			cout<<"*";
		}//for j
		for(j=1;j<i;j++){
			cout<<"*";
		}//for j
		cout<<endl;
	}//for i
	return 0;
}//main
