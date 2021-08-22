//***************************************
// Author: <STUDENT_FULLNAME>
// Example variable in loop statement
//***************************************
using namespace std;
#include <iostream>
int main() {
	int i; 								// Simple declare variable a
		i = 234; 						// Set value.
		for (int i=0; i<5; i++) {
			cout << "Loop variable i = " << i << endl; 	// Display loop variable
		}
		cout << "Main variable i = " << i << endl; 		// Display main variable
	return 0;
}//main
