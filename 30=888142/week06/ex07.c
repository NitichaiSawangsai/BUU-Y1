/* Program name : ex07.c
   Student : 59160668 
   Nitichai Sawangsai
   Section : 04 */
  
#include<stdio.h>
void print_string (char*str);
void print_n_star(int num);
int main (int argc,char*argv[]) {
system("clear");
   print_n_star(15);
   print_string(" Nitichai Sawangsai ");
   print_string(" Faculty of Informatics ");
   print_string(" Burapha University ");
   print_n_star(30);
return 0;
} 
  void print_string(char*str) {
    printf("\t%s\n",str); 
  return ;
  }//print_string
  void print_n_star(int num)  {
    int i ;
     for(i=0;i<num;i++) { 
         printf("*");
      }//for i
     printf("\n");
  return ; 
  }//print_n_star
  
