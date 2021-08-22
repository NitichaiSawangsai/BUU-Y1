//*********************************
// Author: <STUDENT_FULLNAME>
// Example define function
//*********************************
using namespace std;
#include <iostream>
#include <cmath>
inline double hypothenuse (double a, double b) {
	return sqrt(a * a + b * b);
}//hypothenuse
int main() {
	double x = 5, y = 7;
		cout << hypothenuse(x, y) << endl;
		cout << sqrt(x * x + y * y) << endl;
	return 0;
}//main
