#include <stdio.h>
#include<stdlib.h>
int main (void){
    int num1;
        system("clear");  
        system("pause");
    while(1){
        printf("1.Red\n");
        printf("2.Green\n");
        printf("3.Black\n");
        printf("4.Pink\n");
        printf("5.Blue\n");
        printf("0.Exit\n\n");
         
        printf("Select->Color :");
        scanf("%d",&num1);
        if(num1==1){
            printf("You Color is Red\n");
        }
        if(num1==2){
            printf("You Color is Green\n");
        }
        if(num1==3){
            printf("You Color is Black\n");
        }
        if(num1==4){
            printf("You Color is Pink\n");
        }
        if(num1==5){
            printf("You Color is Blue\n");
        }        
        if(num1==0){
            break;    
        }  
	system("ipconfig");
    } 
scanf(""); 
}
//</stdio.h>
