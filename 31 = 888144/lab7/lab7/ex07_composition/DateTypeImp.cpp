#include <iostream>
#include "DateType.h"

using namespace std;

void DateType::setDate(int day, int month, int year)
{
    dDay = day;
    dMonth = month;
    dYear = year;
}

int DateType::getDay() const 
{
    return dDay;
}

int DateType::getMonth() const 
{
    return dMonth;
}

int DateType::getYear() const 
{
    return dYear;
}

void DateType::printDate() const
{
    cout << dDay << "/" << dMonth << "/" << dYear;
}

//Constructor with parameters
DateType::DateType(int day, int month, int year) 
{ 
    dDay = day;
    dMonth = month;
    dYear = year;
}
