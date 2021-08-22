/* Program name : ex19.c
   Student : 59160668 
   Nitichai Sawangsai
   Section : 04 
*/ 
#include<stdio.h>
void multi (void);
  int main(int argc,char*argv[])  {        
  int aom1;
system("clear");                                                              
        printf("\t** * * * * * * * * * * * * * * * * * *\n");	
	printf("\t*             MENU                    \n");
	printf("\t                                     *\n");
	printf("\t*      1. Multiplication table        \n");
	printf("\t*      2. EXIT                       *\n");
	printf("\t*        			        \n");
	printf("\t** * * * * * * * * * * * * * * * * * *\n"); 
while(aom1!=2) { 
do {
    printf(" กรูณากรอกเลือกเมนู : ");	
    scanf("%d",&aom1);
       if(aom1<1 || aom1>2)
         printf("\n Please try again\n");
     }while(aom1<1 || aom1>2);  
switch(aom1)  {
  case 1 :  
system("clear");
          printf("\t** * * * * * * * * * * * * * * * * * *\n");
          printf("\t*             MENU                    \n");
          printf("\t                                     *\n");
          printf("\t*      1. Multiplication table  <     \n");
          printf("\t*      2. EXIT                       *\n");
          printf("\t*                                     \n");
          printf("\t** * * * * * * * * * * * * * * * * * *\n");
     multi();
    break;
   case 2 : 
 system("clear");
          printf("\t** * * * * * * * * * * * * * * * * * *\n");
          printf("\t*             MENU                    \n");   
          printf("\t                                     *\n");
          printf("\t*      1. Multiplication table        \n");
          printf("\t*      2. EXIT                  <    *\n");
          printf("\t*                                     \n");
          printf("\t** * * * * * * * * * * * * * * * * * *\n");
     break;
      } //switch  
printf("\n"); 
}// while (aom1!=3)
return 0;     
}// main  
   void multi (void) { 
     int numStart,numStop,i,j;
      do {
        printf("Input Num Start : ");
        scanf("%d",&numStart);
         printf("Input Num Stop : ");
         scanf("%d",&numStop);
           if(numStart>numStop) {
              printf("\t\t\t...... กรุณากรอกใหม่ .......\n");
          }//if (numStart>numStop)
        }while(numStart>numStop);
          printf("\t\t***** แม่สูตรทีต้องการ ***** \n");
                for(i=numStart;i<=numStop;i++)     {
                  for(j=1;j<=12;j++)            {
                      printf("%d * %d = %d \n",i,j,(i*j));
                     }//for j
                  printf("\n");
                 }//for i
   }//multiTable(n)
