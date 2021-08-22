 #include "nisit.h"

 int Fine_r (char *numfile) {
       FILE*myfile;
       char text;
       int result;
       myfile = fopen(numfile,"r");
       result=fscanf(myfile,"%c",&text);
       while(result!=EOF) {
          fprintf(stdout,"%c",text);
          result=fscanf(myfile,"%c",&text);
       }// while(result!=EOF)
       fclose(myfile);
 }// Fine_r    
