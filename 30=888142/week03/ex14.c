     /*
       Program name: ex14.c   
       student: 59160668 Nitichai Sawangsai
       section:04
     */

   #include <stdio.h>
   #define DEGREE_FACTOR 57.295779
   int main (void)
 {  
  //variable declarations
    double radians,degrees;
  
  //statements
    printf("input data radians : ");
    scanf("%lf",&radians);      
   
    degrees = radians * DEGREE_FACTOR;
    
    printf("\n radians = %4.3lf is degrees = %5.3lf \n",radians,degrees);

    return 0;
 }  // main
