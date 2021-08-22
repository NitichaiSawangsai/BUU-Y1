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
    char *num_input_file;
    char *num_w_file;
    int a=1;
//    printf("Enter the name of the file to be created : ");
//    scanf("%s",num_input_file);
       printf("\nEnter your desired file :\n ");
       scanf("%s",num_w_file);

    myfile = fopen("aom.txt","a");
    fprintf(myfile,num_w_file);
    fprintf(stderr," ........... This is HaHa ............\n");
    fclose(myfile);
return 0;
}//main

