/*Program name : file04.c
  Student : 59160668 
  Nitichai Sawangsai
  Section : 04
*/
#include<stdio.h>
int main (int argc,char*argv[])
{
    FILE*myfile;
    char thetext;
    myfile = fopen("outfile.txt","r");
    fprintf(myfile,"%c",&thetext);
    fprintf(stdout,"%c\n",thetext);
   
    fclose(myfile);
return 0;
}//main
