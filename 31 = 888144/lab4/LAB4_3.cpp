/* 
TASK : LAB4_3
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
int sumAtCol (int arr[100][100], int row, int col, int at){
	int i,j,sum=0;
	for(i=0;i<row;i++){
		for(j=at;j<=at;j++){
			sum+=arr[i][j];
		}//for j
	}//for i
	cout<<""<<sum<<endl;
	return  sum;
}// sumAtCol
int main () {
	int num1,num2,i,j,at;
	int arr[100][100];
	cin>>num1>>num2;
        cout<<endl;
	for(i=0;i<num1;i++){
		for(j=0;j<num2;j++){
			cin>>arr[i][j];
		}//for j
		cout<<endl; 
	}//for i
	cin>>at;
	for(i=0;i<num1;i++);
		for(j=0;j<num2;j++);
			if(at<i&&at<j){
				sumAtCol(arr,num1,num2,at);
		}else{
                    cout<<"-1"<<endl;
                }
	

return 0;
}//main
