#include "stdio.h"
#include "stdlib.h"
//#include "conio.h"
#include "time.h"
 
 
int main(){
	srand(time(NULL));
 
	int randomNumber1 = rand() % 10; //0-10
	int randomNumber2 = rand() % 10; //0-10
	int randomNumber3 = 50+(rand()%(10-50)); //50-200
 
	printf("Random number1 is %d\n", randomNumber1);
	printf("Random number2 is %d\n", randomNumber2);
	printf("Random number3 is %d\n", randomNumber3);
//	getch();
}
 
