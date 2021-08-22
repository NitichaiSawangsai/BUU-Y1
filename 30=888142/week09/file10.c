/* Program name: ex01.c
   Student : 59160668 
   Nitichai Sawangsai
   section : 04
*/
#include<stdio.h>
int search(int number,int numi,int* num);
int main() {
   int numi,i,sum=0,max,min,number;
   float avg;
	printf ("Please enter the required information : ");
	scanf ("%d", &numi);
   int num[i];
     for(i=0;i<numi;i++) {
       printf("Enter num[%d] : ", i+1);
       scanf("%d", &num[i]);
       if (i==0) {
	   max = min = num[0];
        }//if (i==0)
        if(num[i]>max) {
	   max = num[i];
         }//if(num[i]>max)
        if (num[i] < min) {
	  min = num[i];
         }// if (num[i] < min) 
	sum += num[i];
     }//for(i=0;i<numi;i++)
     avg = sum / i;
     for(i=0;i<numi;i++){
          printf("num[%d] = %d\n",i+1,num[i]);
       }//for(i=0;i<numi;i++)
       printf ("Max = %d\n", max);
       printf ("Min = %d\n", min);
       printf ("Sum = %d\n", sum);
       printf ("Average = %f\n", avg);
       search (number,numi, num);                        //   search    //

return 0;
}//main
 int search (int number, int numi, int* num) {
 int i;
	printf ("Enter your number : ");
	scanf ("%d", &number);
	for(i=0;i<i;i++) {
          if (number == num[i]) {
	     printf ("num[%d]\n",i+1);
           }//if(i = 0;i<i;i++)	
        }//for i
 }//search


