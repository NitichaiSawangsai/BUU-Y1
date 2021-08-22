#include <iostream>
#include "ArrayList.h"
using namespace std;



int main()
{
	ArrayList list;

	cout << "Input your number : ";
	int number;
	for (int i = 0; i < 10; i++){
		cin >> number;
		list.insert(number);
	}
	
	cout << "==== Print List ====" << endl;
	list.print();

	cout << "Try to Input number to list : ";
	cin >> number;
	list.insert(number);


	cout << "Try to search you number in list : ";
	cin >> number;
	int pos = list.search(number);
	if (pos == -1)
	{
		cout << "Item not in list" << endl;
	}
	else{
		cout << "Item "<< number << " at [ " << pos << " ]" << endl;
	}

	cout << "Try to remove : " ;
	cin >> number;
	cout << "==== Print List ====" << endl;
	list.remove(number);
	list.print();



	return 0;
}
