#include <termios.h>
#include <unistd.h>
#include <stdio.h>
/* reads from keypress, doesn't echo */
int getch(void);
 int getche(void);
 int main()
     {
          char a;
          int i=0,j=0,v=0,p=11,o=0;
          do{
        for(i=1;i<=10;i++)
            {
             for(j=1;j<=10;j++)
                 {
                  v++;
                    if(p==v)
                  printf("p");
                    else
                      printf("*");
                 } 
                  printf("\n");
            } 
             v=0;              
             a=getche();
               if(a=='w')
                {
                p-=10;  
                }
             else if(a=='s')
                    {
                    p+=10;
                    }             
             else if(a=='a')
                    {
                    p-=1;
                    }             
             else if(a=='d')
                    {
                    p+=1;
                    }             
            }while(p>0&&p<101);
                

 return 0;
     }


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
/* reads from keypress, echoes */
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
