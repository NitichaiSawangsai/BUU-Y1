/* 
TASK : LAB4_2
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
int main () {
	int num1,num2,i,j;
	int matrix[1000][1000];
	int nummatrix[1000][1000];
	int numa,numb;
	for(i=0;i<1000;i++){
		for(j=0;j<1000;j++){
			nummatrix[i][j]=1;
		}//for j
	}//fot i
	cin>>num1>>num2;
	for(i=0;i<num1;i++){
		for(j=0;j<num2;j++){
			cin>>matrix[i][j];
		}//for j
		cout<<endl; 
	}//for i
	cin>>numa>>numb;
	if(nummatrix[numa][numb]== matrix[numa][numb-1] && nummatrix[numa][numb]== matrix[numa][numb+1] || nummatrix[numa][numb]== matrix[numa-1][numb] && nummatrix[numa][numb]== matrix[numa+1][numb])    {
		cout<<"true"<<endl;
	}//if matrix[i][j] == 1
	else{
		cout<<"false"<<endl;
	}//else

	return 0;
}//main
