#include <stdio.h>
  int main(void) {      
  int aom1,aom2,i,j; 
   int numStart,numStop;
system("clear");
system("\n");                                                              
       printf("\t** * * * * * * * * * * * * * * * * * * * * * * **\n");
       printf("\t*             MENU                              *\n");    
       printf("\t                                                 \n");
       printf("\t*      1. Pattern One                           *\n");
       printf("\t       2. Pattern Two                            \n");
       printf("\t*      3. Pattern Three (สามเหลี่ยมขวา น้อยไปมาก)  *\n");
       printf("\t       4. Multiplication table (สูตรคูณ)           \n");
       printf("\t*      5. เมนู สูตรคูณ                             *\n");
       printf("\t*      6. Quit  	                         *\n");
       printf("\t** * * * * * * * * * * * * * * * * * * * * * * **\n"); 
do{
    do {	
       printf("\nChoose an Option (between 1 and 5)  " );	 
       scanf("%d",&aom1);
          if(aom1<1 || aom1>6)
            printf("\n\t\tYour Option is incorrect. Please try again\n");
       }while(aom1<1 || aom1>6);
 do {
       printf("\nChoose an Option (between 2 and 9)  ");	 
       scanf("%d",&aom2);
          if(aom2<2 || aom2>9) 
            printf("\n\t\tYour Option is incorrect. Please try again\n");  
    }while(aom2<2 || aom2>9);  
switch(aom1)  {
  case 1 : for(i=1;i<=aom2;i++)            {
             for(j=1;j<=i;j++)          {
       	         if(i==j)
       	             printf("5");
                    else
               	        printf("B");
        }
           printf("\n");
     }
     break;
        case 2 : for(aom2=1;i>=1;i--)       {
                   for(i=1;j<=aom2;j++)  {
                       if(i==j)
                          printf("5");
                         else
                             printf("B");
         } 
            printf("\n");
      }
     break;
            case 3 : for(i=aom2;i>=1;i--)    {
                    for(j=1;j<=aom2;j++)  {
                          if(i<=j)
                    printf("z");
                     else 
                      printf("-");
          }
            printf("\n");
       }
     break;  
      case 4 : printf("\n\t......Multiplication table........\n ");
              for(i=1;i<=12;i++)    { 
                  printf("\t %2d * %2d  = %2d\n",aom2,i,(aom2*i));
       } 
           printf("\n");  
     break;
   case 5:   
   do { 
	printf("Input Num Start : ");
	 scanf("%d",&numStart);
	   printf("Input Num Stop : ");
	     scanf("%d",&numStop);
       if(numStart>numStop) {
          printf("\t\t\t......กรอกใหม่.......\n");
        }
      }while(numStart>numStop);
       	   printf("\t\t***** แม่สูตรคูณทีต้องการ ****** \n");
	      for(i=numStart;i<=numStop;i++)     {
	        for(j=1;j<=12;j++)            {
                    printf("%d * %d = %d \n",i,j,(i*j));
   	           }  
		printf("\n");
               }
           break;
     } //switch (aom1)  
   printf("\n");
 return 0;     
}  while (aom1!=5); 
}   // ร่างกายหลัก 
