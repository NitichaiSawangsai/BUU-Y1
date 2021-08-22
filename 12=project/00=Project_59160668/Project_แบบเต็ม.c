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

		if(game_up_dows>3) {                   // /*    game_up_dows         //
			game_up_dows=2;
		}//game_up_dows>3
		if(game_up_dows<0) {        
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

void NAME_USE (void) {
	char first_Name[10], last_Name[10];
	int IN_Name;
	char *numprofile;
	printf("\n\n\n\t\t\t................. Please enter your first name and last name ............... \n\n\n");
	printf("Enter your first name : ");
	scanf("%s", first_Name);
	printf("Enter your last  name : ");
	scanf("%s", last_Name);
	printf("Your full name is: %s %s\n",first_Name,last_Name);
	printf("\n\t\t\t\t\t\t\t\t\t  ==>  Next <== \n\n");
	do {

		if((IN_Name=getch())==10) {
			if((IN_Name=getch())==10) {
				system("clear");
	printf("\n\n\n\t\t\t................. Please enter your first name and last name ............... \n\n\n");
				printf("Enter your first name : %s\n",first_Name);
				printf("Enter your last  name : %s\n",last_Name);
				printf("Your full name is: %s %s\n", first_Name, last_Name);
				numprofile="Advice.dat";
				Picture_r (numprofile);
				if((IN_Name=getch())==10) {
					IN_Name=11;
				}//if (IN_Name=getch())==10
			}//if (IN_Name=getch())==10
		}//if (IN_Name=getch())==10
	}while(IN_Name!=11);
	Lv1(first_Name,last_Name);                         //           data_Lv1               //    
	IN_Name=11;
}//NAME_USE

int Profile (void) {
	char profile;
	char *numprofile;
	do {
		system("clear");
		numprofile="Profile0.dat";
		Picture_r (numprofile);
		if((profile=getch())==10) {
			system("clear");
			numprofile="Profile1.dat";
			Picture_r (numprofile);
			if((profile=getch())==10) {
				system("clear");
				numprofile="Profile2.dat";
				Picture_r (numprofile);
				if((profile=getch())==10) {
					profile=27;
				}//if ENTER3
			}//if ENTER2
		}//if ENTER 1  

	}while(profile!=27);
}//Profile


int Lv1 (char *first_Name,char *last_Name) {
	char Input;
	int i,j,k,score_Lv1=0;
	char line1[LINE_NUM1_Lv1] = { 
		'S','u','n','d','a','y',' ',' ','M','o','n',
		'd','a','y',' ',' ','T','u','e','s','d','a',
		'y',' ',' ','W','e','d','n','e','s','d','a',
		'y',' ',' ','T','h','u','r','s','d','a','y',
		' ',' ','F','r','i','d','a','y',' ',' ','S',
		'a','t','u','r','d','a','y'                  };
	char line2[LINE_NUM2_Lv1] = { 
		'1',' ','2',' ','3',' ','4',' ','5',' ','6',
		' ','7',' ','8',' ','9',' ','0'              };
        sleep(1);
	time_t start_t, end_t;
	double timeout_Lv1;
	char ch;
	printf("Starting of the program...\n");
	time(&start_t);
	// LINE 1_LV1    
	for(i=0;i<LINE_NUM1_Lv1;i++) {
		system("clear");
		printf("\n\n\n\n\n\n\n\n\n");
		printf("\t\t\t");
		for(j=0;j<LINE_NUM1_Lv1;j++){                //   /*  first (1)   LINE1_LV1      //      
			if (j==i) {
				printf("V");
			}//if j==i
			else {		
				printf(" ");
			}//else
		}// for j<LINE_NUM1
		printf("\n");
		printf("\t\t\t");
		for(k=0;k<LINE_NUM1_Lv1;k++) {    
			printf("%c",line1[k]);
		}//for K<LINE_NUM1                          //       first (1)   LINE1_LV1    */ //
		printf("\n");
		printf("\t\t\t");
		for(k=0;k<LINE_NUM2_Lv1;k++) {              //  /*   second (2)  LINE1_LV1       //
			printf("%c",line2[k]);
		}//for K<LINE_NUM2                          //       second (2)  LINE1_LV1   */  //
		printf("\n");
		if( (Input=getch()) == line1[i]) {          //  /*   process     LINE1_LV1       //
			printf("| you're right' |  ");
			score_Lv1++;
		}//if 
		else {
			printf("| you're wrong' |  ");
		}//else                                     //       process     LINE1_LV1   */  //
	}//for i<LINE_NUM

	////////////////////////////* LINE 1_LV1 *///////////////////////////////

	// LINE 2_LV1
	for(i=0;i<LINE_NUM2_Lv1;i++) {
		system("clear");
		printf("\n\n\n\n\n\n\n\n\n");
		printf("\t\t\t");
		for(k=0;k<LINE_NUM1_Lv1;k++) {               //  /*   first (1)   LINE2_LV1       //
			printf("%c",line1[k]);
		}//for K<LINE_NUM1_Lv1                       //       first (1)   LINE2_LV1   */  //
		printf("\n");
		printf("\t\t\t");
		for(j=0;j<LINE_NUM2_Lv1;j++){                //  /*   second (2)  LINE2_LV1       //
			if (j==i) {
				printf("V");
			}//if j==i
			else {		
				printf(" ");
			}//else
		}// for j<LINE_NUM2_Lv1
		printf("\n");
		printf("\t\t\t");
		for(k=0;k<LINE_NUM2_Lv1;k++) {    
			printf("%c",line2[k]);
		}//for K<LINE_NUM2_Lv1                       //       second (2)   LINE2_LV1  */  //
		printf("\n");
		if( (Input=getch()) == line2[i]) {           //  /*   process      LINE2_LV1      // 
			printf("| you're right' |  ");
			score_Lv1++;
		}//if 
		else {
			printf("| you're wrong' |  ");
		}//else                                      //       process      LINE2_LV1  */  //

	}//for i<LINE_NUM2_Lv1
	time(&end_t);   //time
	timeout_Lv1 = difftime(end_t, start_t);

	////////////////////////////* LINE 2_LV1 *///////////////////////////////
	// OUT SCORE_LV1

	int ch_out_sore;
	int select_out_sore=1;
	int score_Lv2=0,timeout_Lv2=0;

	do {
		switch(ch_out_sore=getch()) {  // if   A = left for "SCORE_OUT_SORE" && D = right for "SCORE_OUT_SORE"
			case 97 : select_out_sore = select_out_sore-1;       // left
				  break;
			case 68 : select_out_sore = select_out_sore-1;       // left
				  break;
			case 100: select_out_sore = select_out_sore+1;       // right
				  break;
			case 67 : select_out_sore = select_out_sore+1;       // right
				  break;
		}//switch(ch)
		if(select_out_sore>2) {      
			select_out_sore=2;
		}//if select_out_sore>2
		if(select_out_sore<1) {
			select_out_sore=1;
		}//if select_out_sore<1      
		if(ch_out_sore==10) { //if ENTER
			switch(select_out_sore) {            // switch for " select_out_sore "
				case 1:ch_out_sore = 11;   
				       Picture_a(first_Name,last_Name,score_Lv1,score_Lv2,timeout_Lv1,timeout_Lv2);  					     //     Picture_a      //
				       break;
				case 2: system("clear");
					Lv2(first_Name,last_Name,score_Lv1,timeout_Lv1);    								      //   data Lv2    //
					ch_out_sore =11;
					break;
			}//swith(select_out_sore)
		}//ch_out_sore==10  


		//show OUT SCORE_LV1
		system("clear"); 
		int numout=1;
		char *numfile;
		if(score_Lv1>=40) {
			numfile="Picture3.dat";
			Picture_r (numfile); 
		}else {
			numfile="Picture2.dat";
			Picture_r (numfile); 
		}//score_Lv1>40

		printf("\n --------------------- LV 1 --------------------");
		printf("\n\t\tName Use :  %s %s\n             ",first_Name,last_Name);
		printf("\n\t\tscore = %d | Max = 81\n\a\a\a   ",score_Lv1); 
		printf("\n\t\tExecution time = %f   \n\n\a\a  ",timeout_Lv1);

		// ITEM_LV1 
		int num=43;
		num = score_Lv1-38;
		char assistance[num];
		for(i=0;i<=num;i++) {
			assistance[i]='|';
		}//for i 
		// out ITEM_LV1  
		printf("\n   --------------------------------------------\n");
		printf("  |");	    	 
		for(i=0;i<=num;i++) {
			printf("%c\a\a",assistance[i]);	
		}//for i out
		printf("\n   -------------------------------------------- \n\n");
		//show Exit and Next 
		if(select_out_sore==1) { 
		  	 printf("\t\t==> Exit <==\t\t\t\t");
		}else {  printf("\t\t    Exit            ");  }//else select==1
		if(select_out_sore==2) {  
		 	 printf("\t\t\t\t\t\t\t==> Next <==\t\t\t\t");
		}else {  printf("\t\t              Next            ");  }//else select==2
	}while(ch_out_sore!=11);
	return ;
}// LV.1


int Lv2 (char *first_Name,char *last_Name,int score_Lv1,double timeout_Lv1) {
	char Input;
	int i,j,k,score_Lv2=0;
	char line1[LINE_NUM1_Lv2] = { 
		'L','e','a','r','n','i','n','g',' ','t','o',
		' ','p','l','a','y',' ','t','h','e',' ','g',
		'u','i','t','a','r',' ','c','a','n',' ','b',
		'e',' ','a','n',' ','e','x','t','r','e','m',
		'e','l','y',' ','r','e','w','a','r','d','i',
		'n','g',' ','e','x','p','e','r','i','e','n',
		'c','e','.'                                   };
	char line2[LINE_NUM2_Lv2] ={ 
		'b','u','t',' ','i','t',' ','i','s',' ','m',
		'a','d','e',' ','e','v','e','n',' ','m','o',
		'r','e',' ','s','o',' ','i','f',' ','y','o',
		'u',' ','f','i','n','d',' ','t','h','e',' ',
		'r','i','g','h','t',' ','t','e','a','c','h',
		'e','r',' ','w','h','o',' ','i','s',' ','a',
		'l','s','o',' ','a',' ','g','u','i','d','e'   };
	char line3[LINE_NUM3_Lv2] ={ 
		't','h','a','t',' ','w','i','l','l',' ','h',
		'e','l','p',' ','y','o','u',' ','a','c','h',
		'l','e','v','e',' ','y','o','u','r',' ','m',
		'u','s','l','c','a','i','c','a','l',' ','g',
		'o','a','l','s',' ','w','i','t','h',' ','t',
		'h','e',' ','r','i','g','h','t',' ','r','e',
		's','o','u','r','c','e','s','.'               };


        sleep(1);
	time_t start_t, end_t;
	double timeout_Lv2;
	char ch;
	printf("Starting of the program...\n");
	time(&start_t);
	// LINE 1_LV2    
	for(i=0;i<LINE_NUM1_Lv2;i++) {
		system("clear");
		printf("\n\n\n\n\n\n\n\n\n");
		printf("\t\t\t");
		for(j=0;j<LINE_NUM1_Lv2;j++){                //   /*  first (1)   LINE1_LV2      //      
			if (j==i) {
				printf("V");
			}//if j==i
			else {		
				printf(" ");
			}//else
		}// for j<LINE_NUM1
		printf("\n");
		printf("\t\t\t");
		for(k=0;k<LINE_NUM1_Lv2;k++) {    
			printf("%c",line1[k]);
		}//for K<LINE_NUM1                           //       first (1)   LINE1_LV2    */ //
		printf("\n");
		printf("\t\t");
		for(k=0;k<LINE_NUM2_Lv2;k++) {               //  /*   second (2)  LINE1_LV2       //
			printf("%c",line2[k]);
		}//for K<LINE_NUM2                           //       second (2)  LINE1_LV2   */  //
		printf("\n");
		printf("\t\t");
		for(k=0;k<LINE_NUM3_Lv2;k++) {               //  /*   second (3)  LINE1_LV2       //
			printf("%c",line3[k]);
		}//for K<LINE_NUM3                      
		printf("\n\n");                              //       second (3)  LINE1_LV2   */  //

		if( (Input=getch()) == line1[i]) {           //  /*   process     LINE1_LV2       //
			printf("| you're right' |  ");
			score_Lv2++;
		}//if 
		else {
			printf("| you're wrong' |  ");
		}//else                                      //       process     LINE1_LV2   */  //
	}//for i<LINE_NUM

	////////////////////////////* LINE 1_LV2 *///////////////////////////////

	// LINE 2_LV2
	for(i=0;i<LINE_NUM2_Lv2;i++) {
		system("clear");
		printf("\n\n\n\n\n\n\n\n\n");
		printf("\t\t\t");
		for(k=0;k<LINE_NUM1_Lv2;k++) {               //  /*   first (1)   LINE2_LV2       //
			printf("%c",line1[k]);
		}//for K<LINE_NUM1_Lv2                       //       first (1)   LINE2_LV2   */  //
		printf("\n");
		printf("\t\t");
		for(j=0;j<LINE_NUM2_Lv2;j++){                //  /*   second (2)  LINE2_LV2       //
			if (j==i) {
				printf("V");
			}//if j==i
			else {		
				printf(" ");
			}//else
		}// for j<LINE_NUM2_Lv2
		printf("\n");
		printf("\t\t");
		for(k=0;k<LINE_NUM2_Lv2;k++) {    
			printf("%c",line2[k]);
		}//for K<LINE_NUM2_Lv2                       //       second (2)   LINE2_LV2  */  //
		printf("\n");
		printf("\t\t");
		for(k=0;k<LINE_NUM3_Lv2;k++) {               //  /*   second (3)   LINE2_LV2      //
			printf("%c",line3[k]); 
		}//for K<LINE_NUM3_Lv2                       //       second (3)   LINE2_LV2  */  //
		printf("\n\n");
		if( (Input=getch()) == line2[i]) {           //  /*   process      LINE2_LV2      // 
			printf("| you're right' |  ");
			score_Lv2++;
		}//if 
		else {
			printf("| you're wrong' |  ");
		}//else                                      //       process      LINE2_LV2  */  //

	}//for i<LINE_NUM2_Lv2

	////////////////////////////* LINE 2_LV2 *///////////////////////////////

	// LINE 3_LV2
	for(i=0;i<LINE_NUM3_Lv2;i++) {
		system("clear");
		printf("\n\n\n\n\n\n\n\n\n");
		printf("\t\t\t");
		for(k=0;k<LINE_NUM1_Lv2;k++) {               //  /*   first (1)   LINE3_LV2       //
			printf("%c",line1[k]);
		}//for K<LINE_NUM1_Lv2                       //       first (1)   LINE3_LV2   */  //
		printf("\n");
		printf("\t\t");              
		for(k=0;k<LINE_NUM2_Lv2;k++) {               //  /*   first (2)   LINE3_LV2       //
			printf("%c",line2[k]);
		}//for K<LINE_NUM1_Lv2                       //       first (2)   LINE3_LV2   */  //
		printf("\n");
		printf("\t\t");
		for(j=0;j<LINE_NUM3_Lv2;j++){                  
			if (j==i) {
				printf("V");
			}//if j==i
			else {		
				printf(" ");
			}//else
		}// for j<LINE_NUM3_Lv2                      //  /*   second (3)  LINE3_LV2       //
		printf("\n");
		printf("\t\t");
		for(k=0;k<LINE_NUM3_Lv2;k++) {    
			printf("%c",line3[k]);
		}//for K<LINE_NUM3_Lv2                       //       second (3)  LINE3_LV2   */  //           
		printf("\n\n");
		if( (Input=getch()) == line3[i]) {           //  /*   process     LINE3_LV2       // 
			printf("| you're right' |  ");
			score_Lv2++;
		}//if 
		else {
			printf("| you're wrong' |  ");
		}//else                                      //       process      LINE3_LV2  */  //

	}//for i<LINE_NUM3_Lv2
	////////////////////////////* LINE 3_LV2 *///////////////////////////////
	time(&end_t);                                        //         /*    time                //  
	timeout_Lv2 = difftime(end_t, start_t);              //               time                //
	Picture_a(first_Name,last_Name,score_Lv1,score_Lv2,timeout_Lv1, timeout_Lv2);  //     Picture_a      //       
	// OUT SCORE_LV2

	int ch_out_sore;
	int select_out_sore=1;

	do {

		switch(ch_out_sore=getch()) {    // if   A = left for SCORE  &&   D = right for SCORE 
			case 10: ch_out_sore = 27;  // left
				 break;
		}//switch(ch)

		//show OUT SCORE_LV2
		system("clear"); 
		int numout=1;
		char *numfile;
		if(score_Lv2>=110) {
			numfile="Picture3.dat";
			Picture_r (numfile); 
		}else {
			numfile="Picture2.dat";
			Picture_r (numfile); 
		}//else score_Lv2>110

		printf("\n --------------------- LV 2 --------------------");
		printf("\n\t\tName Use :  %s %s\n", first_Name, last_Name);
		printf("\n\t\tscore = %d | Max = 220\n\a\a\a",score_Lv2); 
		printf("\n\t\tExecution time = %f   \n\n\a\a",timeout_Lv2);

		// ITEM_LV2 
		int num=220;
		num = (score_Lv2/5)-1;
		char assistance[num];
		for(i=0;i<=num;i++) {
			assistance[i]='|';
		}//for i 
		// out ITEM_LV2  
		printf("\n   --------------------------------------------\n");
		printf("  |");	    	 
		for(i=0;i<=num;i++) {
			printf("%c\a\a",assistance[i]);	
		}//for i out
		printf("\n   -------------------------------------------- \n");
		//show Exit  
		if(select_out_sore==1) { 
		 	 printf("\t\t==> Exit <==\t\t\t\t");
		}else {  printf("\t\t    Exit            ");  }//else select==1
	}while(ch_out_sore!=27);
	return ;
}// LV.2


int clear_score_windows (void) {
	FILE *in,*out;
	char text;
	int result;
	in  = fopen("data_score.dat","r");
	out = fopen("score.dat","w");
	result=fscanf(in,"%c",&text);
	while(result!=EOF) {
		fprintf(out,"%c",text);
		result=fscanf(in,"%c",&text);
	}// while(result!=EOF)
	fclose(in);
	fclose(out);
}//clear_score_windows

int getch (void) {
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
int Picture_r (char *numfile) {
	FILE*myfile;
	char text;
	int result;
	myfile = fopen(numfile,"r");
	result=fscanf(myfile,"%c",&text);
	while(result!=EOF) {
		fprintf(stdout,"%c",text);
		result=fscanf(myfile,"%c",&text);
	}// while(result!=EOF)
	fclose(myfile);
}//Picture_r

int Picture_a (char *first_Name,char *last_Name,int score_Lv1,int score_Lv2,double timeout_Lv1,double timeout_Lv2) {
	FILE*myfile;
	char text;
	int result;
	myfile = fopen("score.dat","a");
	fprintf(myfile,"\n\t %s  %s\t   Score = %d|Time = %2.2f\t\tScore = %d|Time = %2.2f \n",first_Name,last_Name,		      score_Lv1,score_Lv2,timeout_Lv1,timeout_Lv2);
	fclose(myfile);
}//Picture_w
int ShowWindows (int select,int game_up_dows) {


	FILE*myfile;
	char thetext;
	int result;
	int j=0,i=0,row=1,scoregame=0;

	myfile=fopen("Dan_game1.dat","r");
	result=fscanf(myfile,"%c",&thetext);
	while(result != EOF){
		if(thetext == '\n'){
			j=0;
			i++;
		}//if text == \n
		else if(row==1){
			Dangame[i].game[j]=thetext;
			j++;
		}//else if row==1
		result = fscanf(myfile,"%c",&thetext);
	}// result != EOF
	fclose(myfile);


	unsigned seed ;
	seed = time(NULL);
	srand(seed);
	i= rand(seed)%100/2;
	if(i>20) {
		i=0;         
	}//if i>20   
	if(game_up_dows==2){
		if(i>15){
			scoregame++;
		}//if i>16
	}//if game_up_dows==2
	char *numfile;
	struct tm *info;                               // time  DAY / Month / year
	time_t rawtime;
	char buffer[100];



	//GAME up and dows 
	if(game_up_dows==1) {
		system("clear");
		numfile="Picture1.dat";
		Picture_r (numfile);
		numfile="Picture_game_up.dat";
		Picture_r (numfile);
		printf("%s\n",Dangame[i].game);
		printf("ScoreGame : %d\n ",scoregame);

		time(&rawtime);
		info = localtime(&rawtime);
		strftime(buffer,100,"\n\t %a %d/%m/%Y %r  \n",info);
		puts(buffer);  
		for(i=0;i<2;i++) {
			printf("\n");
		}//for i
		//Diisply Menu  
		if(select==1) { 
			 printf("\t\t\t\t\t ==> START <==             \n");
		}else {  printf("\t\t\t\t\t     START                 \n");  }//else select==1
		if(select==2) {  
			 printf("\t\t\t\t\t ==> SCORE <==             \n");
		}else {  printf("\t\t\t\t\t     SCORE                 \n");  }//else select==2
		if(select==3) {  
			 printf("\t\t\t\t\t ==> Profile'59160668' <== \n");
		}else {  printf("\t\t\t\t\t     Profile'59160668'     \n");  }//else select==3
		if(select==4) {  
			 printf("\t\t\t\t\t ==> Exit <==              \n");
		}else {  printf("\t\t\t\t\t     Exit                  \n");  }//else select==4

	}if(game_up_dows==2) {
		system("clear");
		numfile="Picture1.dat";
		Picture_r (numfile);
		numfile="Picture_game_down.dat";
		Picture_r (numfile);
		printf("%s\n",Dangame[i].game);
		printf("ScoreGame : %d\n ",scoregame);

		time(&rawtime);
		info = localtime(&rawtime);
		strftime(buffer,100,"\n\t %a %d/%m/%Y %r  \n",info);
		puts(buffer);  
		for(i=0;i<2;i++) {
			printf("\n");
		}//for i
		//Diisply Menu  
		if(select==1) { 
			 printf("\t\t\t\t\t ==> START <==             \n");
		}else {  printf("\t\t\t\t\t     START                 \n");  }//else select==1
		if(select==2) {  
			 printf("\t\t\t\t\t ==> SCORE <==             \n");
		}else {  printf("\t\t\t\t\t     SCORE                 \n");  }//else select==2
		if(select==3) {  
			 printf("\t\t\t\t\t ==> Profile'59160668' <== \n");
		}else {  printf("\t\t\t\t\t     Profile'59160668'     \n");  }//else select==3
		if(select==4) {  
			 printf("\t\t\t\t\t ==> Exit <==              \n");
		}else {  printf("\t\t\t\t\t     Exit                  \n");  }//else select==4

	}//END GAME up and dows

}//ShowWindows

