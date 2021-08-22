/* 
TASK : HW2_05
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
int main () {
	int  i,j,a,num,cuot=0;
	cin>>num;
	for(i=1;i<=num;i++){
		for(j=num;j>=i;j--){
			if(j>i){
				cout<<"   ";
                           if(j==4){
                              cout<<"";
                           }
			}else{
				for(a=1;a<=j;a++){
					cuot++;
					if(cuot<10){
						cout<<"0"; 
						cout<<cuot<<" ";
					}else{
						cout<<cuot<<" ";
					}
					cuot++;
				}//for a
			}//else
		}//for j
		cout<<endl;
	}//for i
	return 0;
}//main
