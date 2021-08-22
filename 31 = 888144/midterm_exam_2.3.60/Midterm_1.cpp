/* 
TASK : 02.1
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
#include <cmath>
int main () {
          float num[100],t,sum=0; 
          cin>>t;
          for(int i=0;i<t;i++){
              cin>>num[i];
          }
          for(int i=0;i<t;i++){
              num[i]=num[i]/7;
          }
          for(int i=0;i<t;i++){
              sum+=num[i];
          }
         //  sum=sum*2;
           sum=ceil(sum*2);
          cout<<sum<<endl;
          
	return 0;
}//main
