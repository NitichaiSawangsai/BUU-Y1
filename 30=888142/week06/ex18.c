/* Program name : ex18.c
   Student : 59160668 
   Nitichai Sawangsai
   Section : 04 
*/  
#include<stdio.h>
#define labor_cost 35 
#define vat 0.07
float  input (float length,float width,float Percent_decrease,float Price_per );  
float output (float length,float width,float Percent_decrease,float Price_per,float aom,float aom1,float aom2 ,float aom3,float aom4,float aom5,float aom6);
int main (void){
float length , width , Percent_decrease , Price_per ;
float aom , aom1 , aom2 , aom3 , aom4 , aom5 , aom6 ; 
   printf("Please enter the length of the room \n");
   scanf ( "%f",&length);
   printf("Please enter the width  of the room \n");
   scanf ( "%f",&width);
   printf("The percentage reduction to its customers \n");
   scanf ( "%f",&Percent_decrease);
   printf("Price per square foot \n");
   scanf ( "%f",&Price_per);

   //input
   
   input(length,width,Percent_decrease,Price_per);


 // calculate
   aom = length * width;
   aom1 = aom * labor_cost;
   aom2 = aom + aom1;
   aom3 = aom2 * vat;
   aom4 = aom2 - aom3;
   aom5 = aom4 * vat;
   aom6 = aom4 + aom5;
     
   // out put 
  
   output(length,width,Percent_decrease,Price_per,aom,aom1,aom2,aom3,aom4,aom5,aom6); 
      
  return 0; 

  } // aomza
 
   float  input (float length,float width,float Percent_decrease,float Price_per)  {  
      printf("Please enter the length of the room : %3.2f \n",length);
      printf("Please enter the width  of the room : %3.2f \n",width);
      printf("The percentage reduction to its customers : %3.2f \n",Percent_decrease);
      printf("Price per square foot : %3.2f \n",Price_per);
   return ;   
   }
 float output (float length,float width,float Percent_decrease,float Price_per,float aom,float aom1,float aom2 ,float aom3,float aom4,float aom5,float aom6) {
 system("clear");
 printf("\n\n\n\n");
  printf("                                   M E A S U R E M E N T                                     \n");
  printf("                                                                                             \n");
  printf("  Length                                                                  %3.2f  ft           \n",length);
  printf("  Width                                                                   %3.2f  ft          \n",width);
  printf("                                                                                             \n"); 
  printf("  Area                                                                    %3.2f  square ft   \n",aom);
  printf("                                                                                             \n"); 
  printf("                                                                                             \n");
  printf("                                         C H A R G E                                         \n");
  printf("                                                                                             \n"); 
  printf("  DESCRIPTIONS                           COST/SQ.FT.                       CHARGE (BAHT)     \n");
  printf("                                                                                             \n");
  printf("  ------------                           -------------                     ---------------   \n");
  printf("                                                                                             \n");
  printf("  Carpet                                  %3.2f                              %3.2f           \n",aom1,aom2);
  printf("  Labor                                   34.00                                              \n");
  printf("                                                                             %3.2f              \n",aom3);
  printf("                                                                                             \n");
  printf("                                                                           ---------------   \n");
  printf("                                                                                             \n");
  printf("  Installed Price                                                            %3.2f           \n",aom4);
  printf("  Discount                                %3.2f                              %3.2f           \n",aom5,aom6);

 printf("\n\n\n\n");
 return ;
 }

