/*Program name : file07.c
  Student : 59160668 
  Nitichai Sawangsai
  Section : 04
*/
#include<stdlib.h>
#include<stdio.h>
int main (void)
{
    FILE*spTemps;
     // ..
      if((spTemps = fopen("outfile.txt","r"))==NULL)
      {
        printf("\aERROR opening outfile.txt \n");
        exit(100);
      }//if open
     // ..
      if(fclose(spTemps)== EOF)
       {
         printf("\aERROR closing temps.dat\n");
         exit(102);
       }//if close
     //..
}//main
