#include<stdio.h>
int main () {
	int i,j;
	int center=6;
	printf("\n");
	for(i=1;i<=6;i++) {
		for(j=1;j<=11;j++) {
			if(i==1&&j==6) {
				printf("*");
			}//if i j
			else if(j>center-i && j<center+i) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	for(i=1;i<=2;i++) {
		for(j=1;j<=11;j++) {
			if(j==5||j==6) {
				printf("*");
			}else {
				printf(" ");
			}

		} 
		printf("\n");
	}
}
