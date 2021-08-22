#include<stdio.h>
int main (void) {
  int a;
  int *p;
    a=14;
    p=&a;
  printf("a=%d  &a=%p \n",a,&a);
  printf("p=%p  *p=%d  a=%d\n",p,*p,a);
 return 0;
}//main

