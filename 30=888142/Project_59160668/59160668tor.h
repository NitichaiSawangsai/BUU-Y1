
#include <stdio.h>
#include <time.h>       //             /* timer  */                   //
#include <unistd.h>     // /* library of " getch "                 */ //
#include <termios.h>    // /* Taken from the Internet. " getch "   */ //
#define LINE_NUM1_Lv1 62
#define LINE_NUM2_Lv1 19
#define LINE_NUM1_Lv2 69
#define LINE_NUM2_Lv2 77
#define LINE_NUM3_Lv2 74 
int getch               (void);
int Lv1                 (char *first_Name,char *last_Name);
int Lv2                 (char *first_Name,char *last_Name,int score_Lv1,double timeout_Lv1);
int clear_score_windows (void);
int Profile             (void); 
void NAME_USE           (void);
int Picture_r           (char *numfile);    
int Picture_a   (char *first_Name,char *last_Name,int score_Lv1,int score_Lv2,double timeout_Lv1,double timeout_Lv2); 
int ShowWindows         (int select,int game_up_dows);
typedef struct{
	char game[100];
}GAME;
GAME Dangame[100];

