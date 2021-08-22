/* Program name: nisit.c
   Student:59160668 
   Nitichai Sawangsai
   section:04
*/
    #include "nisit.h"
    int main(int argc, char*argv[]) {
    struct student nisit;
         printf("Please enter Student name : ");
          scanf("%s",nisit.fname);
         printf("             Student name : ");
          scanf("%s",nisit.sname);
         printf("             Student age  : ");
          scanf("%d",&nisit.age);
         printf("             Student GPA  : ");
          scanf("%f",&nisit.gpa);
     printf("\n");
     printf("    Please enter student Name : %s\n  ",nisit.fname);
     printf("  Please enter student Name : %s\n  ",nisit.sname);
     printf("                        Age : %d\n  ",nisit.age);
     printf("                        GPA :%5.2f\n",nisit.gpa);
    return 0;
    }//main 
