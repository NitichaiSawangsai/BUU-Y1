#include<stdio.h>
void greeting (void);
void printone (int x);
int getQuntity(void);
int mul(int x);
int main() {
   int a,b;
     greeting();
       a=getQuntity();
       printone(a);
          a=mul(a);
          b=mul(b);
         printone(a);
          printf("aom1 : %d\n",a);
           printf("\n good bye \n");  
 return 0;
} // main
   void greeting(void)    {
     printf("greeting\n");
 return ; 
} //greeting
   void printone(int x)   {
     printf("printone : %d\n",x);
 return ;
} //printone
   int  getQuntity(void)  {  
     int qty;
       printf("Please enter qty :");
        scanf("%d",&qty);
 return qty;
} //getQuntity
   int mul(int x)   {
 return (x*x);
} //mul function
