#include <iostream>
#include "Student.h"
#include "UnderGraduate.h"

using namespace std;

 UnderGraduate::UnderGraduate(){
                     level=0;
                  }
                   UnderGraduate::UnderGraduate(int LEVEL,string f,string l,string id) : Student(f,l,id) {
                    if(LEVEL>0&&LEVEL<5){
                     level=LEVEL;
                    }
                  }
                  void  UnderGraduate::print(){
                    cout<<"--------------------------"<<endl;
                    cout<<"Level : "<<level<<endl; 
                    Student::print();
                    cout<<"--------------------------"<<endl;
                  }

