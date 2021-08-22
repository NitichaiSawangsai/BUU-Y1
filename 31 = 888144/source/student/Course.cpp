#include "Course.h"

Course::Course()
{

}

Course::Course(string n, int c, double g)
{
    name = n;
    credit = c;
    grade = g;
}
void Course::setCourse(string n, int c, double g)
{
    name = n;
    credit = c;
    grade = g;
}

void Course::print()
{
    cout <<  name << " \t " << credit  << "\t" <<  grade<<  endl;
}

int Course::getCredit()
{
   return credit;
}

double Course::getGrade()
{
    return grade;
}


