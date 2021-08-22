/* 
TASK : HW2_09
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
#include <string>
int main () {
        char num[30];
        cin>>num;
        string scourse,scourse1;
        int unit,unit1;
        cin>>scourse>>scourse1;
        unit=scourse.size();
        unit1=scourse1.size();
                cout<<num[0]<<num[1];
		cout<<scourse[unit-2];
		cout<<scourse[unit-1];
		cout<<scourse1[unit1-3];
		cout<<scourse1[unit1-2];
		cout<<scourse1[unit1-1];
	cout<<endl;
return 0;
}//main
