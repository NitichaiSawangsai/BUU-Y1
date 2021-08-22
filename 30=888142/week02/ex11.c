/*Program name: ex11.c 
student: 59160668 Nitichai Sawangsai
section: 04
 */ 
#include<stdio.h>
int main(){
	char CHAR;
	int INT;
	float FLOAT;
	printf("Input1 Char : ");     
	scanf("%c",&CHAR);
	printf("Input2 Int : ");
	scanf("%d",&INT);
	printf("Input3 Float : ");
	scanf("%f",&FLOAT);


	printf("Result input1 : %c input2 : %d Input3 : %5.2f \n",CHAR,INT,FLOAT);
	printf("Result input1 : %c input2 : %c Input3 : %c    \n",CHAR,INT,FLOAT);
	printf("Result input1 : %d input2 : %d Input3 : %d    \n",CHAR,INT,FLOAT);
	printf("******Bye Bye **** \n");

	return 0;
}//main   
