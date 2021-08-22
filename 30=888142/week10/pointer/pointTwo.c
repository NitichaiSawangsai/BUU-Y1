/*
  Program name : byvar.c
  Student : 59160668 
  Nitichai Sawangsai
  Section : 04
*/
 #include<stdio.h>
int multwo(int input);
int main (int argc,char*argv[]) {
    int *pval;
    int val;
      val=100;
      pval = &val;
      printf("Value of val = %d\n",val);
      printf("Address of val = %u\n",&pval);
      printf("Address of val = %X\n",&val); // x == a.out   X == byvar
      printf("Value of val = %d\n",*&val);
return 0;
}//main
