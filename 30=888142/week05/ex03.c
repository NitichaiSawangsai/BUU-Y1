      
     /*Program name: ex03.c
       student: 59160668 Nitichai Sawangsai
       section:04 
     */
  	  
   #include<stdio.h>
   int main (void) 
 {
     int  num,lineCount;
        printf("Enter an integer between 1 and 100 :");
        scanf ("%d",&num); 
    //initization
   // Test Number
      if (num>100)
       num =100;
       lineCount = 0;
      while (num >0) {
      if(lineCount < 10)
         lineCount++;
      else  {
     printf ("\n");
     lineCount = 1;
   } //else
      printf("%4d",num--); //num-- updates loop
   }
      return 0;
 }   // aomza
