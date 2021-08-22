/* Program name: ex01.c
   Student:59160668 
   Nitichai Sawangsai
   section:04
*/
    #include <stdio.h>
    #include <string.h>
    int main(int argc, char*argv[]) {
    struct student {
         char name[30];
         int age;
         float gpa;
    }; //struct of student
     struct student nisit;
     strcpy (nisit.name,"Nitichai Sawangsai");
     nisit.age=18;
     nisit.gpa=3.45;
     printf("Name : %s Age : %d GPA : %5.2f \n",nisit.name,nisit.age,nisit.gpa);
    return 0;
    }//main 
