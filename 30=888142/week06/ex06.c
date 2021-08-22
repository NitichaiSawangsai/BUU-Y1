/* Program name : ex06.c
   Student : 59160668 
   Nitichai Sawangsai
   Section : 04 */
  
#include<stdio.h>
void print_string (char*str);
int main (int argc,char*argv[]) {
system("clear");
   printf("*****************************************\n");
   print_string(" Nitichai Sawangsai ");
   print_string(" Faculty of Informatics ");
   print_string(" Burapha University ");
   printf("*****************************************\n");
return 0;
} 
  void print_string(char*str) {
    printf("\t%s\n",str);
return ;
}
