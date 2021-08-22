/* 
TASK : HW2_01
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
int main () {
	int  i,j,num;
	cin>>num;
	for(i=0;i<=num;i++){
		for(j=0;j<=i;j++){
                       
                        if(i==num&&j>1&&j!=1){
                           cout<<"0";
                        }
		        else if(i==1&&j==1){ 
				cout<<"0";
			}
		        else if(i==i&&j==1){ 
				cout<<"";
			}
                        else if(j>0&&j<i){
				cout<<"1";
			}
			else  if(i>1){
				cout<<"0";
			}
		}//for j
		cout<<""<<endl;
	}//for i
	return 0;
}//main
