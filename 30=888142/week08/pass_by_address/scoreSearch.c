/*Program name : file01.c
  Student : 59160668 
  Nitichai Sawangsai
  Section : 04
*/
#include<stdio.h>
int main() {
  int num,i,sum;
  int nisit[] = {10,15,36,29,14,25,14,15,32,20};
	printf("Enter score : ");
	scanf("%d", &num);
  	for(i=0;i<10;i++) {
		if(num==nisit[i]) {
		  printf("Nisit number : %d\n",i+1);
		}else {
		   sum += 1;
		}//else for if num ==  nisit[i]
	}// for i
	 if(sum==10) {
            printf(" ****** No score data ! ******\n");
	 }// if (num==10)
return 0;
}//main

