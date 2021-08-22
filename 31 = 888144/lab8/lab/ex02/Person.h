#ifndef Person_H
#define Person_H
#include <iostream>
#include <string>

using namespace std;

class Person {
	protected :
	private :
		string fName,lName;
	public    :
		Person ();
		Person (string f,string l);
		void setfName(string f);
		string getfName ();
		void setlName(string l);
		string getlName ();
		void print();
};
#endif
