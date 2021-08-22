//***************************
// <STUDENT_FULLNAME>
// Example string operations
//***************************
#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "string npos = " << string::npos << endl;
	string s = "Hello World!";
	if(s.find('a') == string::npos){
		cout << "no 'a' in 'Hello World!'\n";
	}
	int position = s.find('W');
	if(position != string::npos){
		cout << "Character 'W' in " << s
			<< "is position : " << position << endl;
	}
	// functions that take string subsets as arguments
	// use npos as the "all the way to the end" indicator
	string s2 = s.substr( 2, string::npos);
	cout << s2 << '\n';
}
