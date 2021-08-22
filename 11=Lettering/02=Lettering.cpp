using namespace std;
#include <stdio.h>      //              Language  C                   //
#include <iostream>     //              Language  C++                 //
#include <string.h>     //             Input Letter                   //
#include <stdlib.h>     //            system("clear");                //
#include <time.h>       //             /* timer 1 */                  //
#include <ctime>        //             /* timer 2 */                  //
#include <unistd.h>     // /* library of " getch "                 */ //
#include <termios.h>    // /* Taken from the Internet. " getch "   */ //
int getch (void);
void START(){
	int aa=52;
	int i,l;
	char H[600];
	for(l=0;l<600;l++){
		H[l]=0;
		H[0]='|';
		H[50]='|';
		H[100]='|';
		H[150]='|';
		H[200]='|';
		H[250]='|';
		H[300]='|';
		H[350]='|';
		H[400]='|';
		H[450]='|';
		H[500]='|';
		H[550]='|';
	}
	while(1){

		char GGGG;
		for(i=0;i<600;i++){
			H[aa]=1;
			if(H[i]==0){
				cout <<" ";
				if((i+1)%50==0){
					cout << "|";
					cout << endl;
				}
			}
			else if(H[i]==1){
				cout << "I";
			}
			else{
				cout << H[i];
                        }
			if(i==599){
				cout<<" ------------------------------------------------"<<endl;
			}

		}
		GGGG=getch();
		H[aa]=GGGG;

		aa++;
		system("clear");
		cout<<" ------------------------------------------------"<<endl;
	}
}
int main (){
//	START();

	          string ch,PP;
		    int ee=70,j=0;
		    getline(cin,ch); PP+=ch;
		    j=ch.size();
		    ee=(ee-j)-2;
		    for(int i=0;i<ee;i++){
		    PP+=" ";
		    if(i==(ee-1)){
		    PP+="|";
		    }
		    }
		    cout<<" ____________________________________________________________________"<<endl;
		    cout<<"|"<<PP<<endl<<endl;
	 

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



