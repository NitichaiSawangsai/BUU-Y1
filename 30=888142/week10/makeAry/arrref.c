#include<stdio.h>
 int main (int argc,char *argv[]) {
    int vec[5],i;
      for (i=0;i<5;++i) {
           vec[i]=i+1;  
        }//for i
        printf("Before Call");
        for(i=0;i<5;++i) {
            printf("%d : "vec[i]);
          }//for i
          printf("\n");
          multwo(vec,5);
          printf("After Call : ");  
          for(i=0;i<5;++i) {
            printf("%d : ",vec[i]);
            }//for i
            printf("\n");
 return 0;
 }//main
