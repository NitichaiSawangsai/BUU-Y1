
     /*Program name: ex12.c
       student: 59160668 Nitichai Sawangsai
       section:04 
     */
    
    #include<stdio.h>
    int main (void) 
  {
    
    int  score;
    char grade;
    int temp;
    
      printf(" Enter the test score ( 0-100 ) : ");
       scanf ( "%d",&score);
    
    temp = score / 10 ;
     
    switch(temp)
 
 { 
      
       case 10 : ;
       case  9 : grade = 'A';
                break;
       case  8 : grade = 'B';
               break;
       case  7 : grade = 'C';
               break;
       case  6 : grade = 'D';
               break;
     
       default : grade = 'F';

  } // switch
 
        printf(" The Grade is : %c \n ",grade);
 
   return 0; 

  } // aomza

