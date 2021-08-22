//******************************
// < STUDENT_FULLNAME >
// Program: overload function
//******************************
#include <iostream>
void print(int i);
void print(double f);
void print(char* c) ;
using namespace std;
int main()
{
	int int_number_1 = 30;
	double double_number_1 = -12.3;
	char ch = 'A';
	print(int_number_1);
	print(double_number_1);
	print(ch);
	return 0;
}
void print(int i) {
	cout << "Printing int: " << i << endl;
}
void print(double f) {
	cout << "Printing float: " << f << endl;
}
void print(char* c) {
	cout << "Printing character: " << c << endl;
}

