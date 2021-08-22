/*Program name : vector.c
     Student : 59160668
     Nitichai Sawangsai
     Section : 04
   */
   #include"vector.h"
   int main (int argc,char*argv[]){
   int vec01[5],vec02[5],vec03[5];
      int i;
     char*vecname;
    /* lnput Vec01 */
    inputvector("vec01",vec01,5);
    /* lnput Vec02 */
    inputvector("vec02",vec02,5);
    /* Process array */
    addvector(vec01,vec02,vec03,5);
     /*Output*/
      outputvector("First  vector",vec01,5);
      outputvector("Second vector",vec02,5);
      outputvector("Output vector",vec03,5);
  return 0;
 }//main

