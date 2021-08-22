    /*
       Program name: ex15.c   
       student: 59160668 Nitichai Sawangsai
       section:04
    */

   #include <stdio.h>
   #define TaxRate 0.07
   int main (void)
 {  
  //variable declarations
       int aom_Tv,
           aom_Radio,
           aom_Remote_Control,
           aom_Cd_player,
           aom_Tape_recorder;

       float    aom1,
                aom2,
                aom3,
                aom4,
                aom5;

       float unit_Tv = 5000.00,
             unit_Radio =  700.00,
             unit_Remote_Control =  160.00,
             unit_Cd_player = 1750.00,
             unit_Tape_recorder =  890.00,
             Subtotal,
             tax,
             total;  
 
 //statements
    printf("\n number Tv : ");
     scanf("%d",&aom_Tv);
    printf("\n number Radio : ");
     scanf("%d",&aom_Radio);
    printf("\n number Remote Control : ");
     scanf("%d",&aom_Remote_Control);
    printf("\n number Cd player : ");
     scanf("%d",&aom_Cd_player);
    printf("\n number Tape recorder :");
     scanf("%d",&aom_Tape_recorder);

 //calculate
   aom1     = aom_Tv * unit_Tv;
   aom2     = aom_Radio * unit_Radio;
   aom3     = aom_Remote_Control * unit_Remote_Control;
   aom4     = aom_Cd_player * unit_Cd_player;
   aom5     = aom_Tape_recorder * unit_Tape_recorder;
   Subtotal = aom1 + aom2 + aom3 + aom4 + aom5;
   tax      = TaxRate * Subtotal;
   total    = Subtotal + tax;
 

     printf("\n |   QTY     |     DESCRIPTIONS            UNIT PRLCE          TOTAL PRLCE   \n");
     printf("   | --------  |   -----------------       -----------------    --------------- \n");
     printf("   |  %d       |    Tv                        5000.00               %6.2f      \n",aom_Tv,aom1);
     printf("   |  %d       |    Radio                      700.00               %6.2f      \n",aom_Radio,aom2);
     printf("   |  %d       |    Remote Control             160.00               %6.2f      \n",aom_Remote_Control,aom3);
     printf("   |  %d       |    Cd player                 1750.00               %6.2f      \n",aom_Cd_player,aom4);
     printf("   |  %d       |    Tape recorder              890.00               %6.2f      \n",aom_Tape_recorder,aom5);
     printf("   |           |                                                               \n");
     printf("   |           |                                               --------------- \n");
     printf("   |           |                                                               \n");
     printf("                                               Subtotal   =     %7.2f         \n",Subtotal);
     printf("                                               Tax        =     %7.2f         \n",tax);
     printf("                                               Total      =     %7.2f         \n",total);
     printf("                                                                              \n");

  
   return 0;
 } // main
