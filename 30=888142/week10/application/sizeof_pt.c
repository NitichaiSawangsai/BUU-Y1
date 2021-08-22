/*Program name :  Sizeof_pt.c
  Student: 59160668
  Nitichai Sawangsai 
  Section : 04 
*/
#include<stdio.h>
int main (void) {
  char c;
  char *pc;
     int sizeofc = sizeof(c);
      int sizeofpc  = sizeof(pc);
       int sizeofStarpc = sizeof(*pc);
        int a;
         int *pa;
          int sizeofa = sizeof(a);
          int sizeofpa= sizeof(pa);
          int sizeofStarpa =  sizeof(*pa);        
     double x;
     double *px;
     int sizeofx = sizeof(x);
     int sizeofpx = sizeof(px);
     int sizeofStarpx = sizeof(*px);
 // Statements
    printf("    sizeof(c  ) : %3d    | ",sizeofc);
    printf("sizeof(pc ) : %3d    | ",sizeofpc);
    printf("sizeof(*pc) : %3d\n  | ",sizeofStarpc);
    printf("sizeof(a  ) : %3d    | ",sizeofa);
    printf("sizeof(pa ) : %3d    | ",sizeofpa);
    printf("sizeof(*pa) : %3d\n  | ",sizeofStarpa);
    printf("sizeof(x  ) : %3d    | ",sizeofx);
    printf("sizeof(px ) : %3d    | ",sizeofpx);
    printf("sizeof(*px) : %3d\n  | ",sizeofStarpx);
 return 0;
 }//main
