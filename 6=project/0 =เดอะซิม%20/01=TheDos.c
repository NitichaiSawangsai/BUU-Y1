// เดอะ ซิม 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void RateOfStatus(float Status[], int *time, int *TimeRate ,int *Talk, int *GOH, int *GO, int *Event, int *Day, float RateOfEvent[]);
void Display(char name[] ,float Status[], int time, int Day , int TE);
void Time(int time , int Day);
void Question(int *turn ,int *Where, float RateOfEvent[], int Event, int *TE);
void StatusInterface(char *ObjectName, float Status);
int main(int argc ,char *argv[]){
   char name[99];
   int i, turn = 0, time = 360 ,TimeRate =1 ,Talk =0 ,GOH =0 , GO = 0, Event = 100, TE = 0, ES =0 , Where =1, Day =1;
    // Where [1] = BedRoom // Where [2] = Toilet // Where [3] = Kitchen // Where [4] = Living Room  // Where [5] = WorkingRoom // Where [6] = Park
   float Status[99] = {100,100,100,100,100,100},
    // [0]Hungry  [1]Sleep [2] Shower [3]Toilet [4]Happy [5]Relation
         BOS[99] = {0}; //Backup Of Status
   system("clear");
   printf("Please Enter Name : ");
   scanf("%s",&name);
   Display(name,Status,time,Day,TE); 
   do {
     float RateOfEvent[99] = {0};
     turn = 0;
     Question(&turn,&Where,RateOfEvent,Event,&TE);
     system("clear");
      for (i = 0; i < turn ; i++){
         system("clear");
         RateOfStatus(Status,&time,&TimeRate,&Talk,&GOH,&GO,&Event,&Day,RateOfEvent);
         Display(name,Status,time,Day,TE); 
        } // for
   }while(GO != 1 && GOH != 1 && ES != 1);
  }//main
 
void RateOfStatus(float Status[], int *time, int *TimeRate ,int *Talk, int *GOH, int *GO, int *Event, int *Day, float RateOfEvent[]){
    // RateOfEvent
    Status[0] += RateOfEvent[0];
    Status[1] += RateOfEvent[1];
    Status[2] += RateOfEvent[2];
    Status[3] += RateOfEvent[3];
    Status[4] += RateOfEvent[4];
    Status[5] += RateOfEvent[5];
    // Hungry
    Status[0] -= 0.14;
     if (Status[0] >= 75){
       Status[4] += 0.45;
       *GOH = 0;
      } // if 75%
     else if (Status[0] <= 25 && Status[0]>0){
            Status[4] -= 0.3;
            *GOH = 0;
           } // if 25%
          else if (Status[0] <= 0){
                 *GOH = 1;
                } // if 0% 
    // Sleep
    Status[1] -= 0.1;
     if (Status[1] >= 75){
       Status[4] += 0.5;
       *TimeRate = 1;
      } // if 75%
     else if (Status[1] <= 25){
            *TimeRate = 2;
             if (Status[1] <= 0){
               Status[1] = 100;
               Status[0] -= 25;
               *time += 480;
              } // if 0%
           } // if 25%
    // Shower
    Status[2] -= 0.2;
     if (Status[2] >= 75){
       Status[4] += 0.3;
       *Talk = 0 ;
      } // if 75%
     else if (Status[2] <= 25){
            Status[4] -= 0.2;
            *Talk = 0 ;
             if (Status[2] <= 0){
               Status[4] -= 0.5;
               *Talk = 1 ;
              } // if 0%
           } // if 25%
    // Toilet
    Status[3] -= 0.16;
     if (Status[3] >= 75){
       Status[4] += 0.2;
       *TimeRate = 1;
      } // if 75%
     else if (Status[3] <= 25){
            *TimeRate = 2;
             if (Status[3] <= 0){
               Status[3] = 100;
               Status[2] = 0;
              } // if 0%
           } // if 25%
    // Happy
    Status[4] -= 0.3;
     if (Status[4] >= 75){
       *Event = 200;
      } // if 75%
     else if (Status[4] >= 50){
            *Event = 100;
           } // if 50%
          else if (Status[4] >= 25){
                 Status[3] -= 0.5;
                 *Event = 50;
                  if (Status[4] <=0){
                    *Event =  25;
                   } // if 0%
                } // if 25%
    // Relation
    Status[5] -= 0.14;
     if (Status[5] >= 75){
       Status[4] += 0.25;
       *GO = 0;
      } // if 75%
     else if (Status[5] <= 25 && Status[5] >=0){
            Status[4] -= 0.2;
            *GO = 0;
           } // if 25%
          else if (Status[5] <= 0){
                 Status[4] -= 0.5;
                  if (Status[5] <=0 && Status[4] <=0){
                    *GO = 1;
                   }// if GaveOver
                } // if 0% 
    // Time
    *time += 1 * *TimeRate;
     if (*time > 1440){
       *time = 0;
       *Day +=1;
      } // if Time clear 
    // Limit Status
     // [0]Hungry  [1]Sleep [2] Shower [3]Toilet [4]Happy [5]Relation
     if (Status[0]>=100){
       Status[0] =100;
      }// if Hungry 100%
     else if (Status[0]<=0){
            Status[0] = 0;
           }// if Hungry 0%
     if (Status[1]>=100){
       Status[1] =100;
      }// if Sleep 100%
     else if (Status[1]<=0){
            Status[1] = 0;
           }// if Sleep 0%
     if (Status[2]>=100){
       Status[2] =100;
      }// if Shower 100%
     else if (Status[2]<=0){
            Status[2] = 0;
           }// if Shower 0%
     if (Status[3]>=100){
       Status[3] =100;
      }// if Toilet 100%
     else if (Status[3]<=0){
            Status[3] = 0;
           }// if Toilet 0%
     if (Status[4]>=100){
       Status[4] =100;
      }// if Happy 100%
     else if (Status[4]<=0){
            Status[4] = 0;
           }// if Happy 0%
     if (Status[5]>=100){
       Status[5] =100;
      }// if Ralation 100%
     else if (Status[5]<=0){
            Status[5] = 0;
           }// if Ralation 0%
   }// RateOfStatus

void Display(char name[] , float Status[], int time, int Day, int TE){
    printf("*******************************************************\n");
    printf("Your name : %s\n",name);
    Time(time,Day);
    StatusInterface("Hungry   ",Status[0]);
    StatusInterface("Sleep    ",Status[1]);
    StatusInterface("Shower   ",Status[2]);
    StatusInterface("Toilet   ",Status[3]);
    StatusInterface("Happy    ",Status[4]);
    StatusInterface("Relation ",Status[5]);
    printf("\n*******************************************************\n");
   }// Display

void Time(int time ,int Day){
    int Hour,Min,Sol;
    Min = time;
    Hour = time/60;
    Sol = Hour;
    Sol *= 60;
    Min -= Sol;
    printf("Time : %02d:%02d Day : %03d",Hour,Min,Day);
   }

void Question(int *turn ,int *Where, float RateOfEvent[], int Event, int *TE){
    // Where [1] = BedRoom // Where [2] = Toilet // Where [3] = Kitchen // Where [4] = Living Room  // Where [5] = WorkingRoom // Where [6] = Park
    int Key;
    int PercenEvent;
    srand(time(NULL));
    PercenEvent = 1 + rand() % Event;
     switch (*Where){
           case 1 : printf("\nAt BedRoom\n"); 
                    printf("1.Sleep ( Sleep +0.6 )\n");
                    printf("2.Jumping On The Bed ( Happy +1.5 , Shower -0.4 )\n");
                    printf("3.Going To Toilet\n");
                    printf("4.Going To Kitchen\n");
                    printf("5.Going To Living Room\n");
                    printf("6.Going To Working Room\n");
                    printf("7.Going To Park\n");
                    printf("*******************************************************\n");
                     do {
                       printf("What'll you do : ");
                       scanf("%d",&Key);
                        switch (Key){
                           case 1 : RateOfEvent[1] = 0.7 ;
                                    printf("How long to do that (0 for cancel) : ");
                                    scanf("%d",&*turn);
                                    break;
                           case 2 : RateOfEvent[4] = 1.7 ;
                                    RateOfEvent[2] = -0.4; 
                                    printf("How long to do that (0 for cancel) : ");
                                    scanf("%d",&*turn);
                                    break;
                           case 3 : *Where = 2;
                                    *turn = 5;
                                    break;
                           case 4 : *Where = 3;
                                    *turn = 5;
                                    break;
                           case 5 : *Where = 4;
                                    *turn = 5;
                                    break;
                           case 6 : *Where = 5; 
                                    *turn = 5;
                                    break;
                           case 7 : *Where = 6;
                                    *turn = 15;
                                    break;
                           default: printf(" !! TryAgain !! ");
                       }// Switch Key
                    }while( Key<1 && Key >7);
                   break; 
           case 2 : printf("\nAt Toilet\n"); 
                    printf("1.Defecate ( Toilet +100 )\n");
                    printf("2.Shower ( Shower +100 )\n");
                    printf("3.Play Bubble ( Shower +50 Fun+25 )\n");
                    printf("4.Going To Bed Room\n");
                    printf("5.Going To Kitchen\n");
                    printf("6.Going To Living Room\n");
                    printf("7.Going To Working Room\n");
                    printf("8.Going To Park\n");
                    printf("*******************************************************\n");
                     do {
                       printf("What'll you do : ");
                       scanf("%d",&Key);
                        switch (Key){
                           case 1 : RateOfEvent[3] = 10.2;
                                    *turn = 10; 
                                    break;
                           case 2 : RateOfEvent[2] = 3.6;
                                    *turn = 30; 
                                    break;
                           case 3 : RateOfEvent[3] = 1.35;
                                    RateOfEvent[4] = 0.6;
                                    *turn = 45; 
                                    break;
                           case 4 : *Where = 1;
                                    *turn = 5;
                                    break;
                           case 5 : *Where = 3;
                                    *turn = 5;
                                    break;
                           case 6 : *Where = 4;
                                    *turn = 5;
                                    break;
                           case 7 : *Where = 5; 
                                    *turn = 5;
                                    break;
                           case 8 : *Where = 6;
                                    *turn = 15;
                                    break;
                           default: printf(" !! TryAgain !! ");
                       }// Switch Key
                    }while( Key<1 && Key >8);
                   break; 
           case 3 : printf("\nAt Kitchen\n"); 
                    printf("1.Cooking Omelet ( Hungry +35 | 20 Minute )\n");
                    printf("2.Cooking Fried rice ( Hungry +75 | 30 Minute )\n");
                    printf("3.Cooking Turkey ( Hungry +100 | 40 Minute )\n");
                    printf("4.Drink Coffee ( Hungry +10 Sleep +3 | 10 Minute )\n");
                    printf("5.Going To Bed Room\n");
                    printf("6.Going To Toilet\n");
                    printf("7.Going To Living Room\n");
                    printf("8.Going To Working Room\n");
                    printf("9.Going To Park\n");
                    printf("*******************************************************\n");
                     do {
                       printf("What'll you do : ");
                       scanf("%d",&Key);
                        switch (Key){
                           case 1 : RateOfEvent[0] = 1.9;
                                    *turn = 20; 
                                    break;
                           case 2 : RateOfEvent[0] = 2.7;
                                    *turn = 30; 
                                    break;
                           case 3 : RateOfEvent[0] = 4;  
                                    *turn = 40; 
                                    break;
                           case 4 : RateOfEvent[0] = 1;
                                    RateOfEvent[1] = 0.3;
                                    *turn = 40; 
                                    break;
                           case 5 : *Where = 1;
                                    *turn = 5;
                                    break;
                           case 6 : *Where = 2;
                                    *turn = 5;
                                    break;
                           case 7 : *Where = 4;
                                    *turn = 5;
                                    break;
                           case 8 : *Where = 5; 
                                    *turn = 5;
                                    break;
                           case 9 : *Where = 6;
                                    *turn = 15;
                                    break;
                           default: printf(" !! TryAgain !! ");
                       }// Switch Key
                    }while( Key<1 && Key >9);
                   break; 
           case 4 : printf("\nAt Living Room\n"); 
                    printf("1.Playing Game ( Happy +1 )\n");
                    printf("2.Dance on The Floor ( Happy +2.5 Shower -0.5 )\n");
                    printf("3.Talk With Someone ( Relation Random + 25 | - 25 | 30 Minute )\n");
                    printf("4.Going To Bed Room\n");
                    printf("5.Going To Toilet\n");
                    printf("6.Going To Kitchen\n");
                    printf("7.Going To Working Room\n");
                    printf("8.Going To Park\n");
                    printf("*******************************************************\n");
                     do {
                       printf("What'll you do : ");
                       scanf("%d",&Key);
                        switch (Key){
                           case 1 : RateOfEvent[4] = 1.16;
                                    printf("How long to do that (0 for cancel) : ");
                                    scanf("%d",&*turn);
                                    break;
                           case 2 : RateOfEvent[4] = 2.5;
                                    RateOfEvent[3] = 0.5;
                                    printf("How long to do that (0 for cancel) : ");
                                    scanf("%d",&*turn);
                                    break;
                           case 3 : if (PercenEvent <= 25){
                                      RateOfEvent[5] = -0.8;
                                      *turn = 30;
                                     }
                                    else {
                                      RateOfEvent[5] = 0.8;
                                      *turn = 30;
                                     }
                                    break;
                           case 4 : *Where = 1;
                                    *turn = 5;
                                    break;
                           case 5 : *Where = 2;
                                    *turn = 5;
                                    break;
                           case 6 : *Where = 3;
                                    *turn = 5;
                                    break;
                           case 7 : *Where = 5; 
                                    *turn = 5;
                                    break;
                           case 8 : *Where = 6;
                                    *turn = 15;
                                    break;
                           default: printf(" !! TryAgain !! ");
                       }// Switch Key
                    }while( Key<1 && Key >8);
                   break; 
           case 5 : printf("\nAt Working Room\n"); 
                    printf("1.Working On Computer ( )\n");
                    printf("2.Hack Someone (  )\n");
                    printf("3.Trolling on Web ( Happy + 25 | Relation - 40 | 15 Minute )\n");
                    printf("4.Going To Bed Room\n");
                    printf("5.Going To Toilet\n");
                    printf("6.Going To Kitchen\n");
                    printf("7.Going To Living Room\n");
                    printf("8.Going To Park\n");
                    printf("*******************************************************\n");
                     do {
                       printf("What'll you do : ");
                       scanf("%d",&Key);
                        switch (Key){
                           case 1 : printf("How long to do that (0 for cancel) : ");
                                    scanf("%d",&*turn);
                                    break;
                           case 2 : printf("How long to do that (0 for cancel) : ");
                                    scanf("%d",&*turn);
                                    break;
                           case 3 : RateOfEvent[5] = -2.7;
                                    RateOfEvent[4] = 1.7; 
                                    *turn = 15; 
                                    break;
                           case 4 : *Where = 1;
                                    *turn = 5;
                                    break;
                           case 5 : *Where = 2;
                                    *turn = 5;
                                    break;
                           case 6 : *Where = 3;
                                    *turn = 5;
                                    break;
                           case 7 : *Where = 4; 
                                    *turn = 5;
                                    break;
                           case 8 : *Where = 6;
                                    *turn = 15;
                                    break;
                           default: printf(" !! TryAgain !! ");
                       }// Switch
                    }while( Key<1 && Key >8);
                   break; 
           case 6 : printf("\nAt Park\n"); 
                    printf("1.Jogging (Happy +3 | Shower -0.6 |  )\n");
                    printf("2.Going To Home\n");
                    printf("*******************************************************\n");
                     do {
                       printf("What'll you do : ");
                       scanf("%d",&Key);
                        switch (Key){
                           case 1 : printf("How long to do that (0 for cancel) : ");
                                    scanf("%d",&*turn);
                                    break;
                           case 2 : *Where = 4;
                                    *turn = 15;
                                    break;
                           default: printf(" !! TryAgain !! ");
                       }// Switch
                    }while( Key<1 && Key >8);
                   break; 
   }//Switch Where 
 } //Question 
void StatusInterface(char *ObjectName ,float Status){
    int i , ObPer=0 , Space=21;
    printf("\n %s : ",ObjectName);
    ObPer = Status;
    ObPer /= 5;
    Space -= ObPer;
    for (i = 0; i <= ObPer; i++){
       printf("/");
      }// for i 
    for (i = 0; i <= Space; i++){
       printf(" ");
      }// for i
    printf("%5.2f%c ",Status,'%');
   }// interface

