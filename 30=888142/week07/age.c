/* Program name : ex03.c
   Student : 59160668 
   Nitichai Sawangsai
   Section : 04 
*/
  
#include<stdio.h>
int intput (void);
int process (void);
int output(void);
int main (int argc,char*argv[])  {
 int vec01[10],vec02[10];
 int i;
 intput ();
 process ();
 output();
 
return ;
} // main
 int intput (void) {
  int vec01[10],vec02[10];
  int i;
   /* lnput vec01 */
   for(i=0;i<10;i++) {
    printf("Enter  Inputage[%d]",i); 
    scanf("%d",&vec01[i]);
   }//for vec01
  printf("\n");
return 0;
 }//intput
 int process (void){
  int vec01[10],vec02[10];
  int i;
  for(i=0;i<10;i++) {
   vec02[i] = vec01[i] ;
  }//for Proces
return 0;
 }//process
 int output(void) {
  int vec01[10],vec02[10];
  int i;
  printf("output of age\n");
    printf("*******************\n");
  for(i=0;i<10;i++){
    printf("age[%d] = %2d\n",i,vec01[i]);
   }//for vec01
    printf("*******************\n");
 printf("\n");
return 0;
 }//output 
