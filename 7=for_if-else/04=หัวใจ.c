#include<stdio.h>
#include<time.h>
#include <unistd.h>   
#include <termios.h>
int Picture_r (char *numfile);
int  Heart (void);
void H_B_D (void);
void Show_Menu (int CountMenu);
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

int main () {
	int num_file=0,CountMenu=0,set=0;
	int NumMenu;
	char ans[3];
	char *numfile;
	struct tm *info;                             
	time_t rawtime;
	char buffer[100];
	do{
		if(CountMenu==0){
			system("clear");
			numfile="welcome.txt";
			Picture_r(numfile);
			printf("\n\n");
			time(&rawtime);
			info = localtime(&rawtime);
			strftime(buffer,100,"\n\t %a %d/%m/%Y %r  \n",info);
			puts(buffer);  
			printf("\n\n");
			printf("\t\t\t ==> H.B.D. Manlika Sontitham <==   \n");
			printf("\t\t\t     Surprise                       \n");  
			printf("\t\t\t     Exit                           \n");
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
		if(CountMenu>3){
			CountMenu=3;
		}else if (CountMenu<1) {
			CountMenu=1;
		}//if CountMenu>4 || CountMenu<0  = set CountMenu 

		if(NumMenu==10) {
			switch(CountMenu) {
				case 1 : 
					H_B_D();
					CountMenu=0;
					break;
				case 2 :
					Heart();
					CountMenu=0;
					break;
				case 3 :
					NumMenu=11;
					break;
			}//switch for CountMenu
		}//if NumMenu == Enter
		Show_Menu(CountMenu);
		printf("\t\t\tSET : %d\n",set);
	}while(NumMenu!=11);
	return 0;
}//main
void H_B_D (void) {
	char *numfile;
 	 numfile="welcome.txt";
	 Picture_r(numfile);
}

void Show_Menu (int CountMenu) {
	char *numfile;
	struct tm *info;                               // time  DAY / Month / year
	time_t rawtime;
	char buffer[100];
	//Show Menu
	system("clear");
	numfile="welcome.txt";
	Picture_r(numfile);
	printf("\n\n");
	time(&rawtime);
	info = localtime(&rawtime);
	strftime(buffer,100,"\n\t %a %d/%m/%Y %r  \n",info);
	puts(buffer);  
	printf("\n\n");
	if(CountMenu==1){
		printf("\t\t\t ==> H.B.D. Manlika Sontitham <==   \n");
	}else {
		printf("\t\t\t     H.B.D. Manlika Sontitham        \n");
	}if(CountMenu==2){
		printf("\t\t\t ==> Surprise <==                    \n");  
	}else {
		printf("\t\t\t     Surprise                        \n");  
	}if(CountMenu==3){
		printf("\t\t\t ==> Exit <==                     \n");
	}else { 
		printf("\t\t\t     Exit                         \n");
	}//Show Menu

}//Show_Menu

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
	return ;
}//Picture_r

int Heart (void) {
	int i,j,num;
	do{
		system("clear");
		printf("\n");
		for(i=1;i<=12;i++) {
			for(j=1;j<=30;j++) {
				if(i==1&&j<=16||i==3&&j==1||i==3&&j==18||i==5&&j==1||i==5&&j==22||i==7&&j==1||i==7&&j==19) {
					printf("*");
				}//if i j
				if(i==9&&j==1||i==9&&j==17||i==11&&j<=16||i==3&&j>4&&j<=7||i==3&&j>11&&j<=14) {
					printf("*");
				}//if i j
				if(i==4&&j==6||i==4&&j==12||i==4&&j==18||i==5&&j==5||i==5&&j==18) {             
					printf("*");
				}//if i j
				if(i==6&&j==7||i==6&&j==17||i==7&&j==7||i==7&&j==14) {                  
					printf("*"); 
				}//if i j
				if(i==2&&j>2&&j<=16||i==3&&j>1&&j<=4||i==3&&j>14&&j<=17) {                           
					printf(".");
				}//if i j
				if(i==4&&j>2&&j<=5||i==4&&j>18&&j<22||i==5&&j>1&&j<=4||i==5&&j>18&&j<22) {           
					printf("."); 
				}//if i j
				if(i==6&&j>2&&j<7||i==6&&j>17&&j<19||i==6&&j>19&&j<22||i==7&&j>1&&j<7||i==7&&j>14&&j<19) { 
					printf("."); 
				}//if i j
				if(i==8&&j>2&&j<9||i==8&&j>14&&j<20||i==9&&j>1&&j<9||i==9&&j>10&&j<17||i==10&&j>2&&j<17) { 
					printf("."); 
				}//if i j
				if(i==8&&j==9||i==8&&j==13||i==9&&j==9) {                  
					printf("*"); 
				}//if i j

				else  {
					printf(" ");
				}//else
			}//for j
			printf("\n");
		}//for i
		printf(" ---------------------------------- \n");
		printf("|To address the program continue ? |\n");
		printf("|    1 = No           2 = Yes      |\n");
		printf(" ---------------------------------- \n");
		scanf("%d",&num);
	}while(num!=2);
	return 0;
}//Heart
