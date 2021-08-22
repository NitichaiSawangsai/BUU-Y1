#include <termios.h>
#include <unistd.h>
#include <stdio.h>
#include "stdio.h"
#include "string.h"
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
char user[10],user1[]="Nitichai",pass[10],pass1[]="Sawangsai";
int U,P,C[9],i;

char Alluser(){
         return strcmp(user,user1); }

char Allpass(){
         return strcmp(pass,pass1); }

char UP(){
          for(i=0;i<=9;i++){
                    C[i]=getch();
                    if(C[i]==1) { break; }
                              pass[i]=C[i];
                              printf("*");
                    }
          }

char main(){
          printf("*** Please Login ***\n");
          printf("  Username:");// gets(user); 
          printf("  Password:");
          UP();
          printf("\n--------------------------------\n");
          U=Alluser();
          P=Allpass();
                    if(U==0 && P==0)
                              printf("Hello! Mr. Cpe-Programming \nNice to meet you.\n");
                    else
                              printf("You not Mr. Cpe-Programming .\n");
          printf("\n\n********* By Cpe-Programming link >> cpe-programming.blogspot.com*********\n");
          return 0;
 }
