#include <iostream>
#include <sstream>
using namespace std;

#ifndef Date_Class
#define Date_Class
class Date
{
   int day;
   int month;
   int year;
   public:
     Date();
     Date(int d, int m, int y);
     void setDate(int d, int m, int y);
     void print();
     string getDate();
};

#endif
