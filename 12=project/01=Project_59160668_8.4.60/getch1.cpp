#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <iostream>
using namespace std; 
int mygetch() {
  struct termios oldt,newt;
  int ch;
  tcgetattr( STDIN_FILENO, &oldt );
  newt = oldt;
  newt.c_lflag &= ~( ICANON | ECHO );
  tcsetattr( STDIN_FILENO, TCSANOW, &newt );
  ch = getchar();
  tcsetattr( STDIN_FILENO, TCSANOW, &oldt );
  return ch;
}
int main (){
  int ch;
      cin>>(ch=mygetch());
      cout<<ch<<endl;
}
