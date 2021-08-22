/* 
TASK : if-else
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
int main () {
	int  i,j,a,num1,num2;
	cin>>num1>>num2;
	if(num1>num2){
		for(i=num2;i<=num1;i++){
		 	if((i%3)==0){
				cout<<"* ";
			}else{
                        cout<<i<<" ";
			}
		}//for i
	}else if (num1<num2){
		for(i=num1;i<=num2;i++){
		 	if((i%3)==0){
				cout<<"* ";
			}else{
                        cout<<i<<" ";
			}
		}//for i
        }
        cout<<endl;
	return 0;
}//main
