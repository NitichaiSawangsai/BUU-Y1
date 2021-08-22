/* Program name : ex18.c
   Student : 59160668 
   Nitichai Sawangsai
   Section : 04 */

#include<stdio.h>
  int main(void)  {        
  int aom1,aom2,aom3,i,j;
while(aom1<1||aom1>5||aom2<1||aom2>100||aom3<1||aom3>100) {
system("clear");
system("\n");                                                              
        printf("\t** * * * * * * * * * * * * * * **\n");	
	printf("\t*             MENU              *\n");
	printf("\t                                 \n");
	printf("\t*      1. ADD                   *\n");
	printf("\t       2. SUBTRACT               \n");
	printf("\t*      3. MULTIPLY              *\n");
	printf("\t       4. MODULO                 \n");
	printf("\t*      5. EXIT                  *\n");
	printf("\t*        			  *\n");
	printf("\t** * * * * * * * * * * * * * * **\n"); 
 do {	
    printf("\nChoose an Option (between 1 and 5)  " );	 
    scanf("%d",&aom1);
       if(aom1<1 || aom1>6)
         printf("\nYour Option is incorrect. Please try again");
     }while(aom1<1 || aom1>5);
 do {
    printf("\n( 1 - 100)");	 
    scanf("%d",&aom2); 
    scanf("%d",&aom3);
       if(aom2<1 || aom2>100 || aom3<1 || aom3>100) 
         printf("\n\t\t กรุณาใส่ใหม่ ใส่ค่า 1 กับ 2 ใหม่ ");    
     }while(aom2<1||aom2>100 || aom3<1||aom3>100);
switch(aom1)  {
  case 1 :  printf (" %d + %d = %d\n ",aom2,aom3,(aom2+aom3));
     break;
        case 2 : printf(" %d - %d = %d\n ",aom2,aom3,(aom2-aom3));
     break;
          case 3 : printf(" %d * %d = %d\n ",aom2,aom3,(aom2*aom3));
     break;  
            case 4 : printf(" %d % %d = %d\n ",aom2,aom3,(aom2%aom3)); 
     break;
              case 5: while (aom1!=5);  
     break;
      }    
  }//while 
printf("\n"); 
return 0;     
}   // aomza  

