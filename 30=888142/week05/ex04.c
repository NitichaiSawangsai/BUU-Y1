      
     /*Program name: ex04.c
       student: 59160668 Nitichai Sawangsai
       section:04 
     */
  	  
   #include<stdio.h>
   int main (void) 
 {
     int  x,sum=0;
        printf(" Enter your numbers : <EOF> to stop.\n ");
        while(scanf("%d",&x) != EOF) 
          sum += x;
        printf("\n The total is: %d\n",sum);
   return 0;     
 }   // aomza
