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
		for(j=0;j<(i-1);j++){
                        if(i==2&&j==1){
                           cout<<"";
                        }else if(i==num){
				cout<<"0 ";
			}else if(i>0&&j>0){
				cout<<"1 ";
			}else {
				cout<<"0 ";
			}//else
		}//for j
               if(i>1||i==2||i==1){
		cout<<"0 ";
              }//if 
		cout<<endl;
	}//for i
	return 0;
}//main
