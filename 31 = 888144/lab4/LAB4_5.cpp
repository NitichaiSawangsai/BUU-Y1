/* 
TASK : LAB4_5
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
		cout<<endl; 
	}//for i

	int cnum=0;
	for(i=0;i<num1;i++){
		for(j=0;j<num2;j++){
			if(arr[i][j]==arr[j][i]){
			}else{
				cnum++;
			}
		}//for i
	}//for j
	if(cnum>0){
		cout<<"false"<<endl;
	}else{
		cout<<"true"<<endl;
	}//else


	return 0;
}//main
