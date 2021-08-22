#include <string>
 
using namespace std;

class PersonType
{
public:
    void print() const;
  
    void setName(string first, string last);

    string getFirstName() const;

    string getLastName() const;

    PersonType(string first = "", string last = "");

 private:
    string firstName; //variable to store the first name
    string lastName;  //variable to store the last name
};
