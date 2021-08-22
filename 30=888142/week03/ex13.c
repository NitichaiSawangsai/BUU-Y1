     /*
       Program name: ex13.c   
       student: 59160668 Nitichai Sawangsai
       section:04
     */

   #include <stdio.h>
   int main (void)
 {  
  //variable declarations
    int intNum;
    int oneDigit;
  
  //statements
    printf("Enter an integral number: ");
    scanf("%d",&intNum);      
   


    oneDigit = intNum%10;
    
    printf("\n The right digit is:%d\n",oneDigit);

    return 0;
 }  // main
