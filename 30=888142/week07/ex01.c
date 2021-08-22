/* Program name : ex01.c
   Student : 59160668 
   Nitichai Sawangsai
   Section : 04 
*/
  
#include<stdio.h>
int main (int argc,char*argv[])  {
  int age0,age1,age2,age3,age4,sumage;
/* input */
   printf("Enter age[0]\n");
    scanf("%d",&age0);
   printf("Enter age[1]\n");
    scanf("%d",&age1);
   printf("Enter age[2]\n");
    scanf("%d",&age2);
   printf("Enter age[3]\n");
    scanf("%d",&age3);
   printf("Enter age[4]\n");
    scanf("%d",&age4);
/* Process */
 sumage = age0 + age1 + age2 + age3 + age4;
/* Output */
 printf("Sum = %d\n",sumage); 
return 0;
} // main
