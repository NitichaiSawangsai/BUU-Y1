/*Program name : file05.c
  Student : 59160668 
  Nitichai Sawangsai
  Section : 04
*/
#include<stdio.h>
int main (int argc,char*argv[])
{
    FILE*in,*out;
    char thetext;
    int result;

    in  = fopen("infile.txt","r");
    out = fopen("outfile.txt","w");
    result = fscanf(in,"%c",&thetext);
    while(result!=EOF) 
    {
      fprintf(out,"%c",thetext);
      result = fscanf(in,"%c",&thetext);
    }//while(result!=EOF)
    fclose(in);
    fclose(out);
return 0;
}//main
