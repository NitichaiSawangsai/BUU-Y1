#include "Student.h"

Student::Student()
{
  id = "";
  name = "";
}

Student::Student(string pid, string pname)
{
    id = pid;
    name = pname;
}

Student::Student(string pid, string pname,  int d, int m, int y): birthday(d, m, y)
{
    id = pid;
    name = pname;
}

void Student::setStudent(string pid, string pname)
{
    id = pid;
    name = pname;
}

void Student::print()
{
   cout << id << " " << name << " has birthday " << birthday.getDate()<<  endl;
   cout << "Course name " << " \t " << "Credit" << " \t " << "Grade "<< endl;
   for(int i = 0; i < 3; i++)
   {
      myCourse[i].print();
   }
   cout << "GPA : " << calGPA() << endl;
}


void Student::setBirthDay(int d, int m, int y)
{
    birthday.setDate(d, m, y);
}


void Student::setCourse(Course c, int index)
{
    myCourse[index] = c;
}

double  Student::calGPA()
{
    int sumCredit = 0;
    double sumGrade = 0;
    for(int i = 0 ; i < 3; i++)
    {
        sumCredit += myCourse[i].getCredit();
        sumGrade += myCourse[i].getCredit() * myCourse[i].getGrade();
    }
    return sumGrade/sumCredit;
}
