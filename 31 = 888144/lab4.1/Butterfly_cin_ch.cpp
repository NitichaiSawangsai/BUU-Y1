#include <iostream>
using namespace std;
int main(){
	char ch;        //input number
	int i;            //outer loop index
	int j;            //inner loop index
	int numLines;    //number of lines to print
	cout<<"Please enter a small letter: ";
	cin>>ch;
//	numLines = ch - 'a';
	numLines = 5 - 1;
	for( i = 0; i <= numLines; i++)        //the first series of loops for the
	{                                    //increment part of triangles
		for( j = 0; j <= i; j++)                //print the first part of letters
			cout<<(char)('a' + j);
		for( j = 0; j < 2*(numLines - i); j++)    //print the part of spaces
			cout <<"-";
		for( j = i; j >= 0; j--)                //print the second part of letters
			cout << (char)('a' + j);
		cout<<endl;                                //print newline at the end of each line
	}

	for( i = numLines - 1; i >= 0; i--)    //the second series of loops for the
	{                                    //decrement part of triangles
		for( j = 0; j <= i; j++)                //print the first part of letters
			cout<<(char)('a' + j);
		for( j = 0; j < 2*(numLines - i); j++)    //print the part of spaces
			cout <<"-";
		for( j = i; j >= 0; j--)                //print the second part of letters
			cout << (char)('a' + j);
		cout<<endl;                                //print newline at the end of each line
	}


}
