#include <iostream>
#include "allClass.h"

using namespace std;

void OneClass::print()
{
	cout << "One Class, a = " << a << endl;
}

OneClass::OneClass()
{
	a = 10;
}
