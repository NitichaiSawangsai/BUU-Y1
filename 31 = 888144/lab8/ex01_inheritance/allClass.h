#include <iostream>

class OneClass
{
private:
	int a;
public:
	void print();
	OneClass();
};

class TwoClass: public OneClass
{
};
