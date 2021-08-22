//personType.h
#ifndef H_personType
#define H_personType
  
#include <string>
   
using namespace std;

class personType
{
public:
    void print() const;
  
    void setName(string first, string last);

    string getFirstName() const;

    string getLastName() const;

    personType(string first = "", string last = "");

 private:
    string firstName; //variable to store the first name
    string lastName;  //variable to store the last name
};

#endif
