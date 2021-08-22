/* Program name : ex13.c
   Student : 59160668 
   Nitichai Sawangsai
   Section : 04 
*/  
#include<stdio.h>
//Function Declaration
void upFun(int*ax,int*ay);
int main (void) { 
//Local Declarations
  int a=10;
  int b=20;
//statements
    printf("Result1 : %d, %d\n",a,b);
    upFun(&a,&b);
    printf("Result2 : %d, %d\n",a,b);
return 0;
}//main
 void upFun(int*ax,int*ay) {
 //Statements
   *ax=23;
   *ay=8;
 return ;
 }//upFun 
