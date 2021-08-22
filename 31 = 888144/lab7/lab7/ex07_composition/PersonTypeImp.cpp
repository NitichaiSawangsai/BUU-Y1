#include <iostream>
#include <string>
#include "PersonType.h"
 
using namespace std;

void PersonType::print() const
{
    cout << firstName << " " << lastName;
}

void PersonType::setName(string first, string last)
{
    firstName = first;
    lastName = last;
}

string PersonType::getFirstName() const
{
    return firstName;
}

string PersonType::getLastName() const
{
    return lastName;
}

	//constructor
PersonType::PersonType(string first, string last) 

{ 
    firstName = first;
    lastName = last;
}
