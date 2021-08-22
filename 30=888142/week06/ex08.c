/* Program name : ex08.c
   Student : 59160668 
   Nitichai Sawangsai
   Section : 04 
*/  
#include<stdio.h>
void print_string (char*str);
void print_n_star(int num);
void print_n1_star(int num);
int main (int argc,char*argv[]) {
system("clear");
   print_n1_star(6);
   print_string(" Nitichai Sawangsai ");
   print_string(" Student ID : 59160668 ");
   print_string(" Faculty of Informatics ");
   print_string(" Burapha University ");
   print_n_star(5);
return 0;
} 
  void print_string(char*str){   
    printf("\t%s\n",str); 
  return ;
  }//print_string
  void print_n_star(int num) {
    int row,i,j ;
       for(row=1;row<=num;row++) {
           printf("\t\t"); 
         for(i=num-row;i>=1;i--)   {
           printf(" ");
          }//for i
         for(j=1;j<=(row*2)-1;j++) {
           printf("*");
         }//for j
      printf("\n");
       } //for row
    return ;
   }//print_n_star
   void print_n1_star(int num){
    int row,i,j ;
       for(row=num-1;row>=1;row--) {
           printf("\t\t"); 
         for(i=1;i<=num-row;i++)     {
           printf(" ");
          }//for i
         for(j=1;j<=2*row-1;j++)     {
           printf("*");
          }//for j
      printf("\n");  
        } //for row
   return ; 
   }//print_n1_star
  
