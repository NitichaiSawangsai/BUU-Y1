//***********************************
// Author: <STUDENT_FULLNAME>
// Example 2 - Variable
//***********************************
using namespace std;
#include <iostream>
int main() {
//		out << "Example 2 start" << endl;
	int a, b, c, d; 	// Variables a, b and c is an integer.
	double e, f;  		// Variables e and f is double.
	char s, t; 		// Variables s and t is character.
		a = 10;
		b = 20.2;
		c = -3;
		d = a / 3.0;
		cout << "A = " << a << " , " << "B = " << b << " , ";
		cout << "C = " << c << " , " << "D = " << d << endl;
		cout << "A + C = " << a + c << endl;
		e = 10.4;
		f = a / 3.0;
		cout << "E = " << e << " , " << "F = " << f << endl;
		s = 'A';
		t = 66;
		cout << "S = " << s << " , " << "T = " << t << endl;
		cout << "(int)S = " << (int)s << ", "<< "(int)T = " << (int) t << endl;
	return 0;
}//main
