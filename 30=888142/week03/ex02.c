     /*
       Program name: ex02.c   
       student: 59160668 Nitichai Sawangsai
       section:04
     */
   #include <stdio.h>
   int main (int arc,char*argv[])
 { 
   float var1, var2;
   float result;
   var1 = 10.23;
   var2 = 3.23; 
// Arithmet Operator : + - * /
    result = var1 + var2;
    printf("%5.2f + %5.2f = %5.2 f\n",var1,var2,result);
       
       result = var1 - var2;
       printf("%5.2f - %5.2f = %5.2 f\n",var1,var2,result);
       
          result = var1 * var2;
          printf("%5.2f * %5.2f = %5.2 f\n",var1,var2,result);
       
             result = var1 / var2;
             printf("%5.2f / %5.2f = %5.2 f\n",var1,var2,result);

             return 0;
 }
