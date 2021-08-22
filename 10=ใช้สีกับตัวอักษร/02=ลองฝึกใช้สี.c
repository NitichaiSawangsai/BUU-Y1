#include <stdio.h>  
#include <windows.h>    
#define textcolor(txt,back) 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), back*16+txt)
#define resetcolor() 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15)
int main() {
textcolor(12,10);
printf("Chayrug Kaniknant\n"); 
resetcolor();
printf("Normal\n");
textcolor(0,14 );
printf("Chayrug Kaniknant\n");     
resetcolor();
return 0;
}
