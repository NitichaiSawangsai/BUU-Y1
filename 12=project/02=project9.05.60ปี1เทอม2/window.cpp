using namespace std;
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>     //            system("clear");                //
#include <time.h>       //             /* timer  */                   //
#include <unistd.h>     // /* library of " getch "                 */ //
#include <termios.h>    // /* Taken from the Internet. " getch "   */ //
void File_r_window();
struct Picture {
	char Picture_Data[3000];
};struct Picture  Data[1000];
void Select (int Select);
int getch  (void);
int main (){
	char *numfile;
	int ch,select=1;
	do{
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
			select=4;
		}else if (select>4){
			select=1;
		} 
		Select(select); // void Select (int select)
		if(ch==10){
			switch(select) {   
				case 1:  
					break;
				case 2:  
					break;
				case 3:  
					break;
				case 4: ch=11;
                                        cout<<"Good bey"<<endl; 
					break;

			}// switch(select)

		}//if(ch==10) 

	}while(ch!=11);
	return 0;
}//End main
void Select (int select){
system("clear");
             File_r_window();
              cout<<Data[0].Picture_Data;


 
	if(select==1){
		cout<<"|\t\t\t==> Name a new project <==        \t\t\t  |"<<endl;
		cout<<"|\t\t\tAccess database                   \t\t\t  |"<<endl;
		cout<<"|\t\t\tDelete database                   \t\t\t  |"<<endl;
		cout<<"|\t\t\tExit the program                  \t\t\t  |"<<endl;
	}else if (select==2){
		cout<<"|\t\t\tName a new project                \t\t\t  |"<<endl;
		cout<<"|\t\t\t==> Access database <==           \t\t\t  |"<<endl;
		cout<<"|\t\t\tDelete database                   \t\t\t  |"<<endl;
		cout<<"|\t\t\tExit the program                  \t\t\t  |"<<endl;
	}else if (select==3){
		cout<<"|\t\t\tName a new project                \t\t\t  |"<<endl;
		cout<<"|\t\t\tAccess database                   \t\t\t  | "<<endl;
		cout<<"|\t\t\t==> Delete database <==           \t\t\t  |"<<endl;
		cout<<"|\t\t\tExit the program                  \t\t\t  |"<<endl;
	}else if (select==4){
		cout<<"|\t\t\tName a new project                \t\t\t  |"<<endl;
		cout<<"|\t\t\tAccess database                   \t\t\t  |"<<endl;
		cout<<"|\t\t\tDelete database                   \t\t\t  |"<<endl;
		cout<<"|\t\t\t==> Exit the program <==          \t\t\t  |"<<endl;
	}// if (select) 
                for(int i=0;i<14;i++){
	        cout<<"|\t\t\t                                  \t\t\t  |"<<endl;
                }cout<<" _________________________________________________________________________________ "<<endl;
            

}//Select
void File_r_window(){
        FILE*myfile;
	char thetext;
	int result;
	int j=0,i=0,row=1;
	myfile=fopen("window1.dat","r");
	result=fscanf(myfile,"%c",&thetext);
	while(result != EOF){
		if(thetext=='^'){
			j=0;
			i++;
		}//if text == ^
		else if(row==1){
			Data[i].Picture_Data[j]=thetext;
			j++;
		}//else if row==1
		result = fscanf(myfile,"%c",&thetext);
	}// result != EOF
	fclose(myfile);            
} 
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

