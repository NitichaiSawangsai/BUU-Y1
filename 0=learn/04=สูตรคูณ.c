#include <termios.h>
#include <unistd.h>

#include<stdio.h>
 int getch(void);
 int getche(void);
 void multi (void);
  int main(int argc,char*argv[])  {        
  char aom1;
  char a;

printf(" กด w เมนู1\n");
printf(" กด s เมนู2\n");
a=getche();
 if(a=='w') {
system("clear");
          printf("\t               MENU                    \n");
          printf("\t                                       \n");
          printf("\t       1. Multiplication table  <      \n");
          printf("\t       2. EXIT                         \n");
          multi();
  }//if(a=='w')

  else if(a=='s') {
  system("clear");
          printf("\t               MENU                   \n");   
          printf("\t                                      \n");
          printf("\t       1. Multiplication table        \n");
          printf("\t       2. EXIT                  <     \n");
  }// else if(a=='s')
  printf("\n"); 
return ;     
}// main  
   void multi (void) { 
     int numStart,numStop,i,j;
      do {
        printf("Input Num Start : ");
        scanf("%d",&numStart);
         printf("Input Num Stop : ");
         scanf("%d",&numStop);
           if(numStart>numStop) {
              printf("\t\t\t...... ใส่ค่าใหม่ .......\n");
            }//if (numStart>numStop)
         }while(numStart>numStop);
          printf("\t\t***** สูตรคูณ ***** \n");
           for(i=numStart;i<=numStop;i++) {
            for(j=1;j<=12;j++){
              printf("%d * %d = %d \n",i,j,(i*j));
            }//for j
            printf("\n");
          }//for i
    }//multiTable(n)
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
  }//getch
  /* reads from keypress, echoes */
  int getche(void) {
      struct termios oldattr, newattr;
      int ch;
      tcgetattr( STDIN_FILENO, &oldattr );
      newattr = oldattr;
      newattr.c_lflag &= ~( ICANON );
      tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
      ch = getchar();
      tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
      return ch;
  }//getche

