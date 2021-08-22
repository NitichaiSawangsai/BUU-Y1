/*
  Program name : byvar.c
  Student : 59160668 
  Nitichai Sawangsai
  Section : 04
*/
 #include<stdio.h>
int multwo(int input);
int main (int argc,char*argv[]) {
    int val;
      val=100;
      printf("Value of val = %d\n",val);
      printf("Address of val = %d\n",&val);
      printf("Address of val = %X\n",&val); // x == a.out   X == byvar
      printf("Value of val = %d\n",*&val);
return 0;
}//main
