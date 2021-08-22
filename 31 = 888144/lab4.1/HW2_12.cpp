/* 
TASK : HW2_12
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
#include <string>

int main () {
	string ch;
	getline(cin,ch);
	while(ch.find("dog") != -1) { 
		ch.replace(ch.find("dog"),3,"cat");
	}// while ch.find("dog") != -1
	cout<<ch<<endl;
	return 0;
}//main
