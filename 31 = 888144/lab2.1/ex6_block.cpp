//***********************************
// Author: <STUDENT_FULLNAME>
// Example block of statement
//***********************************
using namespace std;
#include <iostream>
int main() {
	double a;							 // Line 9
	cout << "Enter double number "; 				 // Line 10
	 cin >> a; 							 // Line 11
	cout << "Line 12: Your variable a = " << a << endl; 		 // Line 12
	{ 								 // Line 13
		int a = 10; 						 // Line 14
			cout << "Line 15: Local a = " << a << endl; 	 // Line 15
	}	 							 // Line 16
	cout << "Line 17: Your variable a = " << a << endl;		 // Line 17
	{  								 // Line 18
		cout << "Line 19: Local second block a = " << a << endl; // Line 19
	} 								 // Line 20
}//main
