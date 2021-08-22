#include <iostream>
#include "PersonalInfo.h"
  
using namespace std; 
 
int main()
{
    PersonalInfo newStudent("William", "Jordan", 24, 8, 1977, 555238911);

    newStudent.printpersonalInfo();

    cout << endl;

    return 0;
}
                     
