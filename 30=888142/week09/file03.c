/*Program name : file03.c
  Student : 59160668 
  Nitichai Sawangsai
  Section : 04
*/
#include<stdio.h>
int main (int argc,char*argv[])
{
    FILE*myfile;
    myfile = fopen("outfile.txt","a");
    fprintf(myfile,"Burapha University\n");
    fprintf(stderr,"This is my error\n");
   
    fclose(myfile);
return 0;
}//main
