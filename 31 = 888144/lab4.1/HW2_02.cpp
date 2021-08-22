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
	int  i,j,num;
	cin>>num;
	for(i=0;i<=(num-1);i++){
		for(j=-1;j<i;j++){
			cout<<"A";
                }for(j=0;j<2*((num-1)-i);j++){
			cout<<"-";
                }for(j=i;j>-1;j--){
			cout<<"A";
                }// for(j=-1;j<i;j++)&&for(j=i;j>-1;j--)
		cout<<endl;	
	}//for i  ( 1 )
        for(i=((num-1)-1);i>-1;i--) {
              for(j=-1;j<i;j++){
                 cout<<"A";
              }for(j=0;j<2*((num-1)-i);j++){
                  cout<<"-";
              }for(j=(i+1);j>0;j--){
                cout<<"A";
              }//for(j=-1;j<i;j++)&&for(j=(i+1);j>0;j--)
            cout<<endl;
        }//for i  ( 2 )
	return 0;
}//main
