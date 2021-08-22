/*Program name: ex14.c
student: 59160668 Nitichai Sawangsai
section:04 
*/    

#include<stdio.h>
int main (void){
int aom , sys_num ;
 
  unsigned seed;
    seed = time(NULL);
    srand(seed);
    sys_num = rand(seed)% 20 +1 ;

   printf(" Please enter the random (1-20) : ");
   scanf ( "%d",&aom);
    
  if(aom<sys_num){
        printf("Your guess is too low \n");
 } 
  if(aom == sys_num){
        printf("Congratulation! you did it \n");
 } 
   else if(aom>sys_num){
        printf("Your guess is too high \n");
 } 
      
  return 0; 

  } // aomza

