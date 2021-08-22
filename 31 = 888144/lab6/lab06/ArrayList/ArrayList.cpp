#include <iostream>
#include "ArrayList.h"

using namespace std;

bool ArrayList::isEmptyList() const
{
	return (length == 0);
}

bool ArrayList::isFullList() const
{
	return (length == maxSize);
}

void ArrayList::insert(int insertItem)
{
	
}

void ArrayList::remove(int removeItem)
{
	
}

int ArrayList::search(int searchItem) const{
	int pos = -1;
	
	return pos;
}

void ArrayList::print() const
{
	for (int i = 0; i < length; i++)
	{
		cout << list[i] << " ";
	}
	cout << endl;
}

ArrayList::ArrayList()
{
	for (int i = 0; i < 10; i++)
	{
		list[i] = 0;
	}
	length = 0;
	maxSize = 10;
}


ArrayList::~ArrayList()
{
}
