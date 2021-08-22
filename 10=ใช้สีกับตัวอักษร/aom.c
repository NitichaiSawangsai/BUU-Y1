#include <stdio.h>
#include "color.h"
int main() {
textcolor(VIOLET,DARKYELLOW );
printf("Chayrug Kaniknant\n"); 
resetcolor();
printf("Normal\n");
textcolor(BLACK,YELLOW );
printf("Chayrug Kaniknant\n");     
resetcolor();
return 0;
