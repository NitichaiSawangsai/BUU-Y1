/* 
TASK : G3_Q3
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
int main () {
	int i,j,a,num,numa=0;
	cin>>num;
	for(i=1;i<=num;i++) {
		for(j=num;j>=i;j--) {
			if(j>i) {    
				cout<<" ";
			}//if j>i 
			else {
                                numa=(num+1);
				for(a=1;a<=j;a++) {
                                       numa--;
					cout<<numa;
				}//for a
			}//else j>i
		}//for j
		cout<<endl;
	}//for i
	return 0;
}//main
