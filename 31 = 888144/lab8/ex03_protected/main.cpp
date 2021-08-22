#include <iostream>
#include "protectMemb.h"
#include "protectMembDerived.h"

using namespace std;

int main() 
{
    BClass bObject;                                 //Line 1

    DClass dObject;                                 //Line 2

    bObject.print();                                //Line 3
    cout << endl;                                   //Line 4

    cout << "*** Derived class object ***" << endl; //Line 5

    dObject.setData('&', 2.5, 7);                   //Line 6

    dObject.print();                                //Line 7

    return 0;
}
