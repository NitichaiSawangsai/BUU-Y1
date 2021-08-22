/* Program name : ex11.c
   Student : 59160668 
   Nitichai Sawangsai
   Section : 04 
*/  
#include<stdio.h>
//Function Declarations
int sqr(int x);
int main () { 
system("clear");
 //Local Declaration
  int a;
  int b;
   //Statements
    printf(" Number  Enter : ");
    scanf("%d",&a);
    b = spr(a);
    printf("%d squared : %d\n\n",a,b);
return 0;
}//main
int spr(int x) {
 // statements
return (x*x);
}// sqr function
