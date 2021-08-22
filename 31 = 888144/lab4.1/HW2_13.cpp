/* 
TASK : HW2_13
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
#include <string>

int main () {
	int i,j=0;
	string ch;
	getline(cin,ch);
	j=ch.size();
	for(i=(j-1);i>=0;i--){
		cout<<ch[i];
	}
	cout<<endl;
	return 0;
}//main
