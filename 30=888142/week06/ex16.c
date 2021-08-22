/* Program name : ex16.c
   Student : 59160668 
   Nitichai Sawangsai
   Section : 04 
*/  
#include<stdio.h>
int factorial (int num);
int main (void) { 
  int a;
printf("Please enter the Factorial : ");
scanf("%d",&a);
printf("Factorial  is : %d\n",factorial(a));
 return 0;
}//main
 int factorial(int num) {
   if ( num==0 || num==1) {
     return 1;
    }//if( num==0 || num==1)
       else {
         return num * factorial(num-1);
        }//else
}//factorial 
