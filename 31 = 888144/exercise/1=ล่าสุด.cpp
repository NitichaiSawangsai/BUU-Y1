/* 
TASK : HW2_06
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
int main () {
	int  i,j,num,cuot=0;
	cin>>num;
	num=num+1;
	for(i=((num-1)-1);i>-1;i--) {
		for(j=0;j<=i;j++){
			if(i==((num-1)-1)&&j==i){
				cout<<"  "<<(num-1)<<" ";                    
			}else{
				cout<<" "<<(1+j);
			}//else
		}
		for(j=0;j<((num-1)-(i+1))*2;j++){
				cout<<"  ";
		}
		for(j=i;j>=0;j--){
			if(i==((num-1)-1)&&j==((num-1)-1)){
			}else{
				cout<<" "<<(1+j);      
			}
		}//for(j=-1;j<i;j++)&&for(j=(i+1);j>0;j--)
		cout<<endl;
	}//for i  ( 2 )
	return 0;
}//main
