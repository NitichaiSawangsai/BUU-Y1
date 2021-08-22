#include<stdio.h>
int main (void){
   char Character;
   int Intvalue;
   float Floatvalue;
   printf("\nPlease enter Character:");
   scanf("%c",&Character);
   printf("\nPlease enter Number1:");
   scanf("%d",&Intvalue);
   printf("\nPlease enter Number2:");
   scanf("%f",&Floatvalue);
   printf("\nResult Char:%c Result Number1:%d Result Number2:%5.2f",Character,Intvalue,Floatvalue);
   printf("\nResult Char:%c Result Number1:%c Result Number2:%c",Character,Intvalue,Floatvalue);
   printf("\nResult Char:%d Result Number1:%d Result Number2:%d\n",Character,Intvalue,Floatvalue);
   printf("****Bye Bye****\n");
return 0;
} //main
