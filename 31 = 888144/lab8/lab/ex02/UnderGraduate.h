#ifndef UnderGraduate_H
#define UnderGraduate_H
#include"Student.h"

class UnderGraduate : public Student {
	protected :
	private   :
                  int level; 
	public    :
                  UnderGraduate();
                  UnderGraduate(int LEVEL,string f,string l,string id);
                  void print();
};

#endif
