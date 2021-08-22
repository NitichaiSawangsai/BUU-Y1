#include "59160668tor.h"

int main () {
	char *numfile;
	int ch,ch_score_windows;
	int select=1,game_up_dows=1,select_score_windows=1;
	int i;

	do {
		switch(ch=getch()) {  // if w = up  && s = down && D = right       
			case 119: select = select-1;          		    // up for ShowWindows
				  game_up_dows = game_up_dows+1;            // up for game up and dows
				  break;
			case 65 : select = select-1;   		  	    // up for ShowWindows
				  game_up_dows = game_up_dows+1;            // up for game up and dows
				  break;
			case 115: select = select+1;	 	            // downs for ShowWindows
				  game_up_dows = game_up_dows-1;            // dows for game up and dows
				  break;
			case 66 : select = select+1;                        // downs for ShowWindows
				  game_up_dows = game_up_dows-1;            // dows for game up and dows
				  break;
		}//switch(ch)

		if(game_up_dows>2) {                   // /*    game_up_dows         //
			game_up_dows=2;
		}//game_up_dows>3
		if(game_up_dows<1) {        
			game_up_dows=1;
		}//game_up_dows<0                      //       game_up_dows    */   //


		if(select>4) {                         // /*    ShowWindows          //
			select=4;
		}//if select>4
		if(select<1) {
			select=1;
		}//if select<1                         //       ShowWindows     */   //

		if(ch==10) { //if ENTER
			switch(select) { // switch " select "
				case 1:  system("clear");
					 NAME_USE();                        
					 break; 
				case 2:  
					 system("clear");
					 do {
						 switch(ch_score_windows=getch()) { // if  A = left && D = right
							 case 97  : select_score_windows = select_score_windows-1;									  //left
								    break;
							 case 100 : select_score_windows = select_score_windows+1;									  //right
								    break;
							 case 68  : select_score_windows = select_score_windows-1;									  //left
								    break;
							 case 67  : select_score_windows = select_score_windows+1;									  //right
								    break;
						 }//switch(ch_score_windows)

						 if(select_score_windows>3) {
							 select_score_windows=2;
						 }//if select_score_windows>3
						 if(select_score_windows<0) {
							 select_score_windows=1;
						 }//if select_score_windows<0

						 if(select_score_windows==1) {
							 system("clear");
							 printf("\n\n\t==> exit <==");
							 printf("\t\t\t\t\t\t\t\t clear score ");
							 numfile="score.dat";
							 Picture_r (numfile);
						 }//if select_score_windows==1
						 if(select_score_windows==2) {
							 system("clear");
							 printf("\n\n\t   exit    ");
							 printf("\t\t\t\t\t\t\t\t==> clear scoer  <==");
							 numfile="score.dat";
							 Picture_r (numfile);
						 }//if select_score_windows==2

						 if(ch_score_windows==10) {  //if ENTER
							 switch(select_score_windows) {
								 case 1: ch_score_windows=11;
									 break;
								 case 2: clear_score_windows();
									 break;;
							 }//switch(select_score_windows)
						 }//if ch_score_windows ==10

					 }while(ch_score_windows!=11);

					 break;
				case 3: system("clear"); 
					Profile(); 
					break;
				case 4: ch = 11 ; 
					break;
			}//swith(select)
		}//ch==10  */
		ShowWindows(select,game_up_dows);                // ShowWindows(select)
	}while(ch !=11);
}//main
