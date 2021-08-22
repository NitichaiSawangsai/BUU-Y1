/*Program name: ex15.c
student: 59160668 Nitichai Sawangsai
section:04 
*/    

#include<stdio.h>
int main (void){
float radius;
   printf("Please enter the radius \n");
   scanf ( "%f",&radius);
    
  if(0<radius && radius<=90){
        printf("I \n");
 } 
  else if(90<radius && radius<=180){
        printf("II \n");
 } 
  else if(180<radius && radius<=270){
        printf("III \n");
 }
  else if(270<radius && radius<=360){
        printf("IV \n");
 }

   else {
        printf("Enter the new radius \n");
 } 
      
  return 0; 

  } // aomza

