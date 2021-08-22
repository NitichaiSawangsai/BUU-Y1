/* Program name : ex14.c
   Student : 59160668 
   Nitichai Sawangsai
   Section : 04 
*/  
#include<stdio.h>
int getData (void);
int add      (int a, int b);
int delete   (int a, int b);
int multiply (int a, int b);
int Raised   (int a, int b);
void printRes      (int a,int b, int sum);
void printdelete   (int a,int b, int sum1);
void printmultiply (int a,int b, int sum2);
void printRaised   (int a,int b, int sum3);
int main (void) { 
  int a,b,sum=0,sum1=0,sum2=0,sum3=0;
    a = getData();
    b = getData();

    sum = add(a,b);
    printRes (a,b,sum);

    sum1 = delete(a,b);
    printdelete (a,b,sum1);

    sum2 = multiply(a,b);
    printmultiply (a,b,sum2);

    sum3 = Raised(a,b);
    printRaised (a,b,sum3);
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
int delete (int a,int b) {
    int sum1;
      sum1=a-b;
  return sum1;
   }//delete 
int multiply (int a,int b) {
    int sum2;
      sum2=a*b;
   return sum2;
   }//multiply
int Raised (int a,int b) {
    int sum3;
      sum3=a*a;
   return sum3;
   }//Raised

 void printRes (int a, int b, int sum) {
    printf("%4d + %d = %4d\n",a,b,sum);
 return;
 }//printRes
 void printdelete (int a, int b, int sum1) {
      printf("%4d - %d = %4d\n",a,b,sum1);
   return;
   }//printdelete 
 void printmultiply (int a, int b, int sum2) {
      printf("%4d * %d = %4d\n",a,b,sum2);
   return;
   }//printmultiply
 void printRaised (int a, int b, int sum3) {
      printf("%4d ^ %d = %4d\n",a,a,sum3);
   return;
   }//printRaised 
