/* Program name: nisit.c
   Student:59160668 
   Nitichai Sawangsai
   section:04
*/
    #include "nisit.h"
    int main(int argc, char*argv[]) {
      int i;
      int num ;
      printf("Please enter the desired nisit : ");
      scanf("%d",&num);
      struct student nisit[num];
      printf("\n");
     for(i=0;i<num;i++) {
         printf("Please enter Student name [%d]: ",i+1);
          scanf("%s",&nisit[i].fname);
         printf("             Student name [%d]: ",i+1);
          scanf("%s",&nisit[i].sname);
         printf("             Student age  [%d]: ",i+1);
          scanf("%d",&nisit[i].age);
         printf("             Student GPA  [%d]: ",i+1);
          scanf("%f",&nisit[i].gpa);
     printf("\n");
       }//for i
 
     printf("\n**********************************************************\n");
     for(i=0;i<num;i++) {
       printf("    Please enter student Name : %s\n  ",nisit[i].fname);
       printf("  Please enter student Name : %s\n  ",nisit[i].sname);
       printf("                        Age : %d\n  ",nisit[i].age);
       printf("                        GPA :%5.2f\n",nisit[i].gpa);
     printf("\n**********************************************************\n");
     printf("\n\n");
       }//for i of output 
    return 0;
    }//main 
