#include <iostream>
#include "protectMemb.h"
  
using namespace std;

void BClass::setData(double u)
{
    bX = u; 
}
void BClass::setData(char ch, double u)
{
    bCh = ch;
    bX = u;
}

void BClass::print() const
{
    cout << "Base class: bCh = " << bCh << ", bX = " << bX << endl;
}

BClass::BClass(char ch, double u)
{
    bCh = ch;
    bX = u;
}
