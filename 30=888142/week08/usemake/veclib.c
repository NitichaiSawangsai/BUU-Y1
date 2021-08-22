/* Program name : veclib.c
      Student : 59160668
      Nitichai Sawangsai
      Section : 04
  */
   #include "vector.h"
   int inputvector(char*vecname,int vector[],int size) {
      int i;
        for(i=0;i<size;i++) {
          printf("Enter %s[%d]",vecname,i);
          scanf("%d",&vector[i]);
       }//for i input
  return 0;
  }//inputvector
  int addvector(int adder[],int addin[],int result[],int size) {
      int i;
        for (i=0;i<size;i++) {
           result[i] = adder[i] + addin[i];
        }//for i
  return 0;
  }//addvector
  int outputvector(char *vecname, int vector[], int size) {
     int i;
       printf("%s\n",vecname);
      for(i=0;i<size;i++) {
         printf("%d :",vector[i]);
       } //for i
     printf("\n");
  return 0 ;
  }// outputvector


