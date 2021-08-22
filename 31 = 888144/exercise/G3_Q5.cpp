/* 
TASK : G3_Q5
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
#include <string>
class Student {
	private : 
		string scourse,scourse1,num;
		int unit,unit1;
	public :
		Student() {
			unit=0;
			unit1=0; 
			scourse=" ";
			scourse1=" "; 
			num=" "; 
		}//student
		Student(string n,string s,string s1){
			scourse=s;
			scourse1=s1;
			num=n;

		}
                string getId (string num){
                       return num;
                }
                string getscourse (string scourse){
                       return scourse;
                }
                string getscourse1 (string scourse1){
                       return scourse1;
                }
		void print(){
			unit=scourse.size();
			unit1=scourse1.size();
			cout<<scourse[unit-2];
			cout<<scourse[unit-1];
			cout<<scourse1[unit1-3];
			cout<<scourse1[unit1-2];
			cout<<scourse1[unit1-1];
			cout<<num[0]<<num[1];
		}

};
int main () {
	string scourse,scourse1,num;
	cin>>num;
	cin>>scourse>>scourse1;
	Student aa(num,scourse,scourse1);
	aa.print();
        cout<<endl;
	return 0;
}//main
