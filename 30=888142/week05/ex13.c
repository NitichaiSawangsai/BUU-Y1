     	
     /*Program name: ex13.c
       student: 59160668 
       Nitichai Sawangsai
       section:04 
     */
  	  
   #include<stdio.h>
   int main (int argc, char * argv[] ) 
 {
     int  j;
      printf("Enter a number and l'll print it backward : ");
      scanf("%d",&j);
       do  {
       printf("%d",j%10);
     j/=10; 
   } while (j>0);
      printf("\n Have a good day \n");
return 0;     
 }   // aomza 

