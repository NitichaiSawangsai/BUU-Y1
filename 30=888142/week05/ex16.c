 /*Program name: ex16.c
   student: 59160668 Nitichai Sawangsai
   section:04 
 */
#include<stdio.h>
long fibonacci (int fac);
int main(void) {
 int input;
  printf("Please enter the desired value of Fibonacci : ");
  scanf("%d",&input);
  printf("Fibonacci 5 is : %d\n",fibonacci(input));
return 0; 
}//main

long fibonacci (int fac) {
  if (fac == 1) {
  return 1 ;
  }//if(fac == 1)
   if (fac == 0){
   return 0;
   }//if(fac == 0)
     else {
     return fac = fibonacci(fac-1) + fibonacci(fac-2);
     }//else
}//factorial 
