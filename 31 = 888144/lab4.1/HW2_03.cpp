/* 
TASK : HW2_03
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
int main () {
	int num,sum_10,sum_5,sum_2,sum_1;
         cin>>num;
         sum_10=num/10;
         cout<<sum_10<<endl;
         sum_5=(num-(sum_10*10))/5;
         cout<<sum_5<<endl;
         sum_2=(num-((sum_10*10)+sum_5*5))/2; 
         cout<<sum_2<<endl;
         sum_1=(num-((sum_10*10)+(sum_5*5)+(sum_2*2)));
         cout<<sum_1<<endl;
	return 0;
}//main
