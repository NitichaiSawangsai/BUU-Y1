#include <iostream>
#include <string>
#include "Date.h"
#include "Course.h"
using namespace std;

#ifndef Student_Class
#define Student_Class

class Student{
    private:
      string id;
      string name;
      Date birthday;
      Course myCourse[3];

    public:
      Student();
      Student(string pid, string pname);
      Student(string pid, string pname, int d, int m, int y);
      void setBirthDay(int d, int m, int y);
      void setStudent(string pid, string pname);
      void setCourse(Course c, int index);
      void print();
      double calGPA();
};

#endif
