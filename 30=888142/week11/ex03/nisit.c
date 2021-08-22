/* Program name: nisit.c
   Student:59160668 
   Nitichai Sawangsai
   section:04
*/
    #include "nisit.h"
    int main(int argc, char*argv[]) {
    struct student nisit;
         printf("Please enter Student name : ");
          scanf("%s",nisit.name);
         printf("             Student age  : ");
          scanf("%d",&nisit.age);
         printf("             Student GPA  : ");
          scanf("%f",&nisit.gpa);

     printf("Name : %s\n Age : %d\n GPA :%5.2f\n",nisit.name,nisit.age,nisit.gpa);
    return 0;
    }//main 
