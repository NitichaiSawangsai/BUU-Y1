/*Program name: ex13.c
student: 59160668 Nitichai Sawangsai
section:04 
*/    

#include<stdio.h>
int main (void){
   int Mathematics,English,Exercise,aom;
   printf(" Enter the test score Mathematics : ");
   scanf ( "%d",&Mathematics);
   printf(" Enter the test score English : "); 
   scanf ("%d",&English);
   printf(" Enter the test score Exercise : ");
   scanf ( "%d",&Exercise);
   printf("Mathematics : %d\n",Mathematics);
   printf("English : %d\n",English);
   printf("Exercise : %d\n",Exercise);
    aom = Mathematics+English+Exercise;
    aom /= 3;
 
       printf("Points, including 3 subjects : %d\n",aom);  
 if(aom<50){
        printf("You're FAIL \n");	
 }
   else if(aom<80){
        printf("You're PASS \n");
 }  
   else if(aom<=100){
        printf("You're EXCELLENCE \n");
 } 
   else 
        printf("total is more than 100");

  return 0; 

  } // aomza

