/*Program name : ary_and_pointer01.c
  Student : 59160668 
  Nitichai Sawangsai
  Section : 04
*/
#include<stdio.h>
int main (int argc,char*argv[]) {
  int a[5]={3,4,9,10,55};
  printf("%d%d",*a,a[0]);
  int *p;
  p = &a[1];
  printf("%d %d",a[0],p[-1]);
  printf("\n");
  printf("%d %d",a[1],p[0]);
return 0;
}//main
