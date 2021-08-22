/* 
TASK : sum
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
int main () {
	int  i,j,a,num;
	cin>>num;
	for(i=0;i<num;i++) {
		for(j=0;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}//for i


	for(i=num-2;i>-1;i--) {
		for(j=0;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}//for i


	for(i=1;i<num;i++) {
		for(j=num;j>=i;j--) {
			if(j>i) {
				cout<<" ";
			}//if j>i
			else {
				for(a=1;a<=j;a++) {
					cout<<"*";
				}//for a
			}//else j>i
		}//for j
		cout<<endl;
	}//for i


	for(i=num;i>=1;i--)    {
		for(j=num;j>=i;j--)  {
			if(j>i) {
				cout<<" ";
			}
			else {
				for(a=1;a<=i;a++) {
					cout<<"*";
				}
			}
		}
		cout<<endl;
	}
	return 0;
}//main
