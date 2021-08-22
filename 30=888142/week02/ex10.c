      /*Program name: ex10.c 
        student: 59160668 Nitichai Sawangsai
        section: 04
      */ 
      #include<stdio.h>
      #define HALF 0.5
      int main (vold)
      {
      //Variable declarations
        float base,height;
        float tri_area;
      //Statements
        printf("\nPlease enter the value of base : ");     
        scanf("%f",&base);
        printf("\nPlease enter the value of height :");
        scanf("%f",&height);
        tri_area= HALF * base * height;

      printf("\n The area of Triangle with base = %5.2f & heigh = %5.2f is : %6.2f",base,height,tri_area);
      return 0;
      }    //main
