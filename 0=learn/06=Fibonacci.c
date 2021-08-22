//Fibonacci
#include<stdio.h>
int main(void)
{
	int z,num,q;
	int previous=-1, result=1;
	printf("intnum num:");
	scanf("%d",&num);
	for(z=0;z<=num;z++){
	q=result+previous;
	previous=result;
	result=q;
	}
	printf("value of fibo:%d\n",result);
}
