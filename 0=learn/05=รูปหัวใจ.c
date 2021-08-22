
#include<stdio.h>
int main (void) {
	int i, j,l,num =1,E;
	printf("Enter Value Of i : ");
	scanf("%d",&E);  

	for(i=0;i<=(E-1);i++){
		for(j=0;j<=i;j++){
			printf("%02d",j);
			//printf(" *");
		}for(j=0;j<2*((E-1)-i);j++){
			printf("  ");
		}for(j=i;j>-1;j--){
			printf("%02d",j);
			//printf("* ");
		}// for(j=-1;j<i;j++)&&for(j=i;j>-1;j--)
		printf("\n");	
	}//for i  ( 1 )
	for(i=E;i>=1;i--) {
		for(l=1;l<num;l++){
			printf("  ");
		}
		for(j=1;j<=i*2;j++)    {
			printf("%02d",j);
		}
		printf("\n"); 
		num++;
	}

printf("Happy birthday\n");


/*
//หัวใจที่2
        printf("\n");

	for(i=0;i<=(E-1);i++){
            printf("\t\t   ");
		for(j=0;j<=i;j++){
			printf("%02d",j);
			//printf(" *");
		}for(j=0;j<2*((E-1)-i);j++){
			printf("  ");
		}for(j=i;j>-1;j--){
			printf("%02d",j);
			//printf("* ");
		}// for(j=-1;j<i;j++)&&for(j=i;j>-1;j--)
		printf("\n");	
	}//for i  ( 1 )
	for(i=E;i>=1;i--) {
		for(l=1;l<num;l++){
			printf("  ");
		}
		for(j=1;j<=i*2;j++)    {
			printf("%02d",j);
		}
		printf("\n"); 
		num++;
	}
 
        printf("\n");
*/


	return 0;     
}   // aomza  

