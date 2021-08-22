/*
  Program name : byvar.c
  Student : 59160668 
  Nitichai Sawangsai
  Section : 04
*/
 #include<stdio.h>
int multwo(int input);
int main (int argc,char*argv[]) {
   int value;
   value =10;
   printf("Before Call : value = %d\n",value);
   multwo(value);
   printf("After  Call : value = %d\n",value);
    
return 0;
}//main
  int multwo(int input) {  
     printf("Function: Before multiply: input = %d\n",input);
     input = input*2;
     printf("Function: After  multiply: input = %d\n",input);
     input = input*2;
   return 0;
  }//multwo
