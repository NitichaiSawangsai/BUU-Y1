#include <iostream>
#include <string>
using namespace std;

#ifndef Course_Class
#define Course_Class
class Course
{
   private:
      string name;
      int credit;
      double grade;
   public:
      Course();
      Course(string n, int c, double g);
      void setCourse(string n, int c, double g);
      void print();
      int getCredit();
      double getGrade();
};

#endif
