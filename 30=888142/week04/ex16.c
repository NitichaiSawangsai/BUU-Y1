/*Program name: ex16.c
student: 59160668 Nitichai Sawangsai
section:04 
*/    

#include<stdio.h>
#define labor_cost 35 
#define vat 0.07  
int main (void){
float length , width , Percent_decrease , Price_per ;
float act , Earnings , installation_fee , discount , After_discount , tax , Net_cost ; 
   printf("Please enter the length of the room \n");
   scanf ( "%f",&length);
   printf("Please enter the width  of the room \n");
   scanf ( "%f",&width);
   printf("The percentage reduction to its customers \n");
   scanf ( "%f",&Percent_decrease);
   printf("Price per square foot \n");
   scanf ( "%f",&Price_per);


  //show In put 
    printf("Please enter the length of the room : %f \n",length);
    printf("Please enter the width  of the room : %f \n",width);
    printf("The percentage reduction to its customers : %f \n",Percent_decrease);
    printf("Price per square foot : %f \n",Price_per);

 // calculateฃ
     // ค่าพรม
   act = length * width;
     // ค่าแรง 
   Earnings = act * labor_cost;
     // หาติดตั้ง
   installation_fee = act + Earnings;
     // ส่วนลด
   discount = installation_fee * vat;
     // หลังหักส่วนลด
   After_discount = installation_fee - discount;
     // ภาษี
   tax = After_discount * vat;
     // คำนวณค่าใช้จ่ายสุทธิ
   Net_cost = After_discount + tax;
     
   // out put 
 
  printf("                                    M E A S U R E M E N T                                    \n");
  printf("                                                                                             \n");
  printf("  Length                                                                      %f  ft         \n",length); 
  printf("  Width                                                                       %f  ft         \n",width);
  printf("                                                                                             \n");
  printf("  Area                                                                        %f  square ft  \n",act);
  printf("                                                                                             \n");
  printf("                                                                                             \n");
  printf("                                                                                             \n");
  printf("                                         C H A R G E                                         \n");
  printf("                                                                                             \n");
  printf("  DESCRIPTIONS                            COST/SQ.FT.                       CHARGE (BAHT)    \n");
  printf("                                                                                             \n");
  printf("  ------------                           -------------                     ---------------   \n");
  printf("                                                                                             \n");
  printf("  Carpet                                  %f                                 %f              \n",Earnings,installation_fee);
  printf("  Labor                                   34.00                                              \n");
  printf("                                                                             %f              \n",discount);
  printf("                                                                                             \n");
  printf("                                                                           ---------------   \n");
  printf("                                                                                             \n");
  printf("  Installed Price                                                            %f              \n",After_discount);
  printf("  Discount                                %f                                 %f              \n",tax,Net_cost);
      
  return 0; 
  } // aomza

