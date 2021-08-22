/*Program name : file01.c
  Student : 59160668 
  Nitichai Sawangsai
  Section : 04
*/
#include<stdio.h>
double average(int size,int ary[]);
int main (void) {
    int size;
    double ave;
    printf("How many numbers doyou want to average?");
    scanf("%d",&size);
    {      // Create and fill variable-length array
        int ary[size];
        int i;
         for(i=0;i<size;i++) {
          printf("Enter number %2d: ",i+1);
          scanf("%d",&ary[i]);
          }//for i
         ave = average(size,ary);
    } // Fill array block
    printf("Average is: %lf",ave);
return 0;
}//main
 double average(int size,int ary[]) {
      int sum=0;
      int i;
      for(i=0;i<size;i++)
          sum+=ary[i];
  return (double)sum/size;
 }//average
