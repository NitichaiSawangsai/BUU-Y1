// ***************************
// < STUDENT_FULLNAME >
// Program: Large of numbers
// ***************************
using namespace std;
#include<iostream>
double larger (double x,double y);
double compareThree (double x,double y,double z);
int main () {
	double one,two; //Line 1
	cout<<" Line 2: The larger of 5 and 10 is "<<larger(5,10)
		<<endl; //Line 2
	cout<<" Line 3: Enter two numbers: "; //Line3
	cin>>one>>two; //Line 4
	cout<<" Line 5: The larger of "<<one
		<<" and "<<two
		<<" is "<<larger(one,two)
		<<endl; //Line 5
	cout<<" Line 7: The larger of 42.48 , 34.00 " //Line 6
		<<"and 12.65 is "<<compareThree(43.48,34.00,12.65)
		<<endl; //Line 7
	return 0;
}//mian
double larger (double x,double y) {
	double max;
	if(x>=y)
		max=x;
	else 
		max=y;
	return max;
}// larger
double compareThree (double x,double y,double z) {
	return larger(x,larger(y,z));
}//compareThree

