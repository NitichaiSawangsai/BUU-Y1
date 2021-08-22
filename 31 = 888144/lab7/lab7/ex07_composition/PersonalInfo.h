#ifndef personalInfo_H
#define personalInfo_H

#include <string>
#include "PersonType.h"
#include "DateType.h"

using namespace std;

class PersonalInfo
{
public:
    void setpersonalInfo(string first, string last, int day, int month, int year, int ID);
 
    void printpersonalInfo () const;
      
    PersonalInfo(string first = "", string last = "", int day = 1, int month = 1, int year = 1900, int ID = 0);

private:
    PersonType name;
    DateType bDay;
    int personID;
};
#endif
