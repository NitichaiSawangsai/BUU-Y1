      /*Program name: ex12.c 
        student: 59160668 Nitichai Sawangsai
        section: 04
      */ 
      #include<stdio.h>
      int main (vold)
      {
      //Variable declarations
        float base,height;
        float square_area;
      //Statements
        printf("\nPlease enter the value of base : ");     
        scanf("%f",&base);
        printf("\nPlease enter the value of height :");
        scanf("%f",&height);
        square_area= base * height;

      printf("\n The area of square with base = %2.2f & heigh = %2.2f is : %2.2f\n",base,height,square_area);
      return 0;
      }    //main
