#include <termios.h>
#include <unistd.h>
#include <stdio.h>
int main() {
	int i,ch;
	char aom[1000]={0};
	do{
		ch=getch();
		if(ch=='A'){
			aom[0]='A';
		}//if
		if(ch=='o'){
			aom[1]='o';
		}//if
		if(ch=='m'){
			aom[2]='m';
		}//if
	        printf("*");
		if(ch==10){
		}//if
	}while(ch!=10);
printf("\n");
for(i=0;i<10;i++){
printf("login[%d]=%c\n",i,aom[i]);                      
}


	return 0;
}//main
int getch(void)
{
	struct termios oldattr, newattr;
	int ch;
	tcgetattr( STDIN_FILENO, &oldattr );
	newattr = oldattr;
	newattr.c_lflag &= ~( ICANON | ECHO );
	tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
	ch = getchar();
	tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
	return ch;
}
int getche(void)
{
	struct termios oldattr, newattr;
	int ch;
	tcgetattr( STDIN_FILENO, &oldattr );
	newattr = oldattr;
	newattr.c_lflag &= ~( ICANON );
	tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
	ch = getchar();
	tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
	return ch;
}
