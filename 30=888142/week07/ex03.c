/* Program name : ex03.c
   Student : 59160668 
   Nitichai Sawangsai
   Section : 04 
*/
  
#include<stdio.h>
int main (int argc,char*argv[])  {
  int vec01[5],vec02[5],vec03[5];
  int i;

 /* lnput vec01 */
 for(i=0;i<5;i++) {
   printf("Enter vec01[%d]",i); 
   scanf("%d",&vec01[i]);
  }//for vec01
 
printf("\n");
 /* lnput vec02 */
 for(i=0;i<5;i++) {
    printf("Enter vec02[%d]",i);
    scanf("%d",&vec02[i]);
   }//for 2 vec02
 
  /* Process array */
  for(i=0;i<5;i++) {
    vec03[i] = vec01[i] + vec02[i];
   }//fac Process array 

  /* Output */
  
  printf("First  vector:");
  for(i=0;i<5;i++){
    printf("%2d :",vec01[i]);
   }//for vec01
 printf("\n");
  printf("Second vector:");
  for(i=0;i<5;i++){
    printf("%2d :",vec02[i]);
   }//for vec02
 printf("\n");
  printf("Output vector:");
  for(i=0;i<5;i++){
    printf("%2d :",vec03[i]);
   }//for Output
 printf("\n");
return 0;
} // main
