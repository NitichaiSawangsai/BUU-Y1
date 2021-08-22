/* Program name : ex06.c
   Student : 59160668 
   Nitichai Sawangsai
   Section : 04 
*/
  
#include<stdio.h>
#define ROWS 2
#define COLS 5
int main (void)  {
  int row,column;
  int table[ROWS][COLS] ={
                  {00,01,02,03,04},
                  {10,11,12,13,14}
                 };//table
  int line[ROWS * COLS];
   for(row=0;row<ROWS;row++)
    for(column=0;column<COLS;column++)
     line[row*COLS+column]=table[row][column];
   for(row=0;row<ROWS*COLS;row++)
     printf("%02d \t",line[row]);
  printf("\n");
return 0;
} // main
