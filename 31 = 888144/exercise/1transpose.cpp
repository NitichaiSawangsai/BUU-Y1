/* 
TASK : G3_Q4 
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
int main () {
	int num1,num2,i,j;
	int arr[100][100];
	int arr1[1000][1000];
	cin>>num1>>num2;
	for(i=0;i<num1;i++){
		for(j=0;j<num2;j++){
			cin>>arr[i][j];
		}//for j
	}//for i
          
	for(i=0;i<num2;i++){
		for(j=0;j<num1;j++){
		  	cout<<arr[j][i]<<" ";
		}//for i
             cout<<endl;
	}//for j


	return 0;
}//main
