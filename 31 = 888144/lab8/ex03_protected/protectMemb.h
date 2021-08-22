#ifndef H_protectMembClass
#define H_protectMembClass

class BClass 
{
public:
    void setData(double);
    void setData(char, double);
    void print() const;

    BClass(char ch = '*', double u = 0.0); 

protected:
    char bCh;

private:
    double bX;
};

#endif

