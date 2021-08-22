#ifndef H_employeeType
#define H_employeeType
  
#include "personType.h"
  
class employeeType: public personType
{
public:
    virtual void print() const = 0;

    virtual double calculatePay() const = 0; 

    void setId(long id);

    long getId() const;

    employeeType(string first = "", string last = "", long id = 0);

private:
    long personId;     //stores the id
}; 

#endif
