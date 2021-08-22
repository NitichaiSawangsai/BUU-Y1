/* Program name : ex09.c
   Student : 59160668 
   Nitichai Sawangsai
   Section : 04 
*/
#include <stdio.h>
int process (int row,int col);
void output (int row,int col);
int main(void)
{
      system("clear");
      printf("\n");
      ////////// input ////////////////////
      int row,col;
      printf("\n=========== Input ============\n\n");
      printf("Ples Enter Rows = ");
      scanf("%d",&row);
      printf("Ples Enter Column = ");
      scanf("%d",&col);    
      ///////// process and output /////////
      int table[row][col];
      process(row,col);
      output(row,col);
return 0;
}//main
  int process (int row,int col)
  {    
       int i,j;
       int table[row][col];
        printf("\n=========== Input ============\n\n");
	for(i=0;i<=row;i++)
        {
		for(j=0;j<=col;j++)
                {
                  printf("Ples Enter [%d]{%d] : ",i,j);
                  scanf("%d",&table[i][j]);
		}//for j
	}//for i
  }//process
  void output (int row,int col)
  {
       int i,j;
       int table[row][col];
        printf("\n========== Output ============\n\n");
	for(i=0;i<=row;i++)
        {
		for(j=0;j<=col;j++)
                {
		   printf("%d : ",table[i][j]);
		}//for j
        printf("\n");
	}//for i
  }//output
