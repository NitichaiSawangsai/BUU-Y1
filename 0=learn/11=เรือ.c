#include<stdio.h>
void main() {
 int i,j,a,num;
    system("clear");
   printf("In put :");
   scanf("%d",&num);  
      printf("\n");
        for(i=1;i<=num;i++)    {
         for(j=num;j>=i;j--)  {
           if(j>i) { 
             for(a=1;a<=j;a++) { 
               printf("%d",a);
              }  
            } 
             else {
              printf("-");
              }
     }
        printf("\n");
  }
        printf("\n");
  
return ;
}

