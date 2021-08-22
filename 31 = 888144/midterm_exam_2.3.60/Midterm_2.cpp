/* 
TASK : 02.1
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
#include <string>
int main () {
        int ch1[10],ch2[10],ch3[10],sum1=0,sum2=0,sum3=0;
        int i;
        for(i=0;i<10;i++){
           cin>>ch1[i];
        }
        for(i=0;i<10;i++){
           cin>>ch2[i];
        }
        for(i=0;i<10;i++){
           cin>>ch3[i];
        }
        for(i=0;i<10;i++){
            sum1+=ch1[i];
        }
        for(i=0;i<10;i++){
            sum2+=ch2[i];
        }
        for(i=0;i<10;i++){
            sum3+=ch3[i];
        }
        if(sum2<sum3 && sum1<sum3){
           cout<<"CAB"<<endl;
        }
        if(sum1>sum2 && sum1>sum3 && sum2>sum3){
           cout<<"ABC"<<endl;
        }
        if(sum1==sum2 && sum1==sum3 && sum2==sum3 && sum2==sum1 && sum3==sum1 && sum2==sum3){
           cout<<"ABC"<<endl;
        }
        
	return 0;
}//main
