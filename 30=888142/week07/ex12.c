/* Program name : ex11.c
   Student : 59160668 
   Nitichai Sawangsai
   Section : 04 
*/
#include<stdio.h>
  int SWITCH_MENU (int floor,int room,int numMENU);
  int main (void)  {
  int numMENU;
  system("clear");                                                           
        printf("\n\t** * * * * * * * * * * * * * * * * * *\n");	
	printf("\t*             MENU                    \n");
	printf("\t                                     *\n");
	printf("\t*      1. Show Rooms                  \n");
	printf("\t       2. Book a Room                *\n");
	printf("\t       3. Cancellation                \n");
	printf("\t*      4. EXIT                       *\n");
	printf("\t*        			        \n");
	printf("\t** * * * * * * * * * * * * * * * * * *\n");
   int floor;
   int room;
      printf("\nEnter floors : ");
       scanf("%d", &floor);
      printf("Eter rooms : ");
       scanf("%d", &room); 
 do {
        printf("\n\t** * * * * * * * * * * * * * * * * * *\n");	
	printf("\t*             MENU                    \n");
	printf("\t                                     *\n");
	printf("\t*      1. Show Rooms                  \n");
	printf("\t       2. Book a Room                *\n");
	printf("\t       3. Cancellation                \n");
	printf("\t*      4. EXIT                       *\n");
	printf("\t*        			        \n");
	printf("\t** * * * * * * * * * * * * * * * * * *\n");
      printf("\n Please MENU : ");	
      scanf("%d",&numMENU);
       if(numMENU<0 || numMENU>5) {
         printf("\n Please try again\n");
        }
     SWITCH_MENU(floor,room,numMENU);
    }while(numMENU!=4);  
  return 0;
  } // main
  int SWITCH_MENU (int floor,int room,int numMENU) {
   switch(numMENU) {
    int hotel [100][1000]={0};
    int i,j,k;
    int num_bookroom;
    char ans[3];
       case 1 :
                system("clear");
                printf("\n\t\t\t .................. Show Rooms .....................\n");
                for(i=1;i<=floor;i++)  {
		 for(j=1;j<=room;j++) {
	   	    printf("+ROOM+ %d", i);
		    if(j<100 && j>=10) {
		      printf("0");
		     }//if j<100 && j>=10
		    if(j<10) {
		      printf("00");
		    }//j<10
	  	    printf("%d:[%d]\t|\t",j,hotel[i][j]);
                    if(j==5||j==10||j==15||j==20||j==25||j==30||j==35||j==40||j==45||j==50||j==55||j==60) {
                     printf("\n");
                    }//if for \n 
		  }//for j
	  	 printf("\n");
		}//for i
                break;
           case 2 :
              do {
                 system("clear");
                 printf("\n\t\t\t .................. Book a Room .....................\n");
             	 printf("Please select your room reservation.: ");
		 scanf("%d",&num_bookroom);
		 i=num_bookroom/1000;
		 j=num_bookroom%1000;
		   if(hotel[i][j]==0){
		      hotel[i][j]=1;
		   }//if(hotel[i][j] == 0)
		   else if(hotel[i][j] == 1){
		     printf("\n\n\a\tBook a room full Please choose a new room\a\n\n");
		   }//else if(hotel[i][j] == 1)
                 printf("\n NEXT sudent? (yes/no) : ");
                  scanf("%s",&ans);
                 }while(strcmp(ans,"yes") == 0);
                 break;
             case 3 :
                  system("clear");
                  printf("\n\t\t\t .................. Cancellation .....................\n");
                  printf("Please select the room to be canceled : ");
	          scanf("%d",&num_bookroom);
	  	  i=num_bookroom/1000;
		  j=num_bookroom%1000;
		    if(hotel[i][j]==1) {
		      hotel[i][j] = 0;
		    }//if(hoter[i][j]==1
                 break;
              case 4 :
                   system("clear");
                   printf("\n\t\t\t ...................... Exit .....................\n");
                   printf("\t\t\t\n\n\t\t\t\t\t      Goog bey bey              \n\n\n");
                 break;
      }//switch
   }//SWITCH_MENU
