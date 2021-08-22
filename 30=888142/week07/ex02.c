/* Program name : ex02.c
   Student : 59160668 
   Nitichai Sawangsai
   Section : 04 
*/
  
#include<stdio.h>
int main (int argc,char*argv[])  {
  int age[5];
  int i;
  int sumage=0;

 /* lnput Array */
 for(i=0;i<5;i++) {
   printf("Enter age[%d]",i); 
   scanf("%d",&age[i]);
  }//for 
 /* Process */
sumage = age[0] + age[1] + age[2] + age[3] + age[4];
 /* Output */
  printf("Sum =%d\n",sumage);
return 0;
} // main
