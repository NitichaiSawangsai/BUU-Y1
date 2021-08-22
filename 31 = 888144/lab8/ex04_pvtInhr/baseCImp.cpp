#include <iostream>
#include "baseC.h"
   
using namespace std;

void BaseClass::one()
{ 
    cout << "In base class One" << endl;
}

void BaseClass::two()
{
    cout << "In base Class private two" << endl;
}

void DerivedClass::three()
{
    BaseClass::one();
    cout << "In derived class three" << endl;
    BaseClass::two();

    cout << endl;
    cout << endl;
    four();

    x = 10; // public member ofthe base class
    y = 20; // protected member of the base class

    cout << "In derived class after setting x = " << x
         << " y = " << y << endl;
}

void DerivedClass::four()
{
    one(); // public member ofthe base class
    cout << "In derived class four" << endl;
    two(); // protected member of the base class
}
