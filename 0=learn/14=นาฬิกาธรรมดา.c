    #include<stdio.h>
    #include<stdlib.h>
    void DEL (unsigned long int dt) {
      unsigned int i , j ;
      for (i=0;i<dt;i++) {
       for(j=0;j<128;j++) {
   } // for j
  } //for i
 }// DEL
   int main(){ 
    int s1,s2,s3;
       for(s1=0;s1<=365;s1++) {
        for(s2=0;s2<=23;s2++)  {
         for(s3=0;s3<=59;s3++)  {
             system("clear");
        printf("\t  -------------------  \n");
        printf("\t |  Day %d >> %2d : %2d | \n",s1,s2,s3);
        printf("\t  -------------------  \n");
         DEL(2500000);
        }//for s3
      }//for s2
    }//for s3 
} //main
 
 
