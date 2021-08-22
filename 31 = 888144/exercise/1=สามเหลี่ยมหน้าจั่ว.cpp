/* 
TASK : HW2_02
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
int main () {
	int  i,E,l,j,a,num=0;
	cin>>E;



/*
	for(i=1;i<=E;i++) {
		for(j=E;j>=i;j--) {
			if(j>i) {
				cout<<" ";
			}//if j>i
			else {
                                num=E+1;
				for(a=1;a<=j;a++) {
				num--;
					cout<<num<<" ";
				}//for a
			}//else j>i
		}//for j
		cout<<endl;
	}

*/	for(i=1;i<=E;i++) {
		for(j=1;j<=i;j++) {
			if(j<i) {
				cout<<" ";
			}//if j>i
			else {
				num=E+1;
				for(a=E;a>=j;a--) {
					num--;
					cout<<" "<<num;
				}//for a
				//for(a=E;a>=j;a--) {
				//      cout<<"*";
				//   }//for a

			}//else j>i
		}//for j
		cout<<endl;
	}//for i

	return 0;
}//main
