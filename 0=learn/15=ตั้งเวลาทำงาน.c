#include <stdio.h>
#include <time.h>

int main ()
{
   time_t start;
   time_t end;
   int a;
   printf("Enter any number to start : ");
   scanf("%d",&a);
   start = time(NULL);
   printf("Time Start\n");
   printf("Enter any number to stop : ");
   scanf("%d",&a);
   end = time(NULL);
   printf("Your time = %d  Seconds\n", end-start);
   
   return(0);
}
