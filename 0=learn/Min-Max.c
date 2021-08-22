#include<stdio.h>
int main(){
int i,j,temp;
int score[5]={3,1,5,6,1}; 
       
    for(i=0;i<5;i++){
      for(j=0;j<i;j++){
            if(score[i]<score[j]){
                temp=score[i];
                score[i]=score[j];
                score[j]=temp;
            }
      }
    }
     for(i=0;i<5;i++){
        printf("%5d",score[i]);
     }
        printf("\n");
}
