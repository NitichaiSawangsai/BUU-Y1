#include <stdio.h>
#include <unistd.h>     // /* library of " getch "   */ //
#include <termios.h>    // /* library of " getch "   */ //
int getch (void) ;
struct Picture {
	char Picture_Data[3000];
};struct Picture Data[1000];
void Picture_r_1 ();
void window_menu (int input);         /*      show window menu      */
void week02_menu(int inputmenu2);
void week03_menu(int inputmenu3);
void week04_menu(int inputmenu4);
void week05_menu(int inputmenu5);
    long fibonacci (int fac) {         //function week05 ex16.c  && week06 ex17.c
  	if (fac == 1) {
  		return 1 ;
  	}if (fac == 0){
   	        return 0;
        }else{
                return fac = fibonacci(fac-1) + fibonacci(fac-2);
        }//else
    }//factorial                       //END  function week05 ex16.c 
void week06_menu(int inputmenu6);
     int getData() {                   //function week06 ex14.c
   	int x;
   		 printf("Please enter two integer numbers : ");
	         scanf("%d",&x);
		 return x;
     }//getData
     int add (int a,int b) {
        int sum;
 	    sum=a+b;
	 return sum;
     }//add
     int delete (int a,int b) {
       int sum1;
      	   sum1=a-b;
         return sum1;
     }//delete 
     int multiply (int a,int b) {   //function week06 ex14.c && week06 ex15.c
       int sum2;
           sum2=a*b;
         return sum2;
     }//multiply
     int Raised (int a,int b) {
       int sum3;
           sum3=a*a;
         return sum3;
     }//Raised
     void printRes (int a, int b, int sum) {
          printf("\n%4d + %d = %4d\n",a,b,sum);
     }//printRes
     void printdelete (int a, int b, int sum1) {
          printf("%4d - %d = %4d\n",a,b,sum1);
     }//printdelete 
      void printmultiply (int a, int b, int sum2) {
          printf("%4d * %d = %4d\n",a,b,sum2);
     }//printmultiply
     void printRaised (int a, int b, int sum3) {
          printf("%4d ^ %d = %4d\n",a,a,sum3);
     }//printRaised                         //END function week06 ex14.c 
     
      int data() {                         //function week06 ex15.c
 	  int x;
	    printf("Please enter two integer numbers : ");
	    scanf("%d",&x);
   	  return x;
      }//Data
      void printmultiply1 (int a, int b, int sum) {
          printf("\n Multiplicand = %d\n",a);
          printf(" Multiplier = %d\n",b);
          printf(" Result = %d\n",sum);
      }//printmultiply                    //END function week06 ex15.c
	 
          int factorial(int num) {        //END function week06 ex17.c
 	     if ( num==0 || num==1) {
   		  return 1;
             }else {
                  return num * factorial(num-1);
             }//else
          }//factorial                    //END function week06 ex16.c
 
 float  input (float length,float width,float Percent_decrease,float Price_per)  {     //function week06 ex18.c
      printf("Please enter the length of the room : %3.2f \n",length);
      printf("Please enter the width  of the room : %3.2f \n",width);
      printf("The percentage reduction to its customers : %3.2f \n",Percent_decrease);
      printf("Price per square foot : %3.2f \n",Price_per);
 }//END float input 
 float output (float length,float width,float Percent_decrease,float Price_per,float aom,float aom1,float aom2 ,float aom3,float aom4,float aom5,float aom6) {
 	system("clear");                
 	printf("\n\n\n\n");
	  printf("                                   M E A S U R E M E N T                                     \n");
	  printf("                                                                                             \n");
	  printf("  Length                                                                  %3.2f  ft           \n",length);
	  printf("  Width                                                                   %3.2f  ft          \n",width);
	  printf("                                                                                             \n"); 
	  printf("  Area                                                                    %3.2f  square ft   \n",aom);
	  printf("                                                                                             \n"); 
	  printf("                                                                                             \n");
	  printf("                                         C H A R G E                                         \n");
	  printf("                                                                                             \n"); 
	  printf("  DESCRIPTIONS                           COST/SQ.FT.                       CHARGE (BAHT)     \n");
	  printf("                                                                                             \n");
	  printf("  ------------                           -------------                     ---------------   \n");
	  printf("                                                                                             \n");
	  printf("  Carpet                                  %3.2f                              %3.2f           \n",aom1,aom2);
	  printf("  Labor                                   34.00                                              \n");
	  printf("                                                                             %3.2f              \n",aom3);
	  printf("                                                                                             \n");
	  printf("                                                                           ---------------   \n");
	  printf("                                                                                             \n");
	  printf("  Installed Price                                                            %3.2f           \n",aom4);
	  printf("  Discount                                %3.2f                              %3.2f           \n",aom5,aom6);
	 printf("\n\n\n\n");
 }//END float output                     //END function week06 ex18.c
    
     void multi (void) {                               //function week06 ex19.c
     	int numStart,numStop,i,j;
      	   do {
      		 printf("Input Num Start : ");
    	         scanf("%d",&numStart);
       		 	printf("Input Num Stop : ");
         		scanf("%d",&numStop);
           		if(numStart>numStop) {
              			printf("\t\t\t...... Please enter new information ........\n");
          		}//if (numStart>numStop)
               }while(numStart>numStop);
         			printf("\t\t*****  multiplication table  ***** \n");
                	for(i=numStart;i<=numStop;i++)     {
                  		for(j=1;j<=12;j++)            {
                      			printf("%d * %d = %d \n",i,j,(i*j));
                     		}//for j
                	  printf("\n");
                 	}//for i
    }//multiTable(n)                   //END function week06 ex19.c
           

void week07_menu(int inputmenu7);
     int Intput(void){                             //function week07 ex07.c
	  int vec01[5],vec02[5],vec03[5];
  	  int i;
   		/* lnput vec01 */
		   for(i=0;i<5;i++) {
 			 printf("Enter vec01[%d]",i); 
 		         scanf("%d",&vec01[i]);
  		   }//for vec01
		   printf("\n");
   	       /* lnput vec02 */
 		   for(i=0;i<5;i++) {
		      printf("Enter vec02[%d]",i);
                      scanf("%d",&vec02[i]);
		   }//for vec02
	return 0;
     }//intput
     int Process (void){
  	 int vec01[5],vec02[5],vec03[5];
         int i;
		  printf("\n");
		  for(i=0;i<5;i++) {
   			vec03[i] = vec01[i] + vec02[i];
		  }//for Proces
	return 0;
     }//process
     int Output(void) {
	  int vec01[5],vec02[5],vec03[5];
          int i;
		  printf("\nFirst  vector:");
		  for(i=0;i<5;i++){
		  	printf("%2d :",vec01[i]);
	          }//for vec01
		  printf("\n");
                  printf("Second vector:");
  		  for(i=0;i<5;i++){
    		  	printf("%2d :",vec02[i]);
   		  }//for vec02
		  printf("\n\nOutput vector:");
  		  for(i=0;i<5;i++){
 		  	printf("%2d :",vec03[i]);
  		  }//for Output
		  printf("\n");
	return 0;
    }//output                                                  //END function week07 ex07.c           

        void inputSize (int *arraySize){                            //function week07 ex08.c
 	    printf("Input Unit of Number : ");
     	    scanf("%d",arraySize);
        }//inputSize
        void inputVal(int arr[],int size){
    	     int i;
 		      for(i=0;i<size;i++){
         			printf("Input Value of arr[%d] : ",i);
       				scanf("%d",&arr[i]);
   		      }//for i
        }//inputVal
        void SHOWVAL(int arr[],int size){
             int i;
		      for(i=0;i<size;i++){
         		        printf("Value of arr[%d] : %d\n",i,arr[i]);
  		      }//for i
        }//showVal
        int getSum(int arr[],int size){
    	     int sum=0,i;
                      for(i=0;i<size;i++){
         			sum+=arr[i];
       		      }//for i
           return sum;
        }//getSum
        int getAvg(int arr[],int size){
             int sum=0,i;
     		     for(i=0;i<size;i++){
                               sum+=arr[i];
                     }//for i
           return sum/size;
        }//getAvg
        int  maxmai(int arr[],int size){
   	     int min,max,i;
   	 	     for(i=0;i<size;i++){
                	       if(i==1){
             		       		 max=arr[i];
            				 min=arr[i];
          		       }//if(i==1)
           		       if(arr[i]>max){ 
            			         max = arr[i] ;        
                               }//if(arr[i]>max)
                               if(arr[i]<min){
             				 min = arr[i] ;      
          		       }//if(arr[i]<min)  
  
                     }//for i   
                     printf("\n Max = %d \n",max);
                     printf("\n Min = %d \n",min);
                     printf("\n Then yeah it 555 \n");
          return max,min;
       }//maxmai                                                 //END function week07 ex08.c

          void InputSize(int *arraySize){                             //function week07 ex09.c
    		 printf("Input Unit of Number : ");
	         scanf("%d",arraySize);
          }//inputSize
 	  void InputVal(int arr[],int size){
      		int i;
          		for(i=0;i<size;i++){
     			    printf("Input Value of arr[%d] : ",i);
       			    scanf("%d",&arr[i]);
                        }//for i
          }//inputVal
          void ShowVal(int arr[],int size){
     		int i;
    		   for(i=0;i<size;i++){
         		printf("Value of arr[%d] : %d\n",i,arr[i]);
                   }//for i
         }//showVal
         int GetSum(int arr[],int size){
    		int sum=0,i;
    		   for(i=0;i<size;i++){
         		sum+=arr[i];
                   }//for i
           return sum;
         }//getSum
         int GetAvg(int arr[],int size){
     	     int sum=0,i;
    		  for(i=0;i<size;i++){
         		sum+=arr[i];
                  }//for i
           return sum/size;
         }//getAvg
         int Maxmai(int arr[],int size){
   	     int min,max,i;
   	 	  for(i=0;i<size;i++){
           		if(i==0){
             			 max=arr[i];
            			 min=arr[i];
                        }//if(i==1)
           	        if(arr[i]>max){ 
             			 max = arr[i] ;        
                        }//if(arr[i]>max)
            		if(arr[i]<min){
           			 min = arr[i] ;      
          		 }//if(arr[i]<min)  
  
  		   }//for i   
     	      printf("\n Max = %d \n",max);
	      printf("\n Min = %d \n",min);
              printf("\n Then yeah it 555 \n");
    	     return max,min;
         }//maxmai                                              
  	void Search(int number,int arr[],int size){
   	 	  int i, count=0,status=0;
        	 	  for(i=0;i<size;i++){
               			if(number == arr[i]){
                  			status =1;
                  			count++;
               			}// if number
                          }//for i
             	          if(status==0){
                  		 printf("\tNot Found Number for your search !!\n");
               		  }//if stutus
               		  else{
                  		 printf("\tFound Nubar of %d unit \n",count);
               		  }//else

               
       }//search                                                  //END function week07 ex09.c

 	int PROCESS (int row,int col){                               //function week07 ex10.c
       		int i,j;
       		int table[row][col];
      			printf("\n=========== Input ============\n\n");
			for(i=0;i<=row;i++){
			    for(j=0;j<=col;j++){
 	        	         printf("Ples Enter [%d]{%d] : ",i,j);
        	        	 scanf("%d",&table[i][j]);
		  	    }//for j
	                }//for i
	}//process
  	void OUTPUT (int row,int col){
       		int i,j;
       		int table[row][col];
        		printf("\n========== Output ============\n\n");
			for(i=0;i<=row;i++){
		            for(j=0;j<=col;j++){
		   		printf("%d : ",table[i][j]);
			    }//for j
      			  printf("\n");
			}//for i
  	}//output                                         //END function week07 ex10.c

        int SWITCH_MENU (int floor,int room,int numMENU) {             //function week07 ex11.c
   		switch(numMENU) {
		    int hotel [100][1000]={0};
 		    int i,j,k;
		    int num_bookroom;
   		    char ans[3];
    			   case 1 :
            		 	   system("clear");
                		   printf("\n\t\t\t .................. Show Rooms .....................\n");
                		   for(i=1;i<=floor;i++){
		 			for(j=1;j<=room;j++){
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
                  			  printf("\n\n\t\t\t ...................... Exit .....................\n");
                   			  printf("\t\t\t\n\n\t\t\t\t\t      Goog bey bey              \n\n\n");
                		  break;
     		 }//switch
         }//SWITCH_MENU                                                 //END function week07 ex11.c


void week02();                      // in switch(select) case 2
void week03();                      // in switch(select) case 3
void week04();                      // in switch(select) case 4
void week05();                      // in switch(select) case 5
void week06();                      // in switch(select) case 6
void week07();                      // in switch(select) case 7


int main (){
	int i;                                                  /*         ShowPicture       */
	Picture_r_1();
	for(i=0;i<=17;i++){
		system("clear");
		printf("%s\n",Data[i].Picture_Data);        
		sleep(1);
	}//for i
	sleep(1);                                                /*  END  ShowPicture        */

	
   int intputmenu=0;
   int select=2;
   do{
         window_menu(select);
	 switch(intputmenu=getch()) {  // if w = up  && s = down && D = right       
			case 119: select = select-1;          		    // up for ShowWindows
				  break;
			case 65 : select = select-1;   		  	    // up for ShowWindows
				  break;
			case 115: select = select+1;	 	            // downs for ShowWindows
				  break;
			case 66 : select = select+1;                        // downs for ShowWindows
				  break;
			case 100 : select = select+2;                        
				  break;
			case 67 : select = select+2;                        
				  break;
			case 68 : select = select-2;                        
				  break;
			case 97 : select = select-2;                     
				  break;
		}//switch(ch) 
         if(select<=2){
             select=2;
         }else if(select>=8){
             select=8;
         }
       	window_menu(select);
         if(intputmenu==10){
       		 switch(select){
                        case 2: week02();
                              break;   
                        case 3: week03(); 
                              break;  
                        case 4: week04();
                              break;   
                        case 5: week05();
                              break;   
                        case 6: week06();
                              break;   
                        case 7: week07();
                              break; 
                        case 8: select=9;
                              break; 
		}//END switch
         }//if(intputmenu==10)
     }while(select!=9);
     system("clear");
	return 0;
}//main 

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
void Picture_r_1 (){
	FILE*myfile;
	char thetext;
	int result;
	int j=0,i=0,row=1;
	myfile=fopen("dataPicture.dat","r");
	result=fscanf(myfile,"%c",&thetext);
	while(result != EOF){
		if(thetext=='^'){
			j=0;
			i++;
		}//if text == \n
		else if(row==1){
			Data[i].Picture_Data[j]=thetext;
			j++;
		}//else if row==1
		result = fscanf(myfile,"%c",&thetext);
	}// result != EOF
	fclose(myfile);
	return ;
}//Picture_r
void window_menu (int input){
       	 system("clear");                                    
       	 printf("%s\n",Data[18].Picture_Data);
         if(input==2){
            printf("\n\n\n\t\t\t > Week02 <   Week04       Week06      Exit       \n\n");
                 printf("\n\t\t\t Week03       Week05       Week07                 \n\n\n");
         }else if(input==3){
            printf("\n\n\n\t\t\t Week02       Week04       Week06      Exit        \n\n");
                printf("\n\t\t\t> Week03 <    Week05       Week07                  \n\n\n");
         }else if(input==4){
            printf("\n\n\n\t\t\t Week02      > Week04 <    Week06      Exit        \n\n");
                printf("\n\t\t\t Week03       Week05       Week07                  \n\n\n");
         }else if(input==5){
            printf("\n\n\n\t\t\t Week02       Week04       Week06      Exit        \n\n");
                printf("\n\t\t\t Week03      > Week05 <    Week07                  \n\n\n");
         }else if(input==6){
            printf("\n\n\n\t\t\t Week02       Week04      > Week06 <   Exit        \n\n");
                printf("\n\t\t\t Week03       Week05       Week07                  \n\n\n");
         }else if(input==7){
            printf("\n\n\n\t\t\t Week02       Week04       Week06      Exit        \n\n");
                printf("\n\t\t\t Week03       Week05      > Week07 <               \n\n\n");
         }else if(input==8){
            printf("\n\n\n\t\t\t Week02       Week04       Week06      > Exit <    \n\n");
                printf("\n\t\t\t Week03       Week05       Week07                  \n\n\n");
         }//END 
   return ;
}//END window
void week02_menu(int intputmenu2){
         system("clear");
         printf("\n\tWEEK02\n");
         if(intputmenu2==11){
             printf("\n\t\t > ex011.c < \n");  
             printf("\n\t\t ex012.c     \n");  
             printf("\n\t\t Exit        \n");  
         }else if (intputmenu2==12){
             printf("\n\t\t ex011.c     \n");  
             printf("\n\t\t > ex012.c < \n");  
             printf("\n\t\t Exit        \n"); 
         }else if(intputmenu2==13){ 
             printf("\n\t\t ex011.c     \n");  
             printf("\n\t\t ex012.c     \n");  
             printf("\n\t\t > Exit <    \n"); 
         }//END IF intputmenu
}//END week02_menu
void week03_menu(int inputmenu3){
         system("clear");
         printf("\n\tWEEK03\n");
         if(inputmenu3==14){
             printf("\n\t\t > ex014.c < \n");  
             printf("\n\t\t ex015.c     \n");  
             printf("\n\t\t Exit        \n");  
         }else if (inputmenu3==15){
             printf("\n\t\t ex014.c     \n");  
             printf("\n\t\t > ex015.c < \n");  
             printf("\n\t\t Exit        \n"); 
         }else if(inputmenu3==16){ 
             printf("\n\t\t ex014.c     \n");  
             printf("\n\t\t ex015.c     \n");  
             printf("\n\t\t > Exit <    \n"); 
         }//IF
}////END week03_menu
void week04_menu(int inputmenu4){
         system("clear");
         printf("\n\tWEEK04\n");
         if(inputmenu4==12){
             printf("\n\t\t > ex012.c < \n");  
             printf("\n\t\t ex013.c     \n");  
             printf("\n\t\t ex014.c     \n");  
             printf("\n\t\t ex015.c     \n");  
             printf("\n\t\t ex016.c     \n");  
             printf("\n\t\t ex017.c     \n");  
             printf("\n\t\t Exit        \n");  
         }else if (inputmenu4==13){
             printf("\n\t\t ex012.c     \n");  
             printf("\n\t\t > ex013.c < \n");  
             printf("\n\t\t ex014.c     \n");  
             printf("\n\t\t ex015.c     \n");  
             printf("\n\t\t ex016.c     \n");  
             printf("\n\t\t ex017.c     \n");  
             printf("\n\t\t Exit        \n"); 
         }else if(inputmenu4==14){
             printf("\n\t\t ex012.c     \n");  
             printf("\n\t\t ex013.c     \n");  
             printf("\n\t\t > ex014.c < \n");  
             printf("\n\t\t ex015.c     \n");  
             printf("\n\t\t ex016.c     \n");  
             printf("\n\t\t ex017.c     \n");  
             printf("\n\t\t Exit        \n"); 
         }else if(inputmenu4==15){
             printf("\n\t\t ex012.c     \n");  
             printf("\n\t\t ex013.c     \n");  
             printf("\n\t\t ex014.c     \n");  
             printf("\n\t\t > ex015.c < \n");  
             printf("\n\t\t ex016.c     \n");  
             printf("\n\t\t ex017.c     \n");  
             printf("\n\t\t Exit        \n"); 
         }else if(inputmenu4==16){
             printf("\n\t\t ex012.c     \n");  
             printf("\n\t\t ex013.c     \n");  
             printf("\n\t\t ex014.c     \n");  
             printf("\n\t\t ex015.c     \n");  
             printf("\n\t\t > ex016.c < \n");  
             printf("\n\t\t ex017.c     \n");  
             printf("\n\t\t Exit        \n"); 
         }else if(inputmenu4==17){
             printf("\n\t\t ex012.c     \n");  
             printf("\n\t\t ex013.c     \n");  
             printf("\n\t\t ex014.c     \n");  
             printf("\n\t\t ex015.c     \n");  
             printf("\n\t\t ex016.c     \n");  
             printf("\n\t\t > ex017.c < \n");  
             printf("\n\t\t Exit        \n"); 
         }else if(inputmenu4==18){ 
             printf("\n\t\t ex012.c     \n");  
             printf("\n\t\t ex013.c     \n");  
             printf("\n\t\t ex014.c     \n");  
             printf("\n\t\t ex015.c     \n");  
             printf("\n\t\t ex016.c     \n");  
             printf("\n\t\t ex017.c     \n");  
             printf("\n\t\t > Exit <    \n"); 
         }//IF
}////END week04_menu
void week05_menu(int inputmenu5){
         system("clear");
         printf("\n\tWEEK05\n");
         if(inputmenu5==13){
             printf("\n\t\t > ex013.c < \n");  
             printf("\n\t\t ex014.c     \n");  
             printf("\n\t\t ex015.c     \n");  
             printf("\n\t\t ex016.c     \n");  
             printf("\n\t\t ex017.c     \n");  
             printf("\n\t\t ex018.c     \n");  
             printf("\n\t\t Exit        \n");  
         }else if (inputmenu5==14){
             printf("\n\t\t ex013.c     \n");  
             printf("\n\t\t > ex014.c < \n");  
             printf("\n\t\t ex015.c     \n");  
             printf("\n\t\t ex016.c     \n");  
             printf("\n\t\t ex017.c     \n");  
             printf("\n\t\t ex018.c     \n");  
             printf("\n\t\t Exit        \n"); 
         }else if(inputmenu5==15){
             printf("\n\t\t ex013.c     \n");  
             printf("\n\t\t ex014.c     \n");  
             printf("\n\t\t > ex015.c < \n");  
             printf("\n\t\t ex016.c     \n");  
             printf("\n\t\t ex017.c     \n");  
             printf("\n\t\t ex018.c     \n");  
             printf("\n\t\t Exit        \n"); 
         }else if(inputmenu5==16){
             printf("\n\t\t ex013.c     \n");  
             printf("\n\t\t ex014.c     \n");  
             printf("\n\t\t ex015.c     \n");  
             printf("\n\t\t > ex016.c < \n");  
             printf("\n\t\t ex017.c     \n");  
             printf("\n\t\t ex018.c     \n");  
             printf("\n\t\t Exit        \n"); 
         }else if(inputmenu5==17){
             printf("\n\t\t ex013.c     \n");  
             printf("\n\t\t ex014.c     \n");  
             printf("\n\t\t ex015.c     \n");  
             printf("\n\t\t ex016.c     \n");  
             printf("\n\t\t > ex017.c < \n");  
             printf("\n\t\t ex018.c     \n");  
             printf("\n\t\t Exit        \n"); 
         }else if(inputmenu5==18){
             printf("\n\t\t ex013.c     \n");  
             printf("\n\t\t ex014.c     \n");  
             printf("\n\t\t ex015.c     \n");  
             printf("\n\t\t ex016.c     \n");  
             printf("\n\t\t ex017.c     \n");  
             printf("\n\t\t > ex018.c < \n");  
             printf("\n\t\t Exit        \n"); 
         }else if(inputmenu5==19){ 
             printf("\n\t\t ex013.c     \n");  
             printf("\n\t\t ex014.c     \n");  
             printf("\n\t\t ex015.c     \n");  
             printf("\n\t\t ex016.c     \n");  
             printf("\n\t\t ex017.c     \n");  
             printf("\n\t\t ex018.c     \n");  
             printf("\n\t\t > Exit <    \n"); 
          }//END If
}//END week05_menu
void week06_menu(int inputmenu6){
         system("clear");
         printf("\n\tWEEK06\n");
         if(inputmenu6==14){
             printf("\n\t\t  > ex014.c < \n");  
             printf("\n\t\t ex015.c     \n");  
             printf("\n\t\t ex016.c     \n");  
             printf("\n\t\t ex017.c     \n");  
             printf("\n\t\t ex018.c     \n");  
             printf("\n\t\t ex019.c     \n");  
             printf("\n\t\t Exit        \n");  
         }else if(inputmenu6==15){
             printf("\n\t\t ex014.c     \n");  
             printf("\n\t\t > ex015.c < \n");  
             printf("\n\t\t ex016.c     \n");  
             printf("\n\t\t ex017.c     \n");  
             printf("\n\t\t ex018.c     \n");  
             printf("\n\t\t ex019.c     \n");  
             printf("\n\t\t Exit        \n"); 
         }else if(inputmenu6==16){
             printf("\n\t\t ex014.c     \n");  
             printf("\n\t\t ex015.c     \n");  
             printf("\n\t\t > ex016.c < \n");  
             printf("\n\t\t ex017.c     \n");  
             printf("\n\t\t ex018.c     \n");  
             printf("\n\t\t ex019.c     \n");  
             printf("\n\t\t Exit        \n"); 
         }else if(inputmenu6==17){
             printf("\n\t\t ex014.c     \n");  
             printf("\n\t\t ex015.c     \n");  
             printf("\n\t\t ex016.c     \n");  
             printf("\n\t\t > ex017.c < \n");  
             printf("\n\t\t ex018.c     \n");  
             printf("\n\t\t ex019.c     \n");  
             printf("\n\t\t Exit        \n"); 
         }else if(inputmenu6==18){
             printf("\n\t\t ex014.c     \n");  
             printf("\n\t\t ex015.c     \n");  
             printf("\n\t\t ex016.c     \n");  
             printf("\n\t\t ex017.c     \n");  
             printf("\n\t\t > ex018.c < \n");  
             printf("\n\t\t ex019.c     \n");  
             printf("\n\t\t Exit        \n"); 
         }else if(inputmenu6==19){
             printf("\n\t\t ex014.c     \n");  
             printf("\n\t\t ex015.c     \n");  
             printf("\n\t\t ex016.c     \n");  
             printf("\n\t\t ex017.c     \n");  
             printf("\n\t\t ex018.c     \n");  
             printf("\n\t\t > ex019.c < \n");  
             printf("\n\t\t Exit        \n"); 
         }else if(inputmenu6==20){ 
             printf("\n\t\t ex014.c     \n");  
             printf("\n\t\t ex015.c     \n");  
             printf("\n\t\t ex016.c     \n");  
             printf("\n\t\t ex017.c     \n");  
             printf("\n\t\t ex018.c     \n");  
             printf("\n\t\t ex019.c     \n");  
             printf("\n\t\t > Exit <    \n"); 
          }//END If
}//END week06_menu
void week07_menu(int inputmenu7){
         system("clear");
         printf("\n\tWEEK07\n");
         if(inputmenu7==7){
             printf("\n\t\t  > ex07.c < \n");  
             printf("\n\t\t ex08.c     \n");  
             printf("\n\t\t ex09.c     \n");  
             printf("\n\t\t ex010.c     \n");  
             printf("\n\t\t ex011.c     \n");  
             printf("\n\t\t Exit        \n");  
         }else if(inputmenu7==8){
             printf("\n\t\t ex07.c     \n");  
             printf("\n\t\t > ex08.c < \n");  
             printf("\n\t\t ex09.c     \n");  
             printf("\n\t\t ex010.c     \n");  
             printf("\n\t\t ex011.c     \n");  
             printf("\n\t\t Exit        \n"); 
         }else if(inputmenu7==9){
             printf("\n\t\t ex07.c     \n");  
             printf("\n\t\t ex08.c     \n");  
             printf("\n\t\t > ex09.c < \n");  
             printf("\n\t\t ex010.c     \n");  
             printf("\n\t\t ex011.c     \n");  
             printf("\n\t\t Exit        \n"); 
         }else if(inputmenu7==10){
             printf("\n\t\t ex07.c     \n");  
             printf("\n\t\t ex08.c     \n");  
             printf("\n\t\t ex09.c     \n");  
             printf("\n\t\t > ex010.c < \n");  
             printf("\n\t\t ex011.c     \n");  
             printf("\n\t\t Exit        \n"); 
         }else if(inputmenu7==11){
             printf("\n\t\t ex07.c     \n");  
             printf("\n\t\t ex08.c     \n");  
             printf("\n\t\t ex09.c     \n");  
             printf("\n\t\t ex010.c     \n");  
             printf("\n\t\t > ex011.c < \n");  
             printf("\n\t\t Exit        \n"); 
         }else if(inputmenu7==12){
             printf("\n\t\t ex07.c     \n");  
             printf("\n\t\t ex08.c     \n");  
             printf("\n\t\t ex09.c     \n");  
             printf("\n\t\t ex010.c     \n");  
             printf("\n\t\t ex011.c     \n");  
             printf("\n\t\t > Exit <    \n"); 
          }//END If
}//END week06_menu

void week02 (){
          int intputweek02=0,selectweek02=11; 
          do{
                week02_menu(selectweek02);
          	switch(intputweek02=getch()) {
			case 119: selectweek02 = selectweek02-1;            // up 
				  break;
			case 65 : selectweek02 = selectweek02-1;            // up 
				  break;
			case 115: selectweek02 = selectweek02+1;	    // downs 
				  break;
			case 66 : selectweek02 = selectweek02+1;            // downs 
				  break;
                }//switch(intputweek02=getch())
                if(selectweek02<=11){
                   selectweek02=11;
                }else if(selectweek02>=13){
                   selectweek02=13;
                }//END IF selectweek02
                week02_menu(selectweek02);
                if(intputweek02==10){
                       switch(selectweek02){
                             int exit=0;
                             case 11:
                                      {  //mina Week02 ex11.c
                                             char Char;                            //Week02 ex11.c
                                             int Int;      
                                             float Float;  
                                                 printf("\n\n\tWEEK02 EX11.C \n");
                                                 printf("\nPlease enter Char: ");
  						 scanf("%c",&Char);
					         printf("\nPlease enter Int: ");
   						 scanf("%d",&Int);
    						 printf("\nPlease enter Float: ");
   						 scanf("%f",&Float);
                                                 printf("\nAns\n");
   						 printf("\nResult Char: %c Result Number1: %d Result Number2: %5.2f",Char,Int,Float);
					         printf("\nResult Char: %c Result Number1: %c Result Number2: %c   ",Char,Int,Float);
                                                 printf("\nResult Char: %d Result Number1: %d Result Number2: %d\n ",Char,Int,Float);
                                                 printf("***Bye Bye***\n\n");
                                                                                 //END
                                                 printf("\n\n\tPress 1 out of this page : ");
                                                 scanf("%d",&exit);
                                                 selectweek02=14;
                                      }  //END mina Week02 ex11.c
                                   break;   
                             case 12:
					{ //mina Week02 ex12.c
                                            //Variable declarations               //Week02   ex12.c
        				     float base,height;
				             float square_area;
      					    //Statements
                                                printf("\n\n\tWEEK02 EX12.C \n");
					        printf("\nPlease enter the value of base : ");     
        					scanf("%f",&base);
       						printf("\nPlease enter the value of height :");
        					scanf("%f",&height);
        					square_area= base * height;
                                                printf("\nAns\n");
      						printf("\n The area of square with base = %2.2f & heigh = %2.2f is : %2.2f\n",base,height,square_area);
                                                                                //END
                                                 printf("\n\n\tPress 1 out of this page : ");
                                                 scanf("%d",&exit);
                                                 selectweek02=14;
 
					} ////END mina Week02 ex12.c
                                   break;   
                             case 13: selectweek02=14;
                                   break;   
                       }//END switch selectweek02
                }//END IF intputweek02
               

                 
          }while(selectweek02!=14);
}//END week02

void week03 (){
          int intputweek03=0,selectweek03=14; 
          do{
               week03_menu(selectweek03);
          	switch(intputweek03=getch()) {
			case 119: selectweek03 = selectweek03-1;            // up 
				  break;
			case 65 : selectweek03 = selectweek03-1;            // up 
				  break;
			case 115: selectweek03 = selectweek03+1;	    // downs 
				  break;
			case 66 : selectweek03 = selectweek03+1;            // downs 
				  break;
                }//switch(intputweek03=getch())
                if(selectweek03<=14){
                   selectweek03=14;
                }else if(selectweek03>=16){
                   selectweek03=16;
                }//END IF selectweek02
                week03_menu(selectweek03);
                if(intputweek03==10){
                       switch(selectweek03){
                             int exit=0;
                                case 14 :
                                   #define DEGREE_FACTOR 57.295779        //Week03 ex14.c
                                      { //mina  Week03 ex14.c
                                         //variable declarations
                                         double radians,degrees;
                                         //statements
                                            printf("\n\n\tWEEK03 EX14.C \n");
                                            printf("\ninput data radians : ");
                                            scanf("%lf",&radians);       
                                            degrees = radians * DEGREE_FACTOR; 
                                            printf("\nAns\n");
                                            printf("\n radians = %4.3lf is degrees = %5.3lf \n",radians,degrees);
                                                                           //END ex14.c
                                                 printf("\n\n\tPress 1 out of this page : ");
                                                 scanf("%d",&exit);
                                                 selectweek03=17;
                                      } //END mina Week03 ex14.c
                                         break;
                                case 15 :
                                   #define TaxRate 0.07                     //ex15.c
                                      {//mina Week03 ex15.c
                                         //variable declarations
                                           float input_Tv,
           				       input_Radio,
 				               input_Remote_Control,
           				       input_Cd_player,
           				       input_Tape_recorder;

     					   float    sum_Tv,
               					    sum_Radio,
               					    sum_Remote_Control,
                				    sum_Cd_player,
                			            sum_Tape_recorder;

       					   float unit_Tv = 5000.00,
             				         unit_Radio =  700.00,
             					 unit_Remote_Control =  160.00,
                				 unit_Cd_player = 1750.00,
             					 unit_Tape_recorder =  890.00,
             					 Subtotal,
            					 tax,
             				         total;  
 
						 //statements
                                                 printf("\n\n\tWEEK03 EX15.C \n");
   						 printf("\n number Tv : ");
    						 scanf("%f",&input_Tv);
  					         printf("\n number Radio : ");
    						 scanf("%f",&input_Radio);
   						 printf("\n number Remote Control : ");
    						 scanf("%f",&input_Remote_Control);
   						 printf("\n number Cd player : ");
     						 scanf("%f",&input_Cd_player);
					         printf("\n number Tape recorder :");
   					         scanf("%f",&input_Tape_recorder);
						 //calculate
  							 sum_Tv  = input_Tv * unit_Tv;
						         sum_Radio  = input_Radio * unit_Radio;
						         sum_Remote_Control  = input_Remote_Control * unit_Remote_Control;
						         sum_Cd_player  = input_Cd_player * unit_Cd_player;
   							 sum_Tape_recorder  = input_Tape_recorder * unit_Tape_recorder;
   							 Subtotal = sum_Tv + sum_Radio + sum_Remote_Control + sum_Cd_player + sum_Tape_recorder;
                                                         tax      = TaxRate * Subtotal;
                                                         total    = Subtotal + tax;
                                                         printf("\nAns\n");

     printf("\n   |   QTY     |     DESCRIPTIONS            UNIT PRLCE          TOTAL PRLCE   \n");
     printf("   | --------  |   -----------------       -----------------    --------------- \n");
     printf("   |  %2.0f       |    Tv                        5000.00               %6.2f      \n",input_Tv,sum_Tv);
     printf("   |  %2.0f       |    Radio                      700.00               %6.2f      \n",input_Radio,sum_Radio);
     printf("   |  %2.0f       |    Remote Control             160.00               %6.2f      \n",input_Remote_Control,sum_Remote_Control);
     printf("   |  %2.0f       |    Cd player                 1750.00               %6.2f      \n",input_Cd_player,sum_Cd_player);
     printf("   |  %2.0f       |    Tape recorder              890.00               %6.2f      \n",input_Tape_recorder,sum_Tape_recorder);
     printf("   |           |                                                               \n");
     printf("   |           |                                               --------------- \n");
     printf("   |           |                                                               \n");
     printf("                                               Subtotal   =     %7.2f         \n",Subtotal);
     printf("                                               Tax        =     %7.2f         \n",tax);
     printf("                                               Total      =     %7.2f         \n",total);
     printf("                                                                              \n");

                                                                          //End ex15.c
                                                 printf("\n\n\tPress 1 out of this page : ");
                                                 scanf("%d",&exit);
                                                 selectweek03=17;
                                      }//END mina Week03 ex15.c      
                                         break;
                                case 16 :  selectweek03=17;
                                         break;
                       }//switch selectweek03
                }//IF intputweek03
              }while(selectweek03!=17);
}//END Week03

void week04(){
          int intputweek04=0,selectweek04=12; 
          do{
               week04_menu(selectweek04);
          	switch(intputweek04=getch()) {
			case 119: selectweek04 = selectweek04-1;            // up 
				  break;
			case 65 : selectweek04 = selectweek04-1;            // up 
				  break;
			case 115: selectweek04 = selectweek04+1;	    // downs 
				  break;
			case 66 : selectweek04 = selectweek04+1;            // downs 
				  break;
                }//switch(intputweek03=getch())
                if(selectweek04<=12){
                   selectweek04=12;
                }else if(selectweek04>=18){
                   selectweek04=18;
                }//END IF selectweek02
                week04_menu(selectweek04);
                if(intputweek04==10){
                       switch(selectweek04){
                             int exit=0;
                                 case 12:
                                     { //main week04  ex12.c
                                         int  score;                   //ex12.c
   					 char grade;
 				         int temp;
                                                printf("\n\n\tWEEK04 EX12.C \n");
   				   		printf("\nEnter the test score ( 0-100 ) : ");
       						scanf ( "%d",&score);
   				 		temp = score / 10 ;
    						switch(temp){ 
      							case 10 : ;
							case  9 : grade = 'A';
                						break;	
							case  8 : grade = 'B';
              							break;
       							case  7 : grade = 'C';
               							break;
							case  6 : grade = 'D';
								break;
							case  5 : grade = 'D';
								break;
     							default : grade = 'F';
						  } // switch 
                                                 printf("\nAns\n");
       						 printf(" The Grade is : %c \n ",grade);
                                                                          //End ex12.c
                                                 printf("\n\n\tPress 1 out of this page : ");
                                                 scanf("%d",&exit);
                                                 selectweek04=19;
 
                                     } //END main week04  ex12.c
                                       break;
                                 case 13:
                                     {//main week04 ex13.c
                                         int Mathematics,English,Exercise,sum=0;      //ex13.c
                                                printf("\n\n\tWEEK04 EX13.C \n");
   						printf("\n Enter the test score Mathematics : ");
						scanf ( "%d",&Mathematics);
  		 				printf(" Enter the test score English : "); 
   						scanf ("%d",&English);
  						printf(" Enter the test score Exercise : ");
   						scanf ( "%d",&Exercise);
                                                printf("\nAns\n");
  					        printf("Mathematics : %d\n",Mathematics);
   						printf("English : %d\n",English);
 						printf("Exercise : %d\n",Exercise);
    						sum = Mathematics+English+Exercise;
    						sum /= 3;
 						printf("Points, including 3 subjects : %d\n",sum);  
						 if(sum<50){
						        printf("You're FAIL \n");	
						 }else if(sum<80){
       						        printf("You're PASS \n");
						 }else if(sum<=100){
					                printf("You're EXCELLENCE \n");
						 }else{ 
       							printf("total is more than 100");
 						 }//if SUM
                                                                                   //END ex13.c
                                                 printf("\n\n\tPress 1 out of this page : ");
                                                 scanf("%d",&exit);
                                                 selectweek04=19;
                                     }//END week04 ex13.c
                                       break;
                                 case 14:
                                       {//main week04 ex14.c
                                            int sum, sys_num ;                 //ex14.c
  						unsigned seed;
    						seed = time(NULL);
    						srand(seed);
    						sys_num = rand(seed)% 20 +1 ;
                                                printf("\n\n\tWEEK04 EX14.C \n");
  						printf("\n Please enter the random (1-20) : ");
   						scanf( "%d",&sum);
                                                 printf("\nAns\n");
						  if(sum<sys_num){
   						     printf("Your guess is too low \n");
						  }if(sum==sys_num){
        					     printf("Congratulation! you did it \n");
 						  }else if(sum>sys_num){	
						     printf("Your guess is too high \n");
						  }//IF 
                                                                                //END ex14.c
                                                 printf("\n\n\tPress 1 out of this page : ");
                                                 scanf("%d",&exit);
                                                 selectweek04=19;
                                       }//END week04 ex14.c
                                       break;
                                 case 15:
                                       {//main week04 ex14.c
                                           float radius;                       //ex15.c
                                           printf("\n\n\tWEEK04 EX15.C \n");
  					   printf("\nPlease enter the radius \n");
   					   scanf ( "%f",&radius);
                                           printf("\nAns\n");
    					   if(0<radius && radius<=90){
   					     printf("I \n");
 					   }else if(90<radius && radius<=180){
  					     printf("II \n");
 					   }else if(180<radius && radius<=270){
					     printf("III \n");
					   }else if(270<radius && radius<=360){
       					     printf("IV \n");
					   }else{
  					     printf("Enter the new radius \n");
					   }//END IF 
                                                                                //END ex15.c
                                                 printf("\n\n\tPress 1 out of this page : ");
                                                 scanf("%d",&exit);
                                                 selectweek04=19;
                                       }//END week04 ex15.c
                                       break;
                                 case 16:
                                       #define labor_cost 35                      //ex16.c
				       #define vat 0.07 
                                       {//main week04 ex15.c
                                       		float length , width , Percent_decrease , Price_per ;
						float act , Earnings , installation_fee , discount , After_discount , tax , Net_cost ; 
                                                      printf("\n\n\tWEEK04 EX16.C \n");
						      printf("\nPlease enter the length of the room : ");
   						      scanf ( "%f",&length);
 						      printf("Please enter the width  of the room : ");
   						      scanf ( "%f",&width);
   						      printf("The percentage reduction to its customers : ");
   						      scanf ( "%f",&Percent_decrease);
   						      printf("Price per square foot : ");
   						      scanf ( "%f",&Price_per);
  						//show In put 
                                                 printf("\nAns\n");
    						      printf("Please enter the length of the room : %f \n",length);
 						      printf("Please enter the width  of the room : %f \n",width);
   						      printf("The percentage reduction to its customers : %f \n",Percent_decrease);
  						      printf("Price per square foot : %f \n\n",Price_per);	   
                                                       act = length * width;
                                                       Earnings = act * labor_cost;
						       installation_fee = act + Earnings;
						       discount = installation_fee * vat;
						       After_discount = installation_fee - discount;
						       tax = After_discount * vat;
						       Net_cost = After_discount + tax;
	  printf("                                    M E A S U R E M E N T                                    \n");
	  printf("                                                                                             \n");
	  printf("  Length                                                                      %f  ft         \n",length); 
	  printf("  Width                                                                       %f  ft         \n",width);
	  printf("                                                                                             \n");
	  printf("  Area                                                                        %f  square ft  \n",act);
	  printf("                                                                                             \n");
	  printf("                                                                                             \n");
	  printf("                                                                                             \n");
	  printf("                                         C H A R G E                                         \n");
	  printf("                                                                                             \n");
	  printf("  DESCRIPTIONS                            COST/SQ.FT.                       CHARGE (BAHT)    \n");
	  printf("                                                                                             \n");
	  printf("  ------------                           -------------                     ---------------   \n");
	  printf("                                                                                             \n");
	  printf("  Carpet                                  %f                                 %f              \n",Earnings,installation_fee);
	  printf("  Labor                                   34.00                                              \n");
	  printf("                                                                             %f              \n",discount);
	  printf("                                                                                             \n");
	  printf("                                                                           ---------------   \n");
	  printf("                                                                                             \n");
	  printf("  Installed Price                                                            %f              \n",After_discount);
	  printf("  Discount                                %f                                 %f              \n",tax,Net_cost);

                                                                          //END ex16.c
                                                 printf("\n\n\tPress 1 out of this page : ");
                                                 scanf("%d",&exit);
                                                 selectweek04=19;
                                       }//END week04 ex16.c
                                       break;
                                 case 17:
                                      {//main week04 ex17.c
	                                    int aom , aom1 , aom2 ;     //ex17.c
                                            int  za0 , za1 , za2 , za3 ; 
                                            printf("\n\n\tWEEK04 EX17.C \n");
                                            printf("\nPlease enter two integer numbers : ");
                                            scanf("%d%d",&aom,&aom1);				
	    printf(" \n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
 	    printf(" *                                                                                   * \n");
            printf(" *                                    M E N U                                        * \n");
            printf(" *                                                                                   * \n");
            printf(" *   1. ADD                                                                          * \n");
            printf(" *   2. SUBTRACT                                                                     * \n");
            printf(" *   3. MULTIPLY                                                                     * \n");
            printf(" *   4. MODOLO                                                                       * \n");
            printf(" *                                                                                   * \n");
            printf(" * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
        						printf("\nPlease Type Your Choice And Key Return : ");
						        scanf("%d",&aom2);
    							za0 = aom + aom1;
   							za1 = aom - aom1;
    							za2 = aom * aom1;
    							za3 = aom % aom1; 
                                                        printf("\nAns\n");
     							switch(aom2){ 
        							case 1 : printf("%d + %d = %d\n",aom,aom1,za0);
									break;
								case 2 : printf("%d - %d = %d\n",aom,aom1,za1);
									break ;
								case 3 : printf("%d * %d = %d\n",aom,aom1,za2);
									break ;
								case 4 : printf("%d mod %d = %d\n",aom,aom1,za3);
									break ;
								default : printf("Return\n");
							}//END switch
                                                                          //END ex17.c
                                                 printf("\n\n\tPress 1 out of this page : ");
                                                 scanf("%d",&exit);
                                                 selectweek04=19;
                                      }//END week04 ex17.c
                                       break;
                                 case 18: selectweek04=19;
                                       break;
                       }//END switch 
                 }//END IF                      
            }while(selectweek04!=19);
}//END week04
void week05(){
          int intputweek05=0,selectweek05=13; 
          do{
               week05_menu(selectweek05);
          	switch(intputweek05=getch()) {
			case 119: selectweek05 = selectweek05-1;            // up 
				  break;
			case 65 : selectweek05 = selectweek05-1;            // up 
				  break;
			case 115: selectweek05 = selectweek05+1;	    // downs 
				  break;
			case 66 : selectweek05 = selectweek05+1;            // downs 
				  break;
                }//switch(intputweek05=getch())
                if(selectweek05<=13){
                   selectweek05=13;
                }else if(selectweek05>=19){
                   selectweek05=19;
                }//END IF selectweek05
                week05_menu(selectweek05);
                if(intputweek05==10){
                       switch(selectweek05){
                             int exit=0;
					case 13:
                                            {//main Week05 ex13.c
                                                   int  j;                                       //ex13.c
                                                          printf("\n\n\tWEEK05 EX13.C \n");
     							  printf("\nEnter a number and l'll print it backward : ");
     							  scanf("%d",&j);
                                       	                  printf("\nAns\n\n");
      								 do{
    								         printf("%d",j%10);
 								         j/=10; 
   								   }while (j>0);
     							  printf("\n Have a good day \n");       
                                                                       				   //END ex13.c
                                                 printf("\n\n\tPress 1 out of this page : ");
                                                 scanf("%d",&exit);
                                                 selectweek05=20;
                                            }//END Week05 ex13.c
                                            break;
					case 14:
                                            {//main Week05 ex14.c
                                               int  i, j , a , max ,min;                        //ex14.c
                                                     printf("\n\n\tWEEK05 EX14.C \n");
						     for ( i=1; i<=10;i++) {  // Think positive conditions before every one. Was determined to do it 10 times
    							 printf("Enter a number ( 0 - 999 ) : ");
     							 scanf("%d",&a);      // showinput 
 						         printf(" number = %d\n",a);     
							 if(i==1){  //process
								max = a;
								min = a;
							 }if(a>max){ 
							        max = a ;         //Storage Max 	
							 }if(a<min){
    							        min = a ;      // Storage Min
							 }//END IF
  						     }//END For   
                                       	             printf("\nAns\n");
     						     printf("\n Max = %d \n",max);
                                                     printf("\n Min = %d \n",min);
                                                     printf("\n Have a good day \n");
                                                                       				   //END ex14.c
                                                 printf("\n\n\tPress 1 out of this page : ");
                                                 scanf("%d",&exit);
                                                 selectweek05=20;
  
                                            }//END Week05 ex14.c
                                            break;
					case 15:
                                             {//main Week05 ex15.c
                                                  int a ,b=1,c;                                //ex15.c
                                                     printf("\n\n\tWEEK05 EX15.C \n\n");
     					              printf("Please Enter  : ");
      						      scanf("%d",&a);
						      printf("\n%d!",a);          
							  for(c=1;c<=a;c++){ 
							      b*= c;
							  }//for (c)
						      printf(" Ans : %d\n",b);
                                                                       			      //END ex15.c
                                                 printf("\n\n\tPress 1 out of this page : ");
                                                 scanf("%d",&exit);
                                                 selectweek05=20;
                                             }//END Week05 ex15.c
                                            break;
					case 16:
                                             {//main Week05 ex16.c
                                                   int input;                                 // ex16.c
                                                        printf("\n\n\tWEEK05 EX16.C \n\n");
  							printf("Please enter the desired value of Fibonacci : ");
						        scanf("%d",&input);
                                       	                printf("\nAns\n");
						        printf("Fibonacci 5 is : %d\n",fibonacci(input));  //function week05 ex16.c
                                                                       			      //END ex16.c
                                                 printf("\n\n\tPress 1 out of this page : ");
                                                 scanf("%d",&exit);
                                                 selectweek05=20;
                                             }////END Week05 ex16.c
                                            break;
					case 17:
                                             {//main Week05 ex17.c
                                                   int aom1,aom2,i,j;               //ex17.c
								while ((aom1<1 || aom1>5) && (aom2<2 || aom2>9) ||aom1!=10 ) {
									system("clear");
                                                                        printf("\n\n\tWEEK05 EX17.C \n\n");
								        printf("\n\t** * * * * * * * * * * * * * * **\n");	
									printf("\t*             MENU              *\n");
									printf("\t                                 \n");
									printf("\t*      1. Pattern One           *\n");
									printf("\t       2. Pattern Two            \n");
									printf("\t*      3. Pattern Three         *\n");
									printf("\t       4. Pattern Four           \n");
									printf("\t*      5. Quit                  *\n");
									printf("\t*        			  *\n");
									printf("\t** * * * * * * * * * * * * * * **\n");
 
									 do {	
										    printf("\nChoose an Option (between 1 and 5)  " );	 
										    scanf("%d",&aom1);
										       if(aom1<1 || aom1>5)
 											        printf("\nYour Option is incorrect. Please try again");
							                    }while(aom1<1 || aom1>5);
								         do {
										    printf("\nChoose an Option (between 2 and 9)  ");	 
										    scanf("%d",&aom2);
										       if(aom2<2 || aom2>9) 
											        printf("\nYour Option is incorrect. Please try again");   
								            }while(aom2<2 || aom2>9);
                                       	                                    printf("\nAns\n\n");
									    switch(aom1)  {
										  case 1 : for(i=1;i<=aom2;i++){
         										     for(j=1;j<=aom2;j++){
       	        									       if(i==j)
       	             										   printf("5");
                    									       else
               	 									           printf("B");
        										      }//END For j
											       printf("\n");
                                                                                            }//END For i
										          break;
       										  case 2 : for(i=aom2;i>=1;i--){
                                                                                             for(j=1;j<=aom2;j++){
                                                                                               if(i==j)
                                                                                                   printf("5");
                                                                                               else
                                                                                                   printf("B");
                                                                                               }//END For j 
                                                                                                  printf("\n");
                                                                                            }//END For i
    											  break;
								                  case 3 : for(i=aom2;i>=1;i--){
                   									     for(j=1;j<=aom2;j++){
        									                  if(i<=j)
										                    printf("5");
                      										  else
             											    printf("B");
          										     }//END For j
 										                printf("\n");
       											     }//END For i
     											  break;  
     										   case 4 : for (i=1;i<=aom2;i++){
                									      for(j=1;j<=aom2;j++){
                 									          if(i<=j)
              								                             printf("B");
                										  else
          											     printf("5");
          										       }//END For j
           											 printf("\n");
       											     }//END For i
     											   break;
										   case 5:   
  										          aom1=10;aom2=5;
										//  exit (aom1!=5 & aom2!=5);  
          										   break;
     									  }//END Switch      
                                                                    printf("\n\n\tPress 1 out of this page : ");
                                                                    scanf("%d",&exit);
                                                                  }//END while
                                                                       			      //END ex17.c
                                                 selectweek05=20;
                                             }////END Week05 ex17.c
                                            break;
					case 18:
                                             {//main Week05 ex18.c
                                                    int aom1,aom2,aom3,i,j,Exit=1;              //ex18.c
						    do{
							system("clear");
                                                        printf("\n\n\tWEEK07 EX18.C \n\n");
        						printf("\n\t** * * * * * * * * * * * * * * **\n");	
							printf("\t*             MENU              *\n");
							printf("\t                                 \n");
							printf("\t*      1. ADD                   *\n");
							printf("\t       2. SUBTRACT               \n");
							printf("\t*      3. MULTIPLY              *\n");
							printf("\t       4. MODULO                 \n");
							printf("\t*      5. EXIT                  *\n");
							printf("\t*                               *\n");
							printf("\t** * * * * * * * * * * * * * * **\n"); 
							 do {	
							    printf("\nChoose an Option (between 1 and 5)  " );	 
							    scanf("%d",&aom1);
						            if(aom1<1 || aom1>6)
        							 printf("\nYour Option is incorrect. Please try again");
						            }while(aom1<1 || aom1>5);
							 do {
                                                              if(aom1!=5){
   								 printf("\n( 1 - 100) : ");	 
							         scanf("%d",&aom2); 
   								 printf("\n( 1 - 100) : ");	 
							         scanf("%d",&aom3);
                                                              }//if 
						            if(aom2<1 || aom2>100 || aom3<1 || aom3>100) 
							         printf("\n\t\tPlease enter the information again.");    
						            }while(aom2<1||aom2>100 || aom3<1||aom3>100);
                                       	                    printf("\nAns\n\n");
							 switch(aom1){
								  case 1 : printf("\n %d + %d = %d\n ",aom2,aom3,(aom2+aom3));
								     break;
  							          case 2 : printf("\n %d - %d = %d\n ",aom2,aom3,(aom2-aom3));
								     break;
							          case 3 : printf("\n %d * %d = %d\n ",aom2,aom3,(aom2*aom3));
								     break;  
						                  case 4 : printf("\n %d % %d = %d\n ",aom2,aom3,(aom2%aom3)); 
								     break;
						                  case 5: aom1=5;
								     break;
     						          }//END witch 
                                                   printf("\n\n\tPress 1 out of this page : ");
                                                   scanf("%d",&exit);
                                                  }while(aom1!=5);
                                                                       			      //END ex18.c
                                                 selectweek05=20;
                                             }////END Week05 ex18.c
                                            break;
					case 19: selectweek05=20;
                                            break;
                        }//END switch
                }//END IF
            }while(selectweek05!=20);
}//END week05
void week06(){
          int intputweek06=0,selectweek06=14; 
          do{
               week06_menu(selectweek06);
          	switch(intputweek06=getch()) {
			case 119: selectweek06 = selectweek06-1;            // up 
				  break;
			case 65 : selectweek06 = selectweek06-1;            // up 
				  break;
			case 115: selectweek06 = selectweek06+1;	    // downs 
				  break;
			case 66 : selectweek06 = selectweek06+1;            // downs 
				  break;
                }//switch(intputweek06=getch())
                if(selectweek06<=14){
                   selectweek06=14;
                }else if(selectweek06>=20){
                   selectweek06=20;
                }//END IF selectweek06
                week06_menu(selectweek06);
                if(intputweek06==10){
                       switch(selectweek06){
                             int exit=0;
                                case 14 :
                                     {//main Week06 ex14.c
					int a,b,sum=0,sum1=0,sum2=0,sum3=0;  //END ex14.c
                                           printf("\n\n\tWEEK06 EX14.C \n\n");
 					   a = getData();
				           b = getData();
					    sum = add(a,b);
					    printRes (a,b,sum);
					    sum1 = delete(a,b);
					    printdelete (a,b,sum1);
					    sum2 = multiply(a,b);
					    printmultiply (a,b,sum2);
					    sum3 = Raised(a,b);
					    printRaised (a,b,sum3);         //END ex14.c
 
                                            printf("\n\n\tPress 1 out of this page : ");
                                            scanf("%d",&exit);
                                            selectweek06=21;     
				     }//END main Week06 ex14.c
                                     break;
                                case 15 :
                                     {//main Week06 ex15.c
  					int a,b,sum=0;                 // ex15.c
                                           printf("\n\n\tWEEK06 EX15.C \n\n");
					    a = data();
					    b = data();
					    sum = multiply(a,b);
                                       	    printf("\nAns\n\n");
					    printmultiply1(a,b,sum);   //END ex15.c

                                            printf("\n\n\tPress 1 out of this page : ");
                                            scanf("%d",&exit);
                                            selectweek06=21;     
				     }//END main Week06 ex15.c
                                     break;
                                case 16 :
                                     {//main Week06 ex16.c
						  int a;                                                  // ex16.c
                                                        printf("\n\n\tWEEK06 EX16.C \n\n");
							printf("Please enter the Factorial : ");
							scanf("%d",&a);
							printf("Factorial  is : %d\n",factorial(a));      //END ex16.c

                                            printf("\n\n\tPress 1 out of this page : ");
                                            scanf("%d",&exit);
                                            selectweek06=21;     
				     }//END main Week06 ex16.c
                                     break;
                                case 17 :
                                     {//main Week06 ex17.c
                                                   int a;                                                  // ex17.c
                                                        printf("\n\n\tWEEK06 EX17.C \n\n");
							printf("Please enter the Fibonacci : ");
							scanf("%d",&a);
							printf("Fibonacci is : %d\n",fibonacci(a));        //END ex17.c

                                            printf("\n\n\tPress 1 out of this page : ");
                                            scanf("%d",&exit);
                                            selectweek06=21;     
				     }//END main Week06 ex17.c
                                     break;
                                case 18 :
                                     {//main Week06 ex18.c
					float length , width , Percent_decrease , Price_per ;       //ex18.c
					float aom , aom1 , aom2 , aom3 , aom4 , aom5 , aom6 ; 
                                           printf("\n\n\tWEEK06 EX18.C \n\n");
					   printf("Please enter the length of the room : ");
					   scanf ( "%f",&length);
					   printf("Please enter the width  of the room : ");
					   scanf ( "%f",&width);
					   printf("The percentage reduction to its customers : ");
					   scanf ( "%f",&Percent_decrease);
					   printf("Price per square foot : ");
					   scanf ( "%f",&Price_per);
				      //input 
					   input(length,width,Percent_decrease,Price_per);
				      // calculate
					   aom = length * width;
					   aom1 = aom * labor_cost;
					   aom2 = aom + aom1;
					   aom3 = aom2 * vat;
					   aom4 = aom2 - aom3;
					   aom5 = aom4 * vat;
					   aom6 = aom4 + aom5;     
				      // out put  
					   output(length,width,Percent_decrease,Price_per,aom,aom1,aom2,aom3,aom4,aom5,aom6); 
                                                                                                     //END ex18.c
                                            printf("\n\n\tPress 1 out of this page : ");
                                            scanf("%d",&exit);
                                            selectweek06=21;     
				     }//END main Week06 ex18.c
                                     break;
                                case 19 :
                                     {//main Week06 ex19.c
					  int aom1;                                            // ex19.c
						system("clear");                                                              
                                                printf("\n\n\tWEEK06 EX19.C \n\n");
					        printf("\t** * * * * * * * * * * * * * * * * * *\n");	
						printf("\t*             MENU                    \n");
						printf("\t                                     *\n");
						printf("\t*      1. Multiplication table        \n");
						printf("\t*      2. EXIT                       *\n");
						printf("\t*        			        \n");
						printf("\t** * * * * * * * * * * * * * * * * * *\n"); 
					    while(aom1!=2) { 
						do {
	  					     printf("Please select menu : ");	
 						     scanf("%d",&aom1);
       							if(aom1<1 || aom1>2)
						             printf("\n Please try again\n");
						        }while(aom1<1 || aom1>2);  
							switch(aom1){
							   case 1 :  
								system("clear");
                                                                  printf("\n\n\tWEEK06 EX19.C \n\n");
							          printf("\t** * * * * * * * * * * * * * * * * * *\n");
							          printf("\t*             MENU                    \n");
							          printf("\t                                     *\n");
							          printf("\t*      1. Multiplication table  <     \n");
							          printf("\t*      2. EXIT                       *\n");
							          printf("\t*                                     \n");
							          printf("\t** * * * * * * * * * * * * * * * * * *\n");
							          multi();
                                                                 break;
                                                           case 2 : 
                                                                system("clear");
							          printf("\t** * * * * * * * * * * * * * * * * * *\n");
							          printf("\t*             MENU                    \n");   
							          printf("\t                                     *\n");
							          printf("\t*      1. Multiplication table        \n");
							          printf("\t*      2. EXIT                  <    *\n");
							          printf("\t*                                     \n");
							          printf("\t** * * * * * * * * * * * * * * * * * *\n");
							         break;
						         } //END switch  
                                                      printf("\n"); 
                                                    }//END while (aom1!=3)
                                                                                                     //END ex19.c
                                            printf("\n\n\tPress 1 out of this page : ");
                                            scanf("%d",&exit);
                                            selectweek06=21;     
				     }//END main Week06 ex19.c
                                     break;
                                case 20 : selectweek06=21;
                                     break;
                         }//END switch
                 }//END IF
             }while(selectweek06!=21);
}//END Weeek06
void week07(){
          int intputweek07=0,selectweek07=7; 
          do{
               week07_menu(selectweek07);
          	switch(intputweek07=getch()) {
			case 119: selectweek07 = selectweek07-1;            // up 
				  break;
			case 65 : selectweek07 = selectweek07-1;            // up 
				  break;
			case 115: selectweek07 = selectweek07+1;	    // downs 
				  break;
			case 66 : selectweek07 = selectweek07+1;            // downs 
				  break;
                }//switch(intputweek07=getch())
                if(selectweek07<=7){
                   selectweek07=7;
                }else if(selectweek07>=12){
                   selectweek07=12;
                }//END IF selectweek06
                week07_menu(selectweek07);
                if(intputweek07==10){
                       switch(selectweek07){
                            int exit=0;
                                case 7 :
                                     {//main Week07 ex07.c
				         system("clear");                                                              
                                         printf("\n\n\tWEEK07 EX07.C \n\n");
                                         Intput  ();                   //ex07.c
	  				 Process (); 
					 Output  ();                   //END ex07.c

                                            printf("\n\n\tPress 1 out of this page : ");
                                            scanf("%d",&exit);
                                            selectweek07=14;     
				     }//END main Week07 ex07.c
                                     break;
                                case 8 :
                                     {//main Week07 ex08.c
				           system("clear");                                                              
                                           printf("\n\n\tWEEK07 EX08.C \n\n");                    
                                           int arraySize,sum,avg;                             //ex08.c
    						   inputSize(&arraySize);
					           printf("arraySize : %d\n",arraySize);
					           int arr[arraySize];
  							     printf("\n ++++++ Input  ++++++\n\n");
						             inputVal(arr,arraySize);
						             printf("\n ++++++ Show result  ++++++\n\n");
						             SHOWVAL(arr,arraySize);
 						             sum = getSum(arr,arraySize);
						             printf("Sum : %d\n",sum);
  						             avg = getAvg(arr,arraySize);
						             printf("Avg : %d\n",avg); 
						    	     printf("\n ++++++ Max Min  ++++++\n\n");
						             maxmai(arr,arraySize);             //END ex08.c

                                            printf("\n\n\tPress 1 out of this page : ");
                                            scanf("%d",&exit);
                                            selectweek07=14;     
				     }//END main Week07 ex08.c
                                     break;
                                case 9 :
                                     {//main Week07 ex09.c
                                            int arraySize,sum,avg;                       // ex09.c
  						  InputSize(&arraySize);
 					          printf("arraySize : %d\n",arraySize);
       					    int arr[arraySize];
					          printf("\n ++++++ Input  ++++++\n\n");
       						  InputVal(arr,arraySize);
					          printf("\n ++++++ Show result  ++++++\n\n");
 					          ShowVal(arr,arraySize);  
  					     /////////// search ///////////
      					    int number;
  					          printf("Input search : ");
   					          scanf("%d",&number);
   					          Search(number,arr,arraySize);
    					     /////////////////////////////
					          sum = GetSum(arr,arraySize);
      						  printf("Sum : %d\n",sum);
    					          avg = GetAvg(arr,arraySize);
      						  printf("Avg : %d\n",avg); 
	  					  printf("\n ++++++ Max Min  ++++++\n\n");
       						  Maxmai(arr,arraySize); 
                                                                                            //END ex09.c
                                            printf("\n\n\tPress 1 out of this page : ");
                                            scanf("%d",&exit);
                                            selectweek07=14;     
				     }//END main Week07 ex09.c
                                     break;
                                case 10 :
                                     {//main Week07 ex10.c
                                   	    system("clear");
                                            printf("\n\n\tWEEK07 EX10.C \n\n");                    
					   ////////// input ////////////////////
  				        int row,col;                                  // ex10.c
				      	    printf("\n=========== Input ============\n\n");
				            printf("Ples Enter Rows = ");
				            scanf("%d",&row);
				            printf("Ples Enter Column = ");
				            scanf("%d",&col);    
				           ///////// process and output /////////
			                int table[row][col];
				            PROCESS(row,col);
 				            OUTPUT(row,col);
                                                                                        //END ex10.c
                                            printf("\n\n\tPress 1 out of this page : ");
                                            scanf("%d",&exit);
                                            selectweek07=14;     
				     }//END main Week07 ex10.c
                                     break;
                                case 11 :
                                     {//main Week07 ex11.c
					  int numMENU;                                  //  ex11.c
					   int floor;
					   int room;
						        printf("\nEnter floors : ");
						        scanf("%d", &floor);
						        printf("Eter rooms : ");
					                scanf("%d", &room); 
						 do {
                                                        printf("\n\n\tWEEK07 EX11.C \n\n");                    
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
                                                                                        //END ex11.c
                                            printf("\n\n\tPress 1 out of this page : ");
                                            scanf("%d",&exit);
                                            selectweek07=14;     
				     }//END main Week07 ex11.c
                                     break;
                                case 12 : selectweek07=14;
                                     break;
                         }//END switch
                 }//END IF
             }while(selectweek07!=14);
}//END Weeek07
