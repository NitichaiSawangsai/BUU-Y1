#include <iostream>
#include "Person.h"

using namespace std;

Person::Person (){
	fName=" ";lName=" ";
}
Person::Person (string f,string l){
	fName=f; lName=l;   
}
void Person::setfName(string f){
	fName=f;
}
string Person::getfName (){
	return fName;	       
}
void Person::setlName(string l){
	lName=l;
}
string Person::getlName (){
	return  lName ;  
}
void Person::print(){
	cout<<"Name : "<<fName<<"  "<<lName<<endl;
}
