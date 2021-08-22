/*Program name : vector.c
  Student : 59160668
  Nitichai Sawangsai 
  Section : 04   
*/
#include<stdio.h>
int inputvector(char*vecname,int vector[],int size);
int main (int argc,char*argv[])
{
   int vec01[5],vec02[5],vec03[5];
   int i;
   char*vecname;
  /* lnput Vec01 */
  inputvector("vec01",vec01,5);
  /* lnput Vec02 */
  inputvector("vec02",vec02,5);
  /* Process array */
   for (i=0;i<5;i++)
   {
    vec03[i]=vec01[i]+vec02[i];
   }//for i Process

   /*Output*/
   printf("Output vector\n");
       for (i=0;i<5;i++)
       {
          printf("%d :",vec03[i]);

       }//for i output
   printf("\n");
return 0;
}//main
  int inputvector(char*vecname,int vector[],int size) 
  {
    int i;
      for (i=0;i<size;i++)
      { 
         printf("Enter %s[%d]",vecname,i);
         scanf("%d",&vector[i]);
      }//for i
return 0;
  }//inputvector
