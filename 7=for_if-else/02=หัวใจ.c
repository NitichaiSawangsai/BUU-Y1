//หัวใจ
#include<stdio.h>
int main () {
	int i,j;
	printf("\n");
	for(i=1;i<=12;i++) {
		for(j=1;j<=30;j++) {
			if(i==1&&j<=16||i==3&&j==1||i==3&&j==18||i==5&&j==1||i==5&&j==22||i==7&&j==1||i==7&&j==19) {
				printf("*");
			}//if i j
			if(i==9&&j==1||i==9&&j==17||i==11&&j<=16) {
				printf("*");
			}//if i j
			if(i==2&&j>2&&j<=16||i==3&&j>1&&j<=4||i==3&&j>14&&j<=17) {                            //line 1
				printf(".");
			}//if i j
			if(i==3&&j>4&&j<=7||i==3&&j>11&&j<=14) {
				printf("-");
			}//if i j
			if(i==4&&j>2&&j<=5||i==4&&j>18&&j<22||i==5&&j>1&&j<=4||i==5&&j>18&&j<22) {            //line 2
				printf("."); 
			}//if i j
			if(i==4&&j==6||i==4&&j==13||i==4&&j==18||i==5&&j==5||i==5&&j==18) {             
				printf("-");
			}//if i j
			if(i==6&&j>2&&j<7||i==6&&j>18&&j<22||i==7&&j>1&&j<7||i==7&&j>14&&j<19) {              //line 3
				printf("."); 
			}//if i j
			if(i==6&&j==7||i==6&&j==17||i==7&&j==6||i==7&&j==14) {                  
				printf("-"); 
			}//if i j
			if(i==8&&j>2&&j<9||i==8&&j>14&&j<20||i==9&&j>1&&j<9||i==9&&j>10&&j<17||i==10&&j>2&&j<17) { 
				printf("."); 
			}//if i j
			if(i==8&&j==9||i==8&&j==13||i==9&&j==9) {                  
				printf("-"); 
			}//if i j

			else  {
				printf(" ");
			}
		}
		printf("\n");
		}
	}//main
