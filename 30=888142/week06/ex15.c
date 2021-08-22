/* Program name : ex15.c
   Student : 59160668 
   Nitichai Sawangsai
   Section : 04 
*/  
#include<stdio.h>
int Data (void);
int multiply (int a, int b);
void printmultiply (int a,int b, int sum);
int main (void) { 
  int a,b,sum=0;
    a = Data();
    b = Data();

    sum = multiply(a,b);
    printmultiply (a,b,sum);


return 0;
}//main
 int Data() {
   int x;
    printf("Please enter two integer numbers : ");
    scanf("%d",&x);
 return x;
 }//Data
int multiply (int a,int b) {
    int sum;
      sum=a*b;
   return sum;
   }//multiply
 void printmultiply (int a, int b, int sum) {
      printf(" Multiplicand = %d\n",a);
      printf(" Multiplier = %d\n",b);
      printf(" Result = %d\n",sum);
   return;
   }//printmultiply
