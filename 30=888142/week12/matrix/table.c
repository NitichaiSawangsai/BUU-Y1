
    /* Program name: table.c
       Student:59160668 
       Nitichai Sawangsai
       section:04
    */
    #include "table.h"
    int add2table (yesno tab[M][N],int row,int col) {
    int i,j;
    fprintf(stdout,"%s","Please enter integer");
          for(i=0;i<row;i++) {
             printf("\n");
              for(j=0;j<col;j++) {
                printf("[%d][%d]==> ",i,j);
                scanf("%d",&tab[i][j]);
              }//for j
          }//for i

    return 0;
    }//add2table 
 int outfromtable(yesno tab[M][N],int row,int col) {
   int i,j;
     fprintf(stdout,"%s\n","The table is : ");
           for(i=0;i<row;i++) {
             printf("[");
             for(j=0;j<col;j++){
               printf("%d",tab[i][j]);
             }//for j  
            printf("\n"); 
           }//for i
 return 0;
 }
