#include <iostream>
#include "protectMemb.h"
#include "protectMembDerived.h"
   
using namespace std; 

void DClass::setData(char ch, double v, int a)
{
    BClass::setData(v);

    bCh = ch; //initialize bCh using the assignment statement
    dA = a;
}

void DClass::print() const
{
    BClass::print();

    cout << "Derived class dA = " << dA << endl;
}

DClass::DClass(char ch, double u, int x): BClass(ch, u)
{
    dA = x;
}
