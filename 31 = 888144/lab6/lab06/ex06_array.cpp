#include <iostream>
using namespace std;

void printArray(int list[], int listSize);
int sumArray(const int list[], int listSize);
void sortArray(int list[], int listSize);
void copyArray(int list1[], int src, int list2[], int tar, int numOfElements);


int main()
{
	int listSize = 10;
	int listA[10] = { 4, 1, 5, 7, 2, 8, 1, 9, 2, 10 };
	int listB[10] = { 3, 5, 6, 2, 5, 7, 1, 0, 4, 3 };

	cout << "====== list A ======" << endl;
	printArray(listA,listSize);
	cout << "====== list B ======" << endl;
	printArray(listB, listSize);
	
	int sumA = sumArray(listA, listSize);
	cout << "SUM List A = " << sumArray(listA, listSize);
	cout << endl;

	sortArray(listA, listSize);
	cout << "====== list A ======" << endl;
	printArray(listA, listSize);
	cout << "====== list B ======" << endl;
	printArray(listB, listSize);

	copyArray(listB, 3, listA , 3, 5);

	cout << "====== list A ======" << endl;
	printArray(listA, listSize);
	cout << "====== list B ======" << endl;
	printArray(listB, listSize);
	return 0;
}

void printArray(int list[], int listSize)
{
	for (int i = 0; i < listSize; i++)
	{
		cout << list[i] << " ";
	}
	cout << endl;
}

int sumArray(const int list[], int listSize)
{
	int index;
	int sum = 0;

	for (index = 0; index < listSize; index++)
		sum = sum + list[index];

	return sum;
}

void sortArray(int list[], int listSize)
{
	for (int i = 0; i < listSize; i++){
		for (int j = i + 1; j < listSize; j++)
		{
			if (list[i] > list[j])
			{
				int temp = list[j];
				list[j] = list[i];
				list[i] = temp;
			}
		}
	}
}

void copyArray(int list1[], int src, int list2[], int tar, int numOfElements)
{
	for (int index = src; index < src + numOfElements; index++)
	{
		list2[index] = list1[tar];
		tar++;
	}
}