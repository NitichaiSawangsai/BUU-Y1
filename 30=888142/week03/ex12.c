     /*
       Program name: ex12.c   
       student: 59160668 Nitichai Sawangsai
       section:04
     */

   #include <stdio.h>
   int main (void)
 {  
  //variable declarations
    int remain,num1,num2;
    float quot;
  
  //statements
    printf("num1: ");
    scanf("%d",&num1);      
    printf("num2: ");
    scanf("%d",&num2);
    
    quot = num1/num2;
    remain = num1%num2;
    
  printf("\n Answer remain = %d & quot = %5.2f\n",remain,quot,num1,num2);

    return 0;
 }  // main
