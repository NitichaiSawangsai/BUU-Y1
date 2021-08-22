/* 
TASK : 01.2
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
int main () {
	int  i,j,num,c=0,v=1;
	cin>>num;
	for(i=num;i>=1;i--){
		c=num;
		for(j=0;j<num+1;j++){
			if(i>j){
                           
			}else{
                c--;
				cout<<j;
			}
		}
		cout<<endl;
	}
	return 0;
}//main
