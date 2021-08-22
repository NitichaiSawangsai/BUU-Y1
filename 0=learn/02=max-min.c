#include<stdio.h>
int main () {
  int nisit[5],score[5],max,min,agv,sum=0,i;
    for(i=0;i<5;i++) {
      printf("ID : ");
       scanf("%d",&nisit[i]);
      printf("Score : ");
       scanf("%d",&score[i]);
       if(i==0) {
         max=min=score[i];
       }//if i==1
       if(score[i]>max){
         max=score[i];
       }//if score[i]>max
       if(score[i]<min){
         min=score[i];
       }//if score[i]<min
      sum=sum+score[i];
     }//for i
     agv=sum/5;
     for(i=0;i<5;i++) {
       if(score[i] == max) {
         printf("Max : %d %d\n",nisit[i],score[i]);
       }//if score[i] == max
       if(score[i] == min) {
         printf("Min : %d %d\n",nisit[i],score[i]);
       }//if score[i] == min
      }//for i
      printf("Avevage : %d\n",agv);
     return 0;
 }//main
