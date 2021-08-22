#ifndef H_protectMembInDerivedCl
#define H_protectMembInDerivedCl

#include "protectMemb.h" 

class DClass: public BClass
{
public:
    void setData(char, double, int);
    void print() const;

    DClass(char ch = '*', double u = 0.0, int x = 0);

private:
    int dA;
}; 

#endif
