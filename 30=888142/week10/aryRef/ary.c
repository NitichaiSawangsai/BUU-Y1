/*Program name : ary.c
  Student : 59160668 
  Nitichai Sawangsai
  Section : 04
*/
#include<stdio.h>
int multwo (int vector[],int size);
int main (int argc,char*argv[]) {
   int vec[5],i;   
   for (i=0;i<5;++i) {  
      vec[i]=i+1;
   }//for i
   printf("Before call:");
   for(i=0;i<5;++i) { 
     printf("%d:",vec[i]);
   }//for i 
   printf("\n");
   multwo(vec,5);
   printf("After call:");
   for(i=0;i<5;++i) {
   printf("%d:",vec[i]);
   }//for i
   printf("\n");  
return 0;
}//main
   int multwo (int vector[],int size) {
     int i;
     for(i=0;i<size;++i) {
        vector[i]=vector[i]*2;
     }//for i
  return 0;
  }//multwo
