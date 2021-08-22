#include<stdio.h>
#include<string.h>
//Global var
int BALANCE=0;
char user[30],pass[30];
//struct
typedef struct{
	char user[30];
	char pass[30];
	char money[30];
}User;
//Function
void upbalance();
void getData();
void create();
void msign();
void login();
void pexit();
void matm();
void deposit();
void withdraw();
void logout();
//Global struct
User Member[99];
int i=0;
//Main
int main(void)
{
	getData();
	system("clear");
	printf("==========================================================\n");	
	printf("               Program: ATM ACOUNT (START!!)              \n");	
	printf("==========================================================\n");	
	msign();
 return 0;
}//main

void upbalance()//update Data
{
	FILE*DATA;
	int l,res;
	char text;
	DATA = fopen("DATA.txt","w");
	res = fscanf(DATA,"%c",&text);
	for(l=0;l<i;l++)
	{
	//if(!(user,Member[l].user && pass,Member[l].pass)){
	  fprintf(DATA,"%s|",Member[l].user);
	  fprintf(DATA,"%s|",Member[l].pass);
	  fprintf(DATA,"%s|\n",Member[l].money);
	//}if
	}//for
	fclose(DATA);
	getData();
 return;
}//edf upbalance

void getData()//load Data
{
	i=0;
	FILE *DATA;
	char text;
 	int l=0,result,mode=1;
	//LoadingData
	DATA = fopen("DATA.txt","a");
	fclose(DATA);

	DATA = fopen("DATA.txt","r");
	result = fscanf(DATA,"%c",&text);
	while(result != EOF){
		if(text == '|'){
			mode++;
			l=0;
			if(mode >=4){
				mode=1;
				i++;
			}
		}
		else if(mode == 1 && text!= '\n'){ 
			Member[i].user[l] = text;
			l++;
		}
		else if(mode == 2){ 
			Member[i].pass[l] = text;
			l++;
		}
		else if(mode == 3){ 
			Member[i].money[l] = text;
			l++;
		}
		result = fscanf(DATA,"%c",&text);
	}
	fclose(DATA);
 return;
}//edf getData

void create()
{
	FILE *DATA;
	DATA = fopen("DATA.txt", "a");
	char users[10];
 	int l=0,result,money,choice=0;
	
	printf("\t\t------------------\n");
	printf("\t\t  Create Account  \n");
	printf("\t\t------------------\n");
 	do{
	 result=0;
 	printf("USER: ");
 	scanf("%s",&Member[i].user);
  	for(l=0;l<i;l++) 
  	if((strcmp(Member[i].user,Member[l].user))==0){
  	 result = 1;
   		printf("This User has been register!!\n ");
		printf("Do you want Try AGAIN\n");
		printf("  1.Yes    2.No\n");
		choice=0;
		scanf("%d",&choice);
		if(choice==2)
		{
		 result=0;
		}
	}
 	}while(result!=0);
	if(choice!=2)
	{
 	fprintf(DATA,"%s|",Member[i].user);
 	 printf("PASSWORD: ");
 	scanf("%s",&Member[i].pass);
 	  fprintf(DATA,"%s|",Member[i].pass);
	 do{
	 printf("START MONEY: ");
	 result = scanf("%d",&money);
	 getchar();
	}while(result != 1);

 	fprintf(DATA,"%d|\n",money);
 	sprintf(Member[i].money,"%d",money);
 	i++;
 	fclose(DATA);
	
	printf("Success!! Now you have account to Login\n ");
	printf("\nDo you want to Login or go to menu\n");
	printf("    1.GO to Login  2.Back to menu\n");
	choice =0;
	scanf("%d",&choice);
	switch(choice)
	{
	 case 1:system("clear");
		login();
		break;
	 case 2:system("clear");
		msign();
		break;
	}
	}//if choice!=2
	else
	{
	 system("clear");
	 msign();
	}	
 return;
}//edf create
	
void msign()
{
//echo
	int choice=0,err=0;
//Print menu
	do{
	printf("\n");
	printf("\t\t+-----------------------------+\n");
	printf("\t\t| +-------------------------+ |\n");
	printf("\t\t| |                         | |\n");
	printf("\t\t| |       Sign in ATM       | |\n");
	printf("\t\t| |                         | |\n");
	printf("\t\t+ +-------------------------+ +\n");
	printf("\t\t| |                         | |\n");
	printf("\t\t| |  1.Creat you account    | |\n");
	printf("\t\t| |  2.Login you account    | |\n");
	printf("\t\t| |  3.Exit                 | |\n");
	printf("\t\t| |                         | |\n");
	printf("\t\t| +-------------------------+ |\n");
	printf("\t\t+-----------------------------+\n");
	printf("\n");
	 if(err==1){
	  printf("[*Error:Your number incorrect,Try again.]\n\n");}//1if
	 printf("\tEnter you option number: ");
	 scanf("%d",&choice);
	 if(choice<1||choice>3)
	 {
	  system("clear");
	  err=1;
	 }
	}while(choice<1||choice>3);//loop choice
//op switch
	switch(choice)
	{
	 case 1:system("clear");
		create();
		break;

	 case 2:
		login();
		break;
	 case 3:
		pexit();
		break;
	}//switch
 return;
}//ed msign

void login()
{
	int choice=0,l,chk=0;

	system("clear");
	printf("\t\t +-------------------------+ \n");
	printf("\t\t |                         | \n");
	printf("\t\t |          Login          | \n");
	printf("\t\t |                         | \n");
	printf("\t\t +-------------------------+ \n");
	printf("\t\t |                         | \n");
	printf("\t\t | User : [ _ _ _ _ _ _ ]  | \n");
	printf("\t\t |                         | \n");
	printf("\t\t | Password : [ _ _ _ _ ]  | \n");
	printf("\t\t |                         | \n");
	printf("\t\t +-------------------------+ \n");
	
	do{
	choice =0;
	printf("User ID: ");
	scanf("%s",&user);
	printf("\n");
	for(l=0;l<i;l++)
	{
	if(strcmp(user,Member[l].user)==0)
	{
	 printf("Login Success!\n");
	 system("clear");
	 printf("\t\t +-------------------------+ \n");
	 printf("\t\t |                         | \n");
	 printf("\t\t |          Login          | \n");
	 printf("\t\t |                         | \n");
	 printf("\t\t +-------------------------+ \n");
	 printf("\t\t |                         | \n");
	 printf("\t\t | User : [%10s   ]  | \n",user);
	 printf("\t\t |                         | \n");
	 printf("\t\t | Password : [ _ _ _ _ ]  | \n");
	 printf("\t\t |                         | \n");
	 printf("\t\t +-------------------------+ \n");
	chk=1;
	}//if
	}//for
	/*else*/if(chk==0)
	{
	 printf("User not found!\n");
	 do{
	  printf("\tDO you want to try again?\n");
	  printf("\t    1.Yes       2.No      \n");
	  choice=0;
	  scanf("%d",&choice);
	 }while(choice!=1&&choice!=2);//dw
	}//else
	}while(choice == 1);//dw
	if(choice==2){
	 system("clear");
	 msign();}//1if
else{
	
//PASSWORD
do{
	choice = 0;
	chk=0;
	printf("Password : ");
	scanf("%s",&pass);
	printf("%s\n",pass);
	printf("\n");
	for(l=0;l<i;l++){
	if(strcmp(user,Member[l].user)==0 && strcmp(pass,Member[l].pass)==0)
	{
	 BALANCE = atoi(Member[l].money);
	 printf("Login Success!\n");
	 system("clear");
	 printf("\t\t +-------------------------+ \n");
	 printf("\t\t |                         | \n");
	 printf("\t\t |          Login          | \n");
	 printf("\t\t |                         | \n");
	 printf("\t\t +-------------------------+ \n");
	 printf("\t\t |                         | \n");
	 printf("\t\t | User : [%10s   ]  | \n",user);
	 printf("\t\t |                         | \n");
	 printf("\t\t | Password : [ * * * * ]  | \n");
	 printf("\t\t |                         | \n");
	 printf("\t\t +-------------------------+ \n");
	 chk=1;
	}//if
	}//for
	if(chk==0)
	{
	 printf("Password incorrect!\n");
	do{
	 printf("\t   DO you want to try again?\n");
	 printf("\t       1.Yes       2.No      \n");
	 choice=0;
	 scanf("%d",&choice);getchar();
	}while(choice!=1&&choice!=2);//dw
	}//else if
}while(choice == 1);//dw
	if(choice==2){
	 system("clear");
	 msign();}//1if
	else
	{
	 do{
	    choice=0;
	    printf("\t\t   Do you sure to Login\n");
	    printf("\t\t      1.YES      2.NO    \n");
	    scanf("%d",&choice);
	 }while(choice!=1&&choice!=2);	
	  system("clear");
	  if(choice==1){
	   matm();
	  }else{
	   login();}//1else
	}//else
}//else
 return;
}//edf login

void matm()
{
//echo
	int choice=0,err=0,choose=0;;
//print 
	system("clear");
	do{
	printf("\n");
	printf("\t\t+-----------------------------+\n");
	printf("\t\t| +-------------------------+ |\n");
	printf("\t\t| |                         | |\n");
	printf("\t\t| |        ATM option       | |\n");
	printf("\t\t| |                         | |\n");
	printf("\t\t+ +-------------------------+ +\n");
	printf("\t\t| |                         | |\n");
	printf("\t\t| |  1.Check your money     | |\n");
	printf("\t\t| |  2.Deposit              | |\n");
	printf("\t\t| |  3.Withdraw             | |\n");
	printf("\t\t| |  4.Logout               | |\n");
	printf("\t\t| |                         | |\n");
	printf("\t\t| +-------------------------+ |\n");
	printf("\t\t+-----------------------------+\n");
	printf("\n");

	 if(err==1){
	  printf("[*Error:Your number incorrect,Try again.]\n\n");}//1if
	 printf("Enter you option number: ");
	 scanf("%d",&choice);getchar();
	 if(choice<1||choice>4)
	 {
	  system("clear");
	  err=1;
	 }
	 }while(choice<1||choice>4);
	choose=0;
	system("clear");
	switch(choice)
	{
	 case 1:
		printf("\n===================\n");
		printf("   Check Balance");
		printf("\n===================\n");
		printf("\n  Money: %d\n",BALANCE);
		printf("\n===================\n");
		do{
		 printf("\n\t\t What you want to do next?");
		 printf("\n\t\t  1.Countinue   2.Logout\n");
		 scanf("%d",&choose);
		}while(choose!=1&&choose!=2);
		if(choose==1){
		 matm();}//1if
		if(choose==2){
		 logout();}//1if
		break;

	 case 2:deposit();
		do{
		 printf("\n\t\t What you want to do next?");
		 printf("\n\t\t  1.Countinue   2.Logout\n");
		 scanf("%d",&choose);
		}while(choose!=1&&choose!=2);
		if(choose==1){
		 matm();}//1if
		if(choose==2){
		 logout();}//1if
		break;
	 case 3:withdraw();
		do{
		 printf("\n\t\t What you want to do next?");
		 printf("\n\t\t  1.Countinue   2.Logout\n");
		 scanf("%d",&choose);
		}while(choose!=1&&choose!=2);
		if(choose==1){
		 matm();}//1if
		if(choose==2){
		 logout();}//1if
		break;
	 case 4:
		logout();
		break;
	}//ed switch
 return;
}//edF matm

void deposit()
{
//echo
	int amount;
	printf("==========================================\n");
	printf("                  DEPOSIT               \n");
	printf("==========================================\n\n");
	printf("How much money do you want to deposit: ");
	scanf("%d",&amount);
	BALANCE += amount;
	printf("\n----------------------------------------");
	printf("\n\t *** Deposit money Success!! ***\n");
	printf("==========================================\n");
	upbalance();
	printf("%d\n",BALANCE);
 return;
}

void withdraw()
{
	int amount;
	printf("==========================================\n");
	printf("                 Withdraw                 \n");
	printf("==========================================\n\n");
	printf("How much money do you want to deposit: ");
	scanf("%d",&amount);
	if(BALANCE<amount)
	{
	 printf("\n   ------------------------------------");
	 printf("\n*** SORRY! You don't have money enough ***\n");
	 printf("==========================================\n\n");
	}
	else
	{
	 BALANCE -= amount;
	 printf("\n---------------------------------------");
	 printf("\n\t *** Withdraw money Success!! ***   \n");
	 printf("==========================================\n");
	}
	upbalance();
	printf("%d\n",BALANCE);
	
 return;
}
void logout()
{
//echo
	int choice=0,err=0;
//print
	system("clear");
	do{
	printf("\n");
	printf("\t\t+-----------------------------+\n");
	printf("\t\t| +-------------------------+ |\n");
	printf("\t\t| |                         | |\n");
	printf("\t\t| | Do you sure to Logout?  | |\n");
	printf("\t\t| |                         | |\n");
	printf("\t\t| +------------+------------+ |\n");
	printf("\t\t+-----------------------------+\n");
	printf("\t\t| +-----------+ +-----------+ |\n");
	printf("\t\t| |   1.YES   | |   2.NO    | |\n");
	printf("\t\t| +-----------+ +-----------+ |\n");
	printf("\t\t+-----------------------------+\n");
	printf("\n");

	 if(err==1){
	  printf("[*Error:Your number incorrect,Try again.]\n\n");}//1if
	 printf("Enter you option number: ");
	 scanf("%d",&choice);
	 if(choice<1||choice>2)
	 {
	  system("clear");
	  err=1;
	 }
	 }while(choice<1||choice>2);
//op switch
	system("clear");
	switch(choice)
	{
	 case 1:
		msign();
		break;

	 case 2:
		matm();
		break;
	}//ed switch
 return;
}//edf logout

void pexit()
{
	system("clear");
	printf("==========================================================\n");	
	printf("               Program: ATM ACOUNT (Closing)              \n");	
	printf("==========================================================\n");	
	printf("                                                          \n");	
	printf("  TTTTT H   H   A   N   N K   K   Y   Y  OOO  U   U       \n");	
	printf("    T   H   H  A A  NN  N K  K     Y Y  O   O U   U       \n");	
	printf("    T   HHHHH AAAAA N N N KKK       Y   O   O U   U       \n");	
	printf("    T   H   H A   A N  NN K  K      Y   O   O U   U       \n");	
	printf("    T   H   H A   A N   N K   K     Y    OOO   UUU        \n");	
	printf("                                                          \n");	
	printf("       ********** FOR USING MY PROGRAM **********         \n");	
	printf("                                                          \n");	
	printf("==========================================================\n");	
	printf("               Program: ATM ACOUNT (Closed!!)             \n");	
	printf("==========================================================\n");	
	
 return;
}//edf pclse
