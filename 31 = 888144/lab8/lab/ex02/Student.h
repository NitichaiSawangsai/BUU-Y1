#ifndef Student_H
#define Student_H
#include"Person.h"

class Student : public Person {
	protected :
	private   :
		string Id;
	public    :
		Student();
		Student(string f,string l,string id);
		void setId(string id);
		string getId();
		bool checkEqual(string Idd);
		void print();
};

#endif
