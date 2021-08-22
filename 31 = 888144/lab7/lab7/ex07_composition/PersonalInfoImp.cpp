#include <iostream>
#include <string>
#include "PersonalInfo.h"
   
using namespace std;

void PersonalInfo::setpersonalInfo(string first, string last, int day, int month, int year, int ID)
{
    name.setName(first, last);
    bDay.setDate(day, month, year);
    personID = ID;
}

void PersonalInfo::printpersonalInfo() const
{
    name.print();
    cout << "'s date of birth is ";
    bDay.printDate();
    cout << endl;
    cout << "and personal ID is " << personID;
}

PersonalInfo::PersonalInfo(string first, string last, int day, int month, int year, int ID)
         : name(first, last), bDay(day, month, year)
{
    personID = ID;
}
