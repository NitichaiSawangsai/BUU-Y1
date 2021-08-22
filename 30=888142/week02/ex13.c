      /*Program name: ex13.c 
        student: 59160668 Nitichai Sawangsai
        section: 04
      */ 
      #include<stdio.h>
      #define aom 3.141
      #define aomza 2
      int main (void)
      {
      //Variable declarations
        float radius;
        float area;
      //Statements
        printf("\nPlease enter the value of radius : ");     
        scanf("%f",&radius);
        area = aom*aomza*radius;

      printf("\n The area of square with radius = %2.2f is : %2.2f\n",radius,area);
      return 0;
      }    //main
