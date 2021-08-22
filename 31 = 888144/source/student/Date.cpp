#include "Date.h"

Date::Date()
{
  day = 0;
  month = 0;
  year = 0;
}

Date::Date(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}
void Date::setDate(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}

void Date::print()
{
   cout << day << "/" << month << "/" << year << endl;
}

string Date::getDate()
{
   stringstream dd, mm, yy;
   dd << day;
   mm << month;
   yy << year;
   return dd.str() + "/" + mm.str() +  "/" + yy.str();   
}

