/* Program name : ex12.c
   Student : 59160668 
   Nitichai Sawangsai
   Section : 04 
*/  
#include<stdio.h>
int getData (void);
int add (int a, int b);
void printRes (int a,int b, int sum);
int main (void) { 
  int a,b,sum=0;
    a = getData();
    b = getData();

    sum = add(a,b);

    printRes(a,b,sum);
return 0;
}//main
 int getData() {
   int x;
    printf("Please enter two integer numbers : ");
    scanf("%d",&x);
 return x;
 }//getData
 int add (int a,int b) {
  int sum;
    sum=a+b;
 return sum;
 }//add
 void printRes (int a, int b, int sum) {
    printf("%4d + %4d = %4d\n",a,b,sum);
 return;
 }//printRes
