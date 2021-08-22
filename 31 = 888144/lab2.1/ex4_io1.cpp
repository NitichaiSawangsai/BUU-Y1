//***********************************
// Author: <STUDENT_FULLNAME>
// Example I/O Stream 1
//***********************************
using namespace std;
#include <iostream>
int main() {
		cout << "Start example 4" << endl
  		      <<"Welcome to I/O example" << endl;
	int hours = 14;
	double rate = 80.25;
		cout << " Line 13-14: hours = " << hours
	  	      <<" , rate = " << rate; 			// Line 13
		cout << " , pay = " << hours * rate
	 	      << endl << endl; 				// Line 14
		cout << "Line 15: Enter hours and rate "; 	// Line 15
		cin  >> hours >> rate; 				// Line 16
		cout << "Line 17-18: hours = " << hours
	       	      <<" , rate = " << rate; 			// Line 17
		cout << " , pay = " << hours * rate
		      << endl << endl; 				// Line 18
	return 0;
}//main
