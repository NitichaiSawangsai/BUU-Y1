//aom
#include<stdio.h>
void main() {
 int i,j,a,num,aom;
    system("clear");
   printf("In put :");
   scanf("%d",&num);  
      printf("\n");
        for(i=num;i>=1;i--)    {
         for(j=num;j>=i;j--)  {
            if(j>i) {    
              printf(" ");
             } 
             else {
              aom=num;
               for(a=1;a<=i;a++) {
                   printf("%d",aom);
                aom--;
                 }
              }
     }
        printf("\n");
  }

        printf("\n");
  
return ;
}

