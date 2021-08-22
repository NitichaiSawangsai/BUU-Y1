/* 
TASK : Hw2_10
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
int main () {
	int num1=0,num2=0,i=0,j=0,a=0;
	int arr[100][100]={0};
	int sumarr[100][100]={0};
	cin>>num1>>num2;
	for(i=0;i<num1;i++){
		for(j=0;j<num2;j++){
			cin>>arr[i][j];
		}//for j
	}//for i
	int numa1=0,numa2=0;
	int arr1[100][100]={0};
	cin>>numa1>>numa2;
	for(i=0;i<numa1;i++){
		for(j=0;j<numa2;j++){
			cin>>arr1[i][j];
		}//for j
	}//for i
	if(num2==numa1){
		for(i=0;i<num1;i++){
			for(j=0;j<numa1;j++){
				for(a=0;a<num2;a++){
					sumarr[i][j]+=arr[i][a]*arr1[a][j];
				}//for a
			}//for j
		}//for i
		for(i=0;i<num1;i++){
			for(j=0;j<numa2;j++){
				cout<<sumarr[i][j]<<" ";
			}//for j
			cout<<endl;
		}//for i   
	}else{
		cout<<"NaN"<<endl;
	}//else if (num2!=numa1)

	return 0;
}//main
