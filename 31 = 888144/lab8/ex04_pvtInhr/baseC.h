class BaseClass 
{
public:
    void one();
    int x;

protected:
    void two();
    int y;

private:
    int a;
};

class DerivedClass : private BaseClass
{
public:
    void three();

protected:
    void four();

private:
    int b;
};
