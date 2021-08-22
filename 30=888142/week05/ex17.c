/* Program name : ex17.c
   Student : 59160668 
   Nitichai Sawangsai
   Section : 04 */

#include<stdio.h>
#include <stdlib.h>
  int main(void)
{ 
       
  int aom1,aom2,i,j;
while (aom1<1 || aom1>5 && aom2<2 || aom2>9 ) {
system("clear");
system("\n");                                                              
        printf("\t** * * * * * * * * * * * * * * **\n");	
	printf("\t*             MENU              *\n");
	printf("\t                                 \n");
	printf("\t*      1. Pattern One           *\n");
	printf("\t       2. Pattern Two            \n");
	printf("\t*      3. Pattern Three         *\n");
	printf("\t       4. Pattern Four           \n");
	printf("\t*      5. Quit                  *\n");
	printf("\t*        			  *\n");
	printf("\t** * * * * * * * * * * * * * * **\n");
 
 do {	
    printf("\nChoose an Option (between 1 and 5)  " );	 
    scanf("%d",&aom1);
       if(aom1<1 || aom1>5)
         printf("\nYour Option is incorrect. Please try again");
     }while(aom1<1 || aom1>5);
  do {
    printf("\nChoose an Option (between 2 and 9)  ");	 
    scanf("%d",&aom2);
       if(aom2<2 || aom2>9) 
         printf("\nYour Option is incorrect. Please try again");   
     }while(aom2<2 || aom2>9);
switch(aom1)  {
  case 1 : for(i=1;i<=aom2;i++)            {
             for(j=1;j<=aom2;j++)          {
       	         if(i==j)
       	             printf("5");
                    else
               	        printf("B");
        }
           printf("\n");
     }
     break;
        case 2 : for(i=aom2;i>=1;i--)       {
                   for(j=1;j<=aom2;j++)  {
                       if(i==j)
                          printf("5");
                         else
                             printf("B");
         } 
            printf("\n");
      }
     break;
            case 3 : for(i=aom2;i>=1;i--)    {
                    for(j=1;j<=aom2;j++)     {
                          if(i<=j)
                    printf("5");
                       else
                 printf("B");
          }
            printf("\n");
       }
     break;  
      case 4 :  for (i=1;i<=aom2;i++)        {
                for(j=1;j<=aom2;j++)         {
                    if(i<=j)
              printf("B");
                 else
            printf("5");
          }
           printf("\n");
       }
     break;
   case 5:   
  exit (aom1!=5 & aom2!=5);  
           break;

      }      
   }
return 0;     
}   // aomza  

