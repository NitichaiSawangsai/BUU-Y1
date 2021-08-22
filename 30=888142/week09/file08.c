/*Program name : file08.c
  Student : 59160668 
  Nitichai Sawangsai
  Section : 04
*/
#include<stdio.h>
#define FLUSH while (getchar()!='\n')
#define ERR1 "\aPrice incorrect. Re-enter both fields\n"
#define ERR2 "\aAmount incorrect. Re-enter both fields\n"
int main (void)
{
   int ioResult,amount;
   float price;
     do
     {
        printf("\nEnter amount and price : ");
        ioResult = scanf("%d %f",&amount,&price);
          if(ioResult != 2)
           {
              FLUSH;
                if(ioResult == 1)
                  printf(ERR1);
                else
                  printf(ERR2);
           }//if(ioResult != 2)
     }while(ioResult!=2);
   printf("%d %f\n",amount,price);
return 0;
}//main
