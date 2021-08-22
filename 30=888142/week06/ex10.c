/* Program name : ex10.c
   Student : 59160668 
   Nitichai Sawangsai
   Section : 04 
*/  
#include<stdio.h>
int firstDigit(int num); //Function Declarations
int main (int argc,char*argv[]) {
system("clear");
  int number,digit;
   printf("Enter an integer : ");
   scanf("%d",&number);
   digit=firstDigit(number);
   printf("\nLeast significant digit is : %d\n",digit);
return 0;
}//main
int firstDigit (int num) {
   //Statements
return (num % 10);
}//firstDigit
   
