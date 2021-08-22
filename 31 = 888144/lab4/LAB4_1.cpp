/* 
TASK : LAB4_1
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
int main () {
	int num,i,j,a,aom;
	cin>>num;
	for(i=num;i>=1;i--)    {
		for(j=num;j>=i;j--)  {
			if(j>i) {
				cout<<" "; 
			}
			else {
				aom=num;
				for(a=1;a<=i;a++) {
					cout<<aom;
					aom--;
				}
			}
		}
		cout<<endl;
	}

	return 0;
}//main
