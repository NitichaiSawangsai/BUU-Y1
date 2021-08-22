/*Program name : Pointer.c
  Student : 59160668 
  Nitichai Sawangsai
  Section : 04
*/
#include<stdio.h>
int main (int argc,char*argv[]) {
  int a;
  int *p=&a;
  int **r =&p;
  printf("Enter number : ");
  scanf("%d",&a);
  printf("value    of a is %d\n",a);
  printf("adddress of a is %d\n",&a);
  printf("adddress of p is %d\n",&p);
  printf("adddress of r is %d\n",&r);
  p=&a;
  r=&p;
  printf("p             is %d\n",p); 
  printf("*p            is %d\n",*p);
  printf("&*p           is %d\n",&*p);
  printf("r             is %d\n",r);
  printf("*r            is %d\n",*r);
  printf("&*r           is %d\n",&*r);
  printf("**r           is %d\n",**r);
  printf("&**r          is %d\n",&**r);
return 0;
}//main
