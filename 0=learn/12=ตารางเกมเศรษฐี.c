#include<stdio.h>
void multi (void);
  int main(int argc,char*argv[])  {        
  int k,i,j;
system("clear");    
     
   for (i=1;i<=54;i++) {
      printf("*");
    }//for i1
    printf("\n");
    for(j=1;j<=5;j++){ 
      printf("*       *        *        *        *        *        *");
    printf("\n");
    }//for j1
    printf("\n");
     for (i=1;i<=54;i++) {
       printf("*");
      }//for i1
      printf("\n");

  
 for(k=1;k<3;k++) { //k2 
 
       for(j=1;j<=5;j++){
         printf("*       *                                   *        *");
       printf("\n");
        }//for j1
       for (i=1;i<=50;i++) {
         if(i<41 && i>5 ) {
           printf(" ");
         }//if
         else
           printf("*");
         if(i>4 && i<70) {
           printf("");
         }//if i>4
         else 
           printf("*");
        }//for i2
  }//k2
printf("\n"); 
   }//main
