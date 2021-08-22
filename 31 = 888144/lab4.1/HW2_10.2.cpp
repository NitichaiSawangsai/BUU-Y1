/* 
TASK : Hw3_10
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
int main () {
	int num1=0,num2=0,i,j,k=0,a,t,e=0;
	int arr[100][100];
	int sumarr[100][100]={0};
	cin>>num1>>num2;
	for(i=0;i<num1;i++){
		for(j=0;j<num2;j++){
			cin>>arr[i][j];
		}//for j
	}//for i
	int numa1=0,numa2=0,cuot=0,cuot_i=0,sum[100]={0};
	int arr1[100][100];
	cin>>numa1>>numa2;
	for(i=0;i<numa1;i++){
		for(j=0;j<numa2;j++){
			cin>>arr1[i][j];
		}//for j
	}//for i

	cuot=num1+1;
	e=num1;;
	for(i=0;i<num1;i++){
		cuot--;
		e++;
		for(j=0;j<num2;j++){
			sum[k]+=arr[i][j]*arr1[j][i];
			cout<<"aom ["<<i<<"]["<<j<<"]"<<endl;
			if(cuot==j){
				cout<<"sum["<<k<<"] ="<<sum[k]<<endl;
				for(i=0;j<i;j++){ 
					if(k==0){
						sumarr[0][0]=sum[(k)];
					}
					if(k==1){
						sumarr[0][1]=sum[(k)];
					}
					if(k==2){
						sumarr[1][0]=sum[(k)];
					}
					if(k==3){
						sumarr[1][1]=sum[(k)];
					}
				}
				k++;
			}//if
		}//for j
	}//for i

	cout<<"   sum    "<<endl;
	for(i=0;i<num1;i++){
		for(j=0;j<numa2;j++){
			cout<<sumarr[i][j]<<" ";
		}//for j
		cout<<endl;
	}//for i   

	return 0;
}//main
