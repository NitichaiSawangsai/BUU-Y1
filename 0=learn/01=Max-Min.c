/*Program name: mid02.c
student: 59160668 
Nitichai Sawangsai
section:04 
 */
#include<stdio.h>
int main (int argc, char * argv[] ) 
{
	int  num , i , a , max ,min;
	float average =0.00, total=0.00;
	printf("Input amount number : ");
	scanf("%d",&a);      
	for ( i=1; i<=a;i++) {    
		printf("Input number %d ",i);
		scanf("%d",&num);         
		if(i==1){
			max = num;
			min = num;
		}
		if ( num > max ) { 
			max = num ;        
		}
		if ( num < min) {
			min = num ;    
		}
		total = total + num;
	} 
	average = total/a;
	printf("\n Max is %d \n",max);
	printf("\n Min is %d \n",min);
	printf("\n Average is %4.2f \n",average);
	printf("\n Total is %4.2f \n",total);

	return 0;     
}   // aomza 

