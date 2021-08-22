#include <time.h>
#include <termios.h>
#include <stdio.h>
#include <stdlib.h>

// ********** Data Getch ************
static struct termios old, new;
void initTermios(int echo);
void resetTermios(void);
char getch_(int echo);
char getch(void);
// ********** Data Getch ***********

// ********** Data Game  ***********
typedef struct { int Atk; int Def; int Speed; int Luck; int Vit; int Wis; int Point; int MaxHp ; int MaxMp ;int Hp; int Mp; int Exp ; int Lv;}DOS; // DataOfStatus
DOS StatusPlayer = {5,5,5,5,5,5,10,100,50,0,1}; 
DOS StatusEnemy = {0,0,0,0,0,0,0,0,0,0,0}; 
void InterfaceOfStart(int *Chose);
void CreatePlayer(int *Comple , int *Next);
void Battle(char *Mon);
void UpdateStatus(void);
void UpdateEnemy(char *Mon);
void StatusInterface(void);
void InterfaceOfBattle(void);
void LoadingSave(void);
void HowToPlay(void);
void LogoLoad(char *Link);
void InterfaceOfMap(char AreaMap[][99],int *px, int *py, int *Key);
void EventOfIcon(int P,char AreaMap[][99],int *px,int *py,int *Exit , int *Key);
// ********** Data Game  ***********

int main(void) {
   int P, Chose = 1, Comple =0 ,Next = 0, Exit = 0 ,px =2 ,py =2 ,Key =0 ;// CS = ChoseStatus
   char AreaMap[99][99] = {};   
    do{
     system("clear");
     InterfaceOfStart(&Chose);
     switch (Chose){
          case 1 : CreatePlayer(&Comple,&Next);
                   break;
          case 2 : //LoadingSave(); 
                   break;
          case 3 : //HowToPlay();
                   break;
          case 4 : Exit=1;
                   Next=1;
                   break; 
         } // Chose
    }while (Next != 1);
    UpdateStatus();
    InterfaceOfMap(AreaMap,&px,&py,&Key);
    while (Exit !=1){
     P = getch();
     system("clear");
     EventOfIcon(P,AreaMap,&px,&py,&Exit,&Key);
          } 
  }// Main

void InterfaceOfBattle(void){
    int Final = 0,RanMon;
    char NameMon[99];
    srand(time(NULL));
    RanMon = 1 + rand() % 10;
    switch (RanMon){
          case 1 : UpdateEnemy("StatusEnemy01.txt");
                   Battle("Monster01.txt");
                   break;
          case 2 : UpdateEnemy("StatusEnemy01.txt");
                   Battle("Monster01.txt");
                   break;
          case 3 : UpdateEnemy("StatusEnemy01.txt");
                   Battle("Monster01.txt");
                   break;
          case 4 : UpdateEnemy("StatusEnemy01.txt");
                   Battle("Monster01.txt");
                   break;
          case 5 : UpdateEnemy("StatusEnemy01.txt");
                   Battle("Monster01.txt");
                   break;
          case 6 : UpdateEnemy("StatusEnemy01.txt");
                   Battle("Monster01.txt");
                   break;
          case 7 : UpdateEnemy("StatusEnemy01.txt");
                   Battle("Monster01.txt");
                   break;
          case 8 : UpdateEnemy("StatusEnemy01.txt");
                   Battle("Monster01.txt");
                   break;
          case 9 : UpdateEnemy("StatusEnemy01.txt");
                   Battle("Monster01.txt");
                   break;
          case 10: UpdateEnemy("StatusEnemy01.txt");
                   Battle("Monster01.txt");
                   break;
         } 
    do{
      LogoLoad(NameMon);
     }while(Final != 1); 
   }

void Battle(char *Mon){
    
   }
void UpdateEnemy(char *Mon){
    DOS StatusEnemy = {0,0,0,0,0,0,0,0,0,0,0}; 
    FILE *LOGO;
    char Text;     
    int result,Sol,M,i;
    LOGO = fopen(Mon,"r");
    result = fscanf(LOGO,"%c",&Text);
     while (result != EOF){
          if (Text == 'A'){
            Sol = 1;
            M = 1;
           }
          else if (Text == 'D'){
                 Sol = 2;
                 M = 1;
                }
               else if (Text == 'S'){
                      Sol = 3;
                      M = 1;
                     }
                    else if (Text == 'L'){
                           Sol = 4;
                           M = 1;
                          }
                         else if (Text == 'V'){
                                Sol = 5;
                                M = 1;
                               }
                              else if (Text == 'W'){
                                     Sol = 6;
                                     M = 1;
                                    }
                                   else if (Text == 'H'){
                                          Sol = 7;
                                          M = 1;
                                         }
                                        else if (Text == 'M'){
                                               Sol = 8;
                                               M = 1;
                                              }
                                             else if (Text == 'v'){
                                                    Sol = 9;
                                                    M = 1;
                                                   }
                                                  else if(Sol != 0)
                                                        switch (Sol){
                                                             case 1 : StatusEnemy.Atk *= M;
                                                                      StatusEnemy.Atk += Text - '0';
                                                                      M *= 10;
                                                                      break;
                                                             case 2 : StatusEnemy.Def *= M;
                                                                      StatusEnemy.Def += Text - '0';
                                                                      M *= 10;
                                                                      break;
                                                             case 3 : StatusEnemy.Speed *= M;
                                                                      StatusEnemy.Speed += Text - '0';
                                                                      M *= 10;
                                                                      break;
                                                             case 4 : StatusEnemy.Luck *= M;
                                                                      StatusEnemy.Luck += Text - '0';
                                                                      M *= 10;
                                                                      break;
                                                             case 5 : StatusEnemy.Vit *= M;
                                                                      StatusEnemy.Vit += Text - '0';
                                                                      M *= 10;
                                                                      break;
                                                             case 6 : StatusEnemy.Wis *= M;
                                                                      StatusEnemy.Wis += Text - '0';
                                                                      M *= 10;
                                                                      break;
                                                             case 7 : StatusEnemy.MaxHp *= M;
                                                                      StatusEnemy.MaxHp += Text - '0';
                                                                      M *= 10;
                                                                      break;
                                                             case 8 : StatusEnemy.MaxMp *= M;
                                                                      StatusEnemy.MaxMp += Text - '0';
                                                                      M *= 10;
                                                                      break;
                                                             case 9 : StatusEnemy.Lv *= M;
                                                                      StatusEnemy.Lv += Text - '0';
                                                                      M *= 10;
                                                                      break;
                                                            }
          result = fscanf(LOGO,"%c",&Text);
     }// While 
     for (i=1;i<=StatusEnemy.Lv;i++){
        StatusEnemy.Atk += 2;
        StatusEnemy.Def += 1;
        StatusEnemy.Speed += 2;
        StatusEnemy.Luck += 1;
        StatusEnemy.Vit += 3;
        StatusEnemy.Wis += 2;
       }
    StatusEnemy.MaxMp += StatusEnemy.Wis*10;
    StatusEnemy.MaxHp += StatusEnemy.Vit*10;
    StatusEnemy.Hp = StatusEnemy.MaxHp;
    StatusEnemy.Mp = StatusEnemy.MaxMp;
    fclose(LOGO);
   }

void UpdateStatus(void){
    int i;
     for (i=1;i<=StatusEnemy.Lv;i++){
        StatusEnemy.Atk += 2;
        StatusEnemy.Def += 1;
        StatusEnemy.Speed += 2;
        StatusEnemy.Luck += 1;
        StatusEnemy.Vit += 3;
        StatusEnemy.Wis += 2;
       }
    StatusPlayer.MaxMp += StatusPlayer.Wis*10;
    StatusPlayer.MaxHp += StatusPlayer.Vit*10;
    StatusPlayer.Hp = StatusPlayer.MaxHp;
    StatusPlayer.Mp = StatusPlayer.MaxMp;
   }

void StatusInterface(void){
    int i , ObPer=0 , Space= 21;
    printf("Your Hp : ");
    ObPer = StatusPlayer.Hp/(StatusPlayer.MaxHp/25);
    Space -= ObPer;
    for (i = 0; i <= ObPer; i++){
       printf("/");
      }// for i 
    for (i = 0; i <= Space; i++){
       printf(" ");
      }// for i
    printf("%5d/%5d \n",StatusPlayer.Hp,StatusPlayer.MaxHp);
    printf("Your Mp : ");
    ObPer = StatusPlayer.Mp/(StatusPlayer.MaxMp/25);
    Space -= ObPer;
    for (i = 0; i <= ObPer; i++){
       printf("/");
      }// for i 
    for (i = 0; i <= Space; i++){
       printf(" ");
      }// for i
    printf("%5d/%5d \n",StatusPlayer.Mp,StatusPlayer.MaxMp);
   }// interface

void EventOfIcon(int P,char AreaMap[][99],int *px , int *py,int *Exit,int *Key){
    int x=0,y=0,Die = 1,Move,I=1;
    if ( P == 68 || P == 100 ){
      if (AreaMap[*py][*px+1] == ' '){
        AreaMap[*py][*px] = ' ';
        AreaMap[*py][++*px] = 'P';
       }
      else if (AreaMap[*py][*px+1] == 'T'){
             StatusPlayer.Hp -= 25;
             AreaMap[*py][*px] = ' ';
             AreaMap[*py][++*px] = 'P';
             if (StatusPlayer.Hp<=0){
               LogoLoad("Boom.txt");
               Die=0;
               *Exit=1;
              }
            }
           else if (AreaMap[*py][*px+1] == 'K'){
                  AreaMap[*py][*px] = ' ';
                  AreaMap[*py][++*px] = 'P';
                  *Key=1;
                 }
               else if (AreaMap[*py][*px+1] == 'E' ){
                      AreaMap[*py][*px] = ' ';
                      AreaMap[*py][++*px] = 'P';
                      InterfaceOfBattle();   
                     }
                    else if (*Key == 1 ){
                          if (AreaMap[*py][*px+1] == 'D'){
                            AreaMap[*py][*px] = ' ';
                            AreaMap[*py][++*px] = 'P';
                           }
                          }
     }
     else if ( P == 65 || P == 97){
           if (AreaMap[*py][*px-1] == ' '){
             AreaMap[*py][*px] = ' ';
             AreaMap[*py][--*px] = 'P';
            }
           else if (AreaMap[*py][*px-1] == 'T'){
                  StatusPlayer.Hp -= 25;
                  AreaMap[*py][*px] = ' ';
                  AreaMap[*py][--*px] = 'P';
                   if (StatusPlayer.Hp<=0){
                     LogoLoad("Boom.txt");
                     Die=0;
                     *Exit=1;
                    }
                 }
                else if (AreaMap[*py][*px-1] == 'K'){
                       AreaMap[*py][*px] = ' ';
                       AreaMap[*py][--*px] = 'P';
                       *Key =1;
                      }
                     else if (AreaMap[*py][*px-1] == 'E' ){
                            AreaMap[*py][*px] = ' ';
                            AreaMap[*py][--*px] = 'P';
                            InterfaceOfBattle();   
                           }
                          else if (*Key == 1 ){
                                if (AreaMap[*py][*px-1] == 'D'){
                                  AreaMap[*py][*px] = ' ';
                                  AreaMap[*py][--*px] = 'P';
                                 }
                                }
          }
          else if ( P == 83 || P == 115){
                if (AreaMap[*py+1][*px] == ' '){
                  AreaMap[*py][*px] = ' ';
                  AreaMap[++*py][*px] = 'P';
                 }
                else if (AreaMap[*py+1][*px] == 'T'){
                       StatusPlayer.Hp -= 25;
                       AreaMap[*py][*px] = ' ';
                       AreaMap[++*py][*px] = 'P';
                        if (StatusPlayer.Hp<=0){
                          LogoLoad("Boom.txt");
                          Die=0;
                         *Exit=1;
                         }
                      }
                     else if (AreaMap[*py+1][*px] == 'K'){
                            AreaMap[*py][*px] = ' ';
                            AreaMap[++*py][*px] = 'P';
                            *Key =1;
                           }
                          else if (AreaMap[*py+1][*px] == 'E' ){
                                 AreaMap[*py][*px] = ' ';
                                 AreaMap[++*py][*px] = 'P';
                                 InterfaceOfBattle();   
                                }
                               else if (*Key == 1 ){
                                     if (AreaMap[*py+1][*px] == 'D'){
                                       AreaMap[*py][*px] = ' ';
                                       AreaMap[++*py][*px] = 'P';
                                      }
                                     }
                }
                else if ( P == 87 || P == 119){
                       if (AreaMap[*py-1][*px] == ' '){
                         AreaMap[*py][*px] = ' ';
                         AreaMap[--*py][*px] =  'P';
                        }
                       else if (AreaMap[*py-1][*px] == 'T'){
                              StatusPlayer.Hp -= 25;
                              AreaMap[*py][*px] = ' ';
                              AreaMap[--*py][*px] = 'P';
                               if (StatusPlayer.Hp<=0){
                                 LogoLoad("Boom.txt");
                                 Die=0;
                                 *Exit=1;
                                }
                             }
                            else if (AreaMap[*py-1][*px] == 'K'){
                                   AreaMap[*py][*px] = ' ';
                                   AreaMap[--*py][*px] = 'P';
                                   *Key =1;
                                  }
                                 else if (AreaMap[*py-1][*px] == 'E'){
                                        AreaMap[*py][*px] = ' ';
                                        AreaMap[--*py][*px] = 'P';
                                        InterfaceOfBattle();   
                                       }
                                      else if (*Key == 1 ){
                                            if (AreaMap[*py-1][*px] == 'D'){
                                              AreaMap[*py][*px] = ' ';
                                              AreaMap[--*py][*px] = 'P';
                                             }
                                            }
                     }
    if (Die != 0){
      do{
       do{
        if (AreaMap[y][x] =='E'){
          srand(time(NULL));
          Move = ((1+ rand()%4)+I)%4;
          I+=1;
          switch (Move){ 
                case 1 : if (AreaMap[y][x+1] == 'P'){
                           AreaMap[y][x] = ' ';
                           InterfaceOfBattle();   
                          }
                         else if (AreaMap[y][x+1]== ' '){
                                AreaMap[y][x] = ' ';
                                AreaMap[y][x+1] = 'X';
                               }
                              else if (AreaMap[y][x-1] == ' '){
                                     AreaMap[y][x] = ' ';
                                     AreaMap[y][x-1] = 'X';
                                    }
                                   else if (AreaMap[y+1][x] == ' '){
                                           AreaMap[y][x] = ' ';
                                           AreaMap[y+1][x] = 'X';
                                         }
                                        else if (AreaMap[y-1][x] == ' '){
                                               AreaMap[y][x] = ' ';
                                               AreaMap[y-1][x] = 'X';
                                              }
                         break;
                case 2 : if (AreaMap[y][x-1] == 'P'){
                           AreaMap[y][x] = ' ';
                           InterfaceOfBattle();   
                          }
                         else if (AreaMap[y][x-1]== ' '){
                                AreaMap[y][x] = ' ';
                                AreaMap[y][x-1] = 'X';
                               }
                              else if (AreaMap[y][x+1] == ' '){
                                     AreaMap[y][x] = ' ';
                                     AreaMap[y][x+1] = 'X';
                                    }
                                   else if (AreaMap[y+1][x] == ' '){
                                          AreaMap[y][x] = ' ';
                                          AreaMap[y+1][x] = 'X';
                                         }
                                        else if (AreaMap[y-1][x] == ' '){
                                               AreaMap[y][x] = ' ';
                                               AreaMap[y-1][x] = 'X';
                                              }
                         break;
                case 3 : if (AreaMap[y-1][x] == 'P'){
                           AreaMap[y][x] = ' ';
                           InterfaceOfBattle();   
                          }
                         else if (AreaMap[y-1][x]== ' '){
                                AreaMap[y][x] = ' ';
                                AreaMap[y-1][x] = 'X';
                               }
                              else if (AreaMap[y+1][x] == ' '){
                                     AreaMap[y][x] = ' ';
                                     AreaMap[y+1][x] = 'X';
                                    }
                                   else if (AreaMap[y][x+1] == ' '){
                                          AreaMap[y][x] = ' ';
                                          AreaMap[y][x+1] = 'X';
                                         }
                                        else if (AreaMap[y][x-1] == ' '){
                                               AreaMap[y][x] = ' ';
                                               AreaMap[y][x-1] = 'X';
                                              }
                         break;
                case 4 : if (AreaMap[y+1][x] == 'P'){
                           AreaMap[y][x] = ' ';
                           InterfaceOfBattle();   
                          }
                         else if (AreaMap[y+1][x]== ' '){
                                AreaMap[y][x] = ' ';
                                AreaMap[y+1][x] = 'X';
                               }
                              else if (AreaMap[y-1][x] == ' '){
                                     AreaMap[y][x] = ' ';
                                     AreaMap[y-1][x] = 'X';
                                    }
                                   else if (AreaMap[y][x+1] == ' '){
                                          AreaMap[y][x] = ' ';
                                          AreaMap[y][x+1] = 'X';
                                         }
                                        else if (AreaMap[y][x-1] == ' '){
                                               AreaMap[y][x] = ' ';
                                               AreaMap[y][x-1] = 'X';
                                              }
                         break;
               }
         }
        x++;
       }while(AreaMap[y][x] != '\0');
       x=0;
       y++;
      }while(AreaMap[y][x] != '\0');
      x=0;
      y=0;
      do{
       do{
        if (AreaMap[y][x] == 'X'){
          AreaMap[y][x] = 'E';
         }
        printf("%c",AreaMap[y][x]);
        x++;
       }while(AreaMap[y][x] != '\0');
       x=0;
       y++;
      }while(AreaMap[y][x] != '\0');
      printf("\n"); 
      StatusInterface();
     }
   }

void InterfaceOfMap(char AreaMap[][99],int *px , int *py, int *Key){
    FILE *MAP;
    char Text;
    int result,y=0,x=0;
    MAP = fopen("MapLv1.txt","r");
    result = fscanf(MAP,"%c",&Text);
     while (result != EOF){
          //fprintf(stdout,"%c",Text);
          AreaMap[y][x]=Text;
          if (AreaMap[y][x]=='P'){
            *py=y;
            *px=x;
           }
          printf("%c",AreaMap[y][x]);
          result = fscanf(MAP,"%c",&Text);
          if (AreaMap[y][x] == '\n'){
            y++;
            x=0;
           }
          else {
              x++;
             } 
     }// While 
   fclose(MAP);
   *Key =0;
   }

void InterfaceOfStart(int *Chose){
    int P;
     do{
      system("clear");
      LogoLoad("Logo.txt");
      printf("\n\t\t\t\tNewGame   ");
      if (*Chose == 1){
        printf("<");
       } // if Chose 1
      printf("\n\t\t\t\tLoadGame (Coming Soon) ");
      if (*Chose == 2){
        printf("<");
       } // if Chose 2
      printf("\n\t\t\t\tHowToPlay   ");
      if (*Chose == 3){
        printf("<");
       } // if Chose 3
      printf("\n\t\t\t\tExit   ");
      if (*Chose == 4){
        printf("<");
       } // if Chose 1
      printf("\n");
      P = getch();
      if ( P == 87 || P == 119 ){
        *Chose-=1;
         if(*Chose <1)
          *Chose=1;
       }
      if ( P == 83 || P == 115 ){
        *Chose+=1;
         if(*Chose >4)
          *Chose=4;
       }
      system("clear");
     }while( P != 10);
    }

void CreatePlayer (int *Comple,int *Next){
    int CS =1 ,P;
     do{
      *Comple = 0;
      LogoLoad("Status.txt");
      printf("\n\tAtk : %d ",StatusPlayer.Atk);
      if (CS == 1){
        printf("<");
       }
      printf("\n\tDef : %d ",StatusPlayer.Def);
      if (CS == 2){
        printf("<");
       }
      printf("\n\tSpeed : %d ",StatusPlayer.Speed);
      if (CS == 3){
        printf("<");
       }
      printf("\n\tLuck : %d ",StatusPlayer.Luck);
      if (CS == 4){
        printf("<");
       }
      printf("\n\tVit : %d ",StatusPlayer.Vit);
      if (CS == 5){
        printf("<");
       }
      printf("\n\tWis : %d ",StatusPlayer.Wis);
      if (CS == 6){
        printf("<");
       }
      printf("\nYou Have Point to up: %d",StatusPlayer.Point);
      printf("\n\nBack");
      if (CS == 7){
        printf("<");
       }
      printf("\t\t\tNext");
      if (CS == 8){
        printf("<");
       }
      printf("\n");
      P = getch();
      if (P == 10 && CS == 7){
        *Comple = 1;
       }
      if (P == 10 && CS == 8){
        *Comple = 1;
        *Next = 1;
       }
      if ( P == 87 || P == 119 ){
        CS--;
        if ( CS < 1){
          CS =1;
         }
       }
      if ( P == 83 || P == 115 ){
        CS++;
        if ( CS > 8){
          CS =8;
         }
       }
       if ( P == 68 || P == 100){
         if (CS == 1){
           if (StatusPlayer.Point >0){
             StatusPlayer.Atk++;
             StatusPlayer.Point--;
             }
          }
         if (CS == 2){
           if (StatusPlayer.Point >0){
             StatusPlayer.Def++;
             StatusPlayer.Point--;
            }
          }
         if (CS == 3){
           if (StatusPlayer.Point >0){
             StatusPlayer.Speed++;
             StatusPlayer.Point--;
            }
          }
         if (CS == 4){
           if (StatusPlayer.Point >0){
             StatusPlayer.Luck++;
             StatusPlayer.Point--;
            }
          }
         if (CS == 5){
           if (StatusPlayer.Point >0){
             StatusPlayer.Vit++;
             StatusPlayer.Point--;
            }
          }
         if (CS == 6){
           if (StatusPlayer.Point >0){
             StatusPlayer.Wis++;
             StatusPlayer.Point--;
            }
          }
        }
       if ( P == 65 || P == 97 ){
         if (CS == 1){
           if (StatusPlayer.Atk >1){
             StatusPlayer.Atk--;
             StatusPlayer.Point++;
            }
          }
         if (CS == 2){
           if (StatusPlayer.Def >1){
             StatusPlayer.Def--;
             StatusPlayer.Point++;
            }
          }
         if (CS == 3){
           if (StatusPlayer.Speed >1){
             StatusPlayer.Speed--;
             StatusPlayer.Point++;
            }
          }
         if (CS == 4){
           if (StatusPlayer.Luck >1){
             StatusPlayer.Luck--;
             StatusPlayer.Point++;
            }
          }
         if (CS == 5){
           if (StatusPlayer.Vit >1){
             StatusPlayer.Vit--;
             StatusPlayer.Point++;
            }
          }
         if (CS == 6){
           if (StatusPlayer.Wis >1){
             StatusPlayer.Wis--;
             StatusPlayer.Point++;
            }
          }
        }
      system("clear");
     }while( *Comple != 1);
   }

void LogoLoad(char *Link){ 
    FILE *LOGO;
    char Text;
    int result;
    LOGO = fopen(Link,"r");
    result = fscanf(LOGO,"%c",&Text);
     while (result != EOF){
          fprintf(stdout,"%c",Text);
          result = fscanf(LOGO,"%c",&Text);
     }// While 
    fclose(LOGO);
   }
// ********** Data Game  ***********

// ************************Data Getch *********************************
void initTermios(int echo) {
  tcgetattr(0, &old); /* grab old terminal i/o settings */
  new = old; /* make new settings same as old settings */
  new.c_lflag &= ~ICANON; /* disable buffered i/o */
  new.c_lflag &= echo ? ECHO : ~ECHO; /* set echo mode */
  tcsetattr(0, TCSANOW, &new); /* use these new terminal i/o settings now */
}
/* Restore old terminal i/o settings */
void resetTermios(void) {
  tcsetattr(0, TCSANOW, &old);
}
/* Read 1 character - echo defines echo mode */
char getch_(int echo) {
  char ch;
  initTermios(echo);
  ch = getchar();
  resetTermios();
  return ch;
}

/* Read 1 character without echo */
char getch(void) {
  return getch_(0);
}
// ***********************Data Getch ************************
