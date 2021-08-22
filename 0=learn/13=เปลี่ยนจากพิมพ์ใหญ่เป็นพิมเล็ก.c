#include <stdio.h>
#include <ctype.h>

int main()
{
  system("clear");
   int i = 0;
   char str[]={"B"} ;
   //      printf("str[]");
//	 scanf("%c",&str);
   while( str[i]) 
   {
      putchar(tolower(str[i]));
      i++;
   }
   
   return(0);
}// A-Z => a-z
