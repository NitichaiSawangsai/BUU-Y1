/*Program name : file01.c
  Student : 59160668 
  Nitichai Sawangsai
  Section : 04
*/
#include<stdio.h>
int main (int argc,char*argv[]) {
    FILE*myfile;
    char thetext;
    int result;
    char *num_input1_file;
    int a=1;
       printf("\nEnter your desired file you 1:\n ");
       scanf("%s\n",num_input1_file);
    myfile = fopen("aom.txt","a");
    fprintf(myfile,"\n\t\t\t\t\t my : \n\t\t\t\t\t      %s",num_input1_file);
    fprintf(myfile,"\n  my friend : \n\t      %s",num_input1_file);
    fprintf(stderr," ........... This is HaHa ............\n");
    fclose(myfile);
return 0;
}//main

