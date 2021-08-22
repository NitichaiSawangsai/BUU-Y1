/* Program name : ex04.c
   Student : 59160668 
   Nitichai Sawangsai
   Section : 04 
*/
  
#include<stdio.h>
int main (void)  {
  int arraysize=10;
  int score[]={9,8,8,2,6,4,1,2,3,10};
  int temp,i,j;
   
 for(i=0;i<arraysize;i++) {
    for(j=0;j<i;j++) {
      if(score[i]>score[j]) {
       temp=score[i];
       score[i]=score[j];
       score[j]=temp;
     }//if(score[i]>score[j])
    }//for(j=0;j<i;j++)
   }//for(i=0;i<arraySize;;i++)
 for(i=0;i<arraysize;i++) {
   printf("%5d",score[i]);
  }//for(i=0;i<arraySize;i++)    
return 0;
} // main
