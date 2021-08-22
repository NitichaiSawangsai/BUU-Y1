/* 
TASK : HW_07
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
int main () {
	int high=0,length=0,i,j;
	cin>>high;
	cin>>length;
	for(i=0;i<high;i++){
		cout<<"*";
		for(j=0;j<length;j++) {
			if(i==0&&j<=(length-2)){
				cout<<"*";
			}//if i==0&&j<=length
			if(i>=1&&i<=(high-2)){
				if(j>-1&&j<(length-2)||j>=(length-1)) {
					cout<<" ";
				}else {
					cout<<"*";
				}//else
			}//if i>=1&&i<=(high-2) 
			if(i==(high-1)&&j<=(length-2)){
				cout<<"*";
			}//if i==(high-1)&&j<=length
		}//for j
		cout<<endl;
	}//for i 
	return 0;
}//main
