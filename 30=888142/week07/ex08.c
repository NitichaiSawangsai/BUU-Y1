/* Program name : ex08.c
   Student : 59160668 
   Nitichai Sawangsai
   Section : 04 
*/
#include<stdio.h>
  void inputSize(int *arraySize);
  void inputVal(int arr[],int size);
  void showVal(int arr[],int size);
  int  getSum(int arr[],int size);
  int  getAvg(int arr[],int size);
  int  maxmai(int arr[],int size);
  int main (void) 
   {
     int arraySize,sum,avg;
       inputSize(&arraySize);
       printf("arraySize : %d\n",arraySize);
       int arr[arraySize];
       printf("\n ++++++ Input  ++++++\n\n");
       inputVal(arr,arraySize);
       printf("\n ++++++ Show result  ++++++\n\n");
       showVal(arr,arraySize);
       sum = getSum(arr,arraySize);
       printf("Sum : %d\n",sum);
       avg = getAvg(arr,arraySize);
       printf("Avg : %d\n",avg); 
	   printf("\n ++++++ Max Min  ++++++\n\n");
       maxmai(arr,arraySize);
  return 0;
   } // main
   void inputSize(int *arraySize) 
   {
     printf("Input Unit of Number : ");
     scanf("%d",arraySize);
   }//inputSize
   void inputVal(int arr[],int size) 
   {
      int i;
       for(i=0;i<size;i++) 
	   {
         printf("Input Value of arr[%d] : ",i);
         scanf("%d",&arr[i]);
       }//for i
   }//inputVal
   void showVal(int arr[],int size) 
   {
     int i;
       for(i=0;i<size;i++) 
	   {
         printf("Value of arr[%d] : %d\n",i,arr[i]);
       }//for i
   }//showVal
    int getSum(int arr[],int size)  
   {
     int sum=0,i;
     for(i=0;i<size;i++) 
	   {
         sum+=arr[i];
       }//for i
     return sum;
   }//getSum
    int getAvg(int arr[],int size) 
   {
     int sum=0,i;
      for(i=0;i<size;i++) 
	   {
         sum+=arr[i];
       }//for i
     return sum/size;
   }//getAvg
  int  maxmai(int arr[],int size) 
   {
   	int min,max,i;
   	 for(i=0;i<size;i++) 
	  {
           if(i==1)
           {
              max=arr[i];
              min=arr[i];
           }//if(i==1)
           if(arr[i]>max) 
           { 
              max = arr[i] ;        
           }//if(arr[i]>max)
            if(arr[i]<min) 
           {
              min = arr[i] ;      
           }//if(arr[i]<min)  
  
       }//for i   
      printf("\n Max = %d \n",max);
      printf("\n Min = %d \n",min);
      printf("\n Then yeah it 555 \n");
     return max,min;
   }//maxmai                                              
                                                       
