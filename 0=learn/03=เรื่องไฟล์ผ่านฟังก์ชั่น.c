#include<stdio.h>
 int Picture_r (char *numfile);
int main (int argc,char*argv[])
{
    char aom[10];
    char *s;
    printf("Enter the name of the file to be created : ");
    scanf("%s",aom);
    s=aom;
    Picture_r(s);
return 0;
}//main
 int Picture_r (char *numfile) {
       FILE*myfile;
       char text;
       int result;
       myfile = fopen(numfile,"w");
       result=fscanf(myfile,"%c",&text);
       while(result!=EOF) {
          fprintf(stdout,"%c",text);
          result=fscanf(myfile,"%c",&text);
       }// while(result!=EOF)
       fclose(myfile);
  }//Picture_r     
