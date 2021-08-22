
using namespace std;
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>     //            system("clear");                //
#include <time.h>       //             /* timer  */                   //
#include <unistd.h>     // /* library of " getch "                 */ //
#include <termios.h>    // /* Taken from the Internet. " getch "   */ //
int getch(void){
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
int main (){
	char *numfile;
        string num[4]={" Menu 1 "," Menu 2 "," Menu 3 "," Exit "};
	int select=1,ch;
	do{
             {
              system("clear"); 
                if(select==1){ 
                     cout<<num[0]<<"<"<<endl 
                         <<num[1]<<endl<<num[2]<<endl<<num[3];
                }if(select==2){ 
                     cout<<num[0]<<endl
                         <<num[1]<<"<\n"<<num[2]<<endl<<num[3];
                }if(select==3){ 
                     cout<<num[0]<<endl
                         <<num[1]<<endl<<num[2]<<"<\n"<<num[3]; 
                }if(select==4){ cout<<num[0]<<endl
                         <<num[1]<<endl<<num[2]<<endl<<num[3]<<"<\n"; }
             }


		switch(ch=getch()) {  // if w = up  && s = down 
			case 119: select = select-1;                        // up for ShowWindows
				  break;
			case 65 : select = select-1;                        // up for ShowWindows
				  break;
			case 115: select = select+1;                        // downs for ShowWindows
				  break;
			case 66 : select = select+1;                        // downs for ShowWindows
				  break;
		}//switch(ch)

		if(select<1){
			select=1;
		}else if(select>4){
			select=4;
		}    
		if(ch==10){
			switch(select){
				case 1:
					break;
				case 2:
					break;
				case 3:
					break;
				case 4: ch=30;
					break;
			}//Switch
		}//if==10
	}while(ch!=30);
}//END main
