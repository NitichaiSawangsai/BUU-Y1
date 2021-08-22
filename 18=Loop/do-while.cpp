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
        int num1=0,num2=0;     
        do{
           cout<<"Input : ";
           cin>>num1;
           if(num1<0||num1>4){
               cout<<"+++ No meue +++ "<<endl;
           }
        }while(num1>0 && num1>4);

	return 0;
}//main
