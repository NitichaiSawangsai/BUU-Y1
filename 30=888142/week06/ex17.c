/* Program name : ex17.c
   Student : 59160668 
   Nitichai Sawangsai
   Section : 04 
*/  
#include<stdio.h>
long fibonacci (int fac);
int main (int argc,char*argvp[]) { 
  int a;
printf("Please enter the Fibonacci : ");
scanf("%d",&a);
printf("Fibonacci is : %d\n",fibonacci(a));
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
