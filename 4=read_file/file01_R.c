/*Program name : file01.c
  Student : 59160668 
  Nitichai Sawangsai
  Section : 04
*/
#include<stdio.h>
int main (int argc,char*argv[])
{
    FILE*myfile;
    char thetext;
    int result;
    char *aom;
    printf("Enter the name of the file to be created : ");
    scanf("%s",aom);
    myfile = fopen(aom,"r");
    result = fscanf(myfile,"%c",thetext);
    while(result!=EOF) 
    {
      fprintf(stdout,"%c",thetext);
      result = fscanf(myfile,"%c",&thetext);
    }//while(result!=EOF)
    fclose(myfile);
return 0;
}//main

