/* 
TASK : LAB2_07
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
#include <string.h>
#include <iomanip>
struct student {
	char subjects[60];
	float credit;
	float grader;
};

int main () {
	int i,num;
	float sum_credit=0,sum_grader=0,sum=0;
	cin>>num;
	struct student nisit[num];
	for(i=0;i<num;i++) {
		cin>>nisit[i].subjects;
		cin>>nisit[i].credit;
		cin>>nisit[i].grader;
	}//for i
	for(i=0;i<num;i++){
		sum_credit=sum_credit+(nisit[i].credit * nisit[i].grader);
		sum_grader+=nisit[i].credit;
	}//for i
	sum=sum_credit/sum_grader;
	cout<<fixed<<setprecision(2)<<sum<<endl;
	return 0;
}//main 
