#include <stdio.h>
#include <unistd.h>   
#include <termios.h>
int  set_datai    (int set); 
int  Enter_Number (int set); 
int  show_results (int set);
int  Max_Min      (void);
void Exit         (void);
int  getch        (void);
int  Picture_r    (char *numfile);
int main(int argc,char*argv[]) {
	int CountMenu=1,set=0;
	int num_file=0;
	int NumMenu;
	char ans[3];
	char *numfile;
	do{
		if(CountMenu==1){
			system("clear");
			numfile="welcome.txt";
			Picture_r(numfile);
			printf("\n\n");
			printf("\t\t\t ==> clear results <==   \n");
			printf("\t\t\t     Enter the required number    \n");  
			printf("\t\t\t     show results                 \n");  
			printf("\t\t\t     show MAX-Min                 \n");  
			printf("\t\t\t     Exit                         \n");
			printf("\t\t\tSET : %d\n",set);
		}// if CountMenu==1
		switch(NumMenu=getch()){
			case 115 : CountMenu++;
				   break;
			case 119 : CountMenu--;
				   break;
			case 66  : CountMenu++;
				   break;
			case 65  : CountMenu--;
				   break;
			case 97  : set--;
				   break;
			case 100 : set++;
				   break;
			case 68  : set--;
				   break;
			case 67  : set++;
				   break;

		}//switch CountMenu
		if(set<0){
			set=0;
		}//if set<0
		if(CountMenu>=5){
			CountMenu=5;
		}else if (CountMenu<=0) {
			CountMenu=0;
		}//if CountMenu>=5 || CountMenu<=1  = set CountMenu 
		//Show Menu
		system("clear");
		numfile="welcome.txt";
		Picture_r(numfile);
		printf("\n\n");
		if(CountMenu==1){
			printf("\t\t\t ==> clear results <==   \n");
		}else {
			printf("\t\t\t     clear results       \n");
		}if(CountMenu==2){
			printf("\t\t\t ==> Enter the required number <==\n"); 
		}else {
			printf("\t\t\t     Enter the required number    \n"); 
		}if(CountMenu==3){
			printf("\t\t\t ==> show results <==             \n"); 
		}else {
			printf("\t\t\t     show results                 \n"); 
		}if(CountMenu==4){
			printf("\t\t\t ==> show MAX-Min <==             \n"); 
		}else {
			printf("\t\t\t     show MAX-Min                 \n"); 
		}if(CountMenu==5){
			printf("\t\t\t ==> Exit <==                     \n");
		}else { 
			printf("\t\t\t     Exit                         \n");
		}//Show Menu
		printf("\t\t\tSET : %d\n",set);
		if(NumMenu==10) {
			switch(CountMenu) {
				case 1 : 
					system("clear");
					set_data(set);
					CountMenu=0;
					break;
				case 2 :
					system("clear");
					Enter_Number(set);
					CountMenu=0;
					break;
				case 3 :
					system("clear");
					show_results(set); 
					CountMenu=0;
					break;
				case 4 :
					system("clear");
					Max_Min();
					CountMenu=0;
					break;
				case 5 :
					system("clear");
					Exit(); 
					NumMenu=11;
					break;
			}//switch for CountMenu
		}//if NumMenu == Enter
	}while(NumMenu!=11);
	return 0;
}//main 

int set_data (int set){
	int exit=1;
	FILE*myfile;
	do{
		if(exit<1||exit>2){
			system("clear");    
			printf("\n\n\t\t\tกรอกข้อมูลใหม่นะครับ\n");
		}//if exit<1 exit>2
		if(exit==1){     
			system("clear");
			printf("\n\n\n\n\t\tclear results\n");
			myfile=fopen("num_Max-Min.txt","w");
			fclose(myfile);
		}//if exit==1
		printf("\n\n\n");
		printf(" ---------------------------------- \n");
		printf("|To address the program continue ? |\n");
		printf("|    1 = No           2 = Yes      |\n");
		printf(" ---------------------------------- \n");
		scanf("%d",&exit);
	}while(exit<0||exit!=2||exit>3);
	return 0;
}//set_data

int Enter_Number (int set){
	int num_Max_Min[set];
	int i=0,exit=1;
	FILE*myfile;
	do{
		if(exit<1||exit>2){
			system("clear");
			printf("\n\n\t\t\tกรอกข้อมูลใหม่นะครับ\n");
		}//if exit<1 exit>2
		if(exit==1){     
			system("clear");    
			myfile=fopen("num_Max-Min.txt","a");
			for(i=0;i<set;i++){ 
				printf("Numder Max-Min[%d]: ",i+1);
				scanf("%d",&num_Max_Min[i]);
				fprintf(myfile,"%d ",num_Max_Min[i]);
			}//for i
		}//if exit==1
		printf("\n\n\n");
		printf(" ---------------------------------- \n");
		printf("|To address the program continue ? |\n");
		printf("|    1 = No           2 = Yes      |\n");
		printf(" ---------------------------------- \n");
		scanf("%d",&exit);
	}while(exit<0||exit!=2||exit>3);
	fclose(myfile);
	return 0;
}//Enter_Number 

int show_results (int set){
	int thetext,exit=1;
	int result,i=0;
	int number[10000]={0};
	FILE*myfile;
	do{
		if(exit<1||exit>2){
			system("clear");    
			printf("\n\n\t\t\tกรอกข้อมูลใหม่นะครับ\n");
		}//if exit<1 exit>2
		if(exit==1){     
			system("clear");    
			myfile=fopen("num_Max-Min.txt","r");
			result=fscanf(myfile,"%d",&thetext);
			while(result!=EOF) {
				if(thetext=='\t'){
					i++;
				}//if
				else {
					number[i]=thetext;
					i++;
				}//else if (thetest=='\t')
				result = fscanf(myfile,"%d",&thetext);
			}//while(result!=EOF)
			for(i=0;i<=set;i++) {
				printf("a[%d]: %d\n",i,number[i]);
			}//for i 
		}//if exit==1
		printf("\n\n\n");
		printf("\n\n\n");
		printf(" ---------------------------------- \n");
		printf("|To address the program continue ? |\n");
		printf("|    1 = No           2 = Yes      |\n");
		printf(" ---------------------------------- \n");
		scanf("%d",&exit);
	}while(exit<0||exit!=2||exit>3);
	fclose(myfile); 
	return 0;
}//show_results 

int Max_Min  (void) {
	int thetext,result;
	int number[10000]={0};
	int max=0,min=0,i=0,exit=1;
	FILE*myfile;
	do{
		myfile=fopen("num_Max-Min.txt","r");
		result=fscanf(myfile,"%d",&thetext);
		while(result!=EOF) {
			if(thetext=='\t'){
				i++;
			}//if
			else {
				number[i]=thetext;
				////////////// Max-Min //////////////
				if(i==0){
					max=number[i];
					min=number[i];	
				}//if i==0
				if(number[i]>max){
					max=number[i];
				}//if number[i]>max
				if(number[i]<min){
					min=number[i];
				}//if number[i]<min
				i++;
			}//else if (thetest=='\t')
			result = fscanf(myfile,"%d",&thetext);
		}//while(result!=EOF)
		fclose(myfile); 
		if(exit<1||exit>2){
			system("clear");    
			printf("\n\n\t\t\tกรอกข้อมูลใหม่นะครับ\n");
		}//if exit<1 exit>2
		if(exit==1){     
			system("clear");
			printf("\n\n\n\n\n\t\t\t\tMAX = %d\n",max);
			printf("\n\n\n\n\n\t\t\t\tMin= %d\n",min);
		}//if exit==1
		printf("\n\n\n");
		printf(" ---------------------------------- \n");
		printf("|To address the program continue ? |\n");
		printf("|    1 = No           2 = Yes      |\n");
		printf(" ---------------------------------- \n");
		scanf("%d",&exit);
	}while(exit<0||exit!=2||exit>3);
	//return 0;
}//Max_Min

void Exit (void){
	system("clear");
	printf("\n\n\n\n\t\t  Goog bey\n"); 
	printf("\n\n\n\t********* Goog bey ********\n\n"); 
}//Exit

int Picture_r (char *numfile) {
	FILE*myfile;
	char text;
	int result;
	myfile = fopen(numfile,"r");
	result=fscanf(myfile,"%c",&text);
	while(result!=EOF) {
		fprintf(stdout,"%c",text);
		result=fscanf(myfile,"%c",&text);
	}// while(result!=EOF)
	fclose(myfile);
	return 0;
}//Picture_r

int getch (void) {
	struct termios oldattr, newattr;
	int ch;
	tcgetattr( STDIN_FILENO, &oldattr );
	newattr = oldattr;
	newattr.c_lflag &= ~( ICANON | ECHO );
	tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
	ch = getchar();
	tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
	return ch;
}//getch
