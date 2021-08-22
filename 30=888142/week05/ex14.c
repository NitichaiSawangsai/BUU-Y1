     	
     /*Program name: ex14.c
       student: 59160668 Nitichai Sawangsai
       section:04 
     */
  	  
   #include<stdio.h>
   int main (int argc, char * argv[] ) 
 {
     int  i, j , a , max ,min;

     for ( i=1; i<=10;i++) {  // Think positive conditions before every one. Was determined to do it 10 times
     printf("Enter a number ( 0 - 999 ) : ");
      scanf("%d",&a);      // showinput 
     printf(" number = %d\n",a);     
	if(i==1){  //process
	max = a;
	min = a;
	}
     if ( a > max ) { 
       max = a ;         //Storage Max 
   }
     if ( a < min) {
       min = a ;      // Storage Min
   }
  
   }   
      printf("\n Max = %d \n",max);
      printf("\n Min = %d \n",min);
      printf("\n Have a good day \n");
  
return 0;     
 }   // aomza 

