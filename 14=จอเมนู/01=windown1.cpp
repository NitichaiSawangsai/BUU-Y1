
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
	int select=1,ch;
	do{
             if(select==1){
                system("clear");
                 cout<<"==> Maune 1 <=="<<endl;
                 cout<<"    Maune 2    "<<endl;
                 cout<<"    Maune 3    "<<endl;
                 cout<<"    Exit       "<<endl;
             }else if(select==2){
                system("clear");
                 cout<<"    Maune 1    "<<endl;
                 cout<<"==> Maune 2 <=="<<endl;
                 cout<<"    Maune 3    "<<endl;
                 cout<<"    Exit       "<<endl;
             }else if(select==3){
                system("clear");
                 cout<<"    Maune 1    "<<endl;
                 cout<<"    Maune 2    "<<endl;
                 cout<<"==> Maune 3 <=="<<endl;
                 cout<<"    Exit       "<<endl;
             }else if (select==4){
                system("clear");
                 cout<<"    Maune 1    "<<endl;
                 cout<<"    Maune 2    "<<endl;
                 cout<<"    Maune 3    "<<endl;
                 cout<<"==> Exit    <=="<<endl;
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
