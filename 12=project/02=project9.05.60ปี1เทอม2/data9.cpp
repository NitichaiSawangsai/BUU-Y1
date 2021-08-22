using namespace std;
#include <stdio.h>      //              Language  C                   //
#include <iostream>     //              Language  C++                 //
#include <string.h>     //             Input Letter                   //
#include <stdlib.h>     //            system("clear");                //
#include <time.h>       //             /* timer 1 */                  //
#include <ctime>        //             /* timer 2 */                  //
#include <unistd.h>     // /* library of " getch "                 */ //
#include <termios.h>    // /* Taken from the Internet. " getch "   */ //
class Time {
	private :
		int Hour;
		int minute;
		int second;
	public  :
		Time(){
			Hour=0;
			minute=0;
			second=0;
		}
		Time(int h,int m,int s){
			Hour=h;
			minute=m;
			second=s;
		}
		void setTime(int h,int m,int s){
			Hour=h;
			minute=m;
			second=s;
		}
		int getHour(){
			return  Hour;
		}
		int getminute(){
			return  minute;
		}
		int getsecond(){
			return  second;
		}
		void print(){
			cout<<Hour<<":"<<minute<<":"<<second;
		}

};
class day_Month_year{
	private :
		int day;
		int Month;
		int year;
	public  :
		day_Month_year(){
			day=0;
			Month=0;
			year=0; 
		}
		day_Month_year(int d,int m,int y){
			day=d;
			Month=m;
			year=y; 
		}
		void setday_Month_year(int d,int m,int y){
			day=d;
			Month=m;
			year=y; 
		}
		void setday(int d){
			day=d;
		}
		void setmonth(int m){
			Month=m;
		}
		void setyear(int y){
			year=y;
		}
		int getday(){
			return day;
		}
		int getmonth(){
			return  Month;
		}
		int getyear(){
			return year;
		}
		void print(){
			cout<<day<<"/"<<Month<<"/"<<year;
		}

};
class Each_member{  // Input =  Id , Name , Address , Facebook , Line , other_contact_channels   
	private :
		int ID;
		string Name;
		string address;
		string Facebook;
		string Line;
		string other_contact_channels;
		int lenght;
	public  :
		Each_member(){
			ID = 0;
			Name = " ";
			address = " ";
			Facebook = " ";
			Line  = " ";
			other_contact_channels = " ";
			lenght=0;
		}//Each_member
		Each_member(int id,string name,string Address,string facebook,string line,string OTHER_contact_channels){
			ID = id;
			Name = name;
			address = Address;
			Facebook = facebook;
			Line = line;
			other_contact_channels = OTHER_contact_channels;
			lenght++;
		}//setEach_member
		void setEach_member(int id,string name,string Address,string facebook,string line,string OTHER_contact_channels){
			ID = id;
			Name = name;
			address = Address;
			Facebook = facebook;
			Line = line;
			other_contact_channels = OTHER_contact_channels;
			lenght++;
		}//setEach_member
		int getID(){
			return  ID;
		}//setID
		string getName(){
			return  Name;
		}//setID
		string getaddress(){
			return  address;
		}//setaddress
		string getFacebook(){
			return  Facebook;
		}//setFacebook
		string  getLine(){
			return  Line;
		}//setLine
		string getother_contact_channels(){
			return  other_contact_channels;
		}//setother_contact_channels
		void print(int I){
				cout<<"------------------- ["<<I<<"] --------------------"<<endl;
				cout<<"Date of entry : ";
				cout<<endl;
				cout<<"ID       : "<<ID<<endl;
				cout<<"Name     : "<<Name<<endl;
				cout<<"Address  : "<<address<<endl;
				cout<<"Facebook : "<<Facebook<<endl;
				cout<<"Line     : "<<Line<<endl;
				cout<<"other_contact_channels : "<<other_contact_channels<<endl;
			        cout<<"----------------------------------------------------"<<endl;
		}//Each_member
};
class Security {   //Input == set ( IDpassword && password == 9 )
	private :
		string IDpassword1;
		string password1;
	public  :
		void setsecurity(string ID1,string word1){  // ID1 && word1 == input    // ID2 && word2  == set
			IDpassword1=ID1;
			password1=word1;
		}
		bool process(){
			int countpass1=0;
			int countpass2=0;
			string IDpassword2;
			string password2;
			string ee;
			char pass;
			do{
				system("clear");
				cout<<"ID : ";
				cin>>IDpassword2;
				cout<<"Password : ";

				while(countpass2<9){
					cin>>pass;
					countpass2++;
					if(countpass2>0){
						ee+="*";
						password2+=pass;
						system("clear");
						cout<<"ID : "<<IDpassword1<<endl; 
						cout<<"Password : ";
						cout<<ee;
					}//if

				}//while
				if(IDpassword2 == IDpassword1){
					if(password1 == password2){
						countpass1=1;
					}
				}
				if(countpass1==1){
					cout<<endl;
					cout<<"++++++ Yes ++++++"<<endl;
					return 1;
				}else{
					cout<<endl;
					cout<<"++++++ No  ++++++"<<endl;
					return 0;
				}
			}while(countpass1!=1 && countpass1!=0);

		}//process

};
class Include_data : public Security{
	private :
		Each_member Staffi[100]; //class Each_member
		day_Month_year staff;     //class day_Month_year
		Time day_Time;            //class Time
		string project;
                int I;
	public  :
		Include_data(){
			project=" ";
                        I=0;
		}
		void setday_Month_year(){
			time_t now = time(0);
			char* dt = ctime(&now);
			tm *gmtm = gmtime(&now);
			tm *ltm = localtime(&now);
			dt = asctime(gmtm);
			staff.setday_Month_year(ltm->tm_mday,1 + ltm->tm_mon,1900 + ltm->tm_year);
		}
		void set_Time(){
			time_t now = time(0);
			char* dt = ctime(&now);
			tm *gmtm = gmtime(&now);
			tm *ltm = localtime(&now);
			dt = asctime(gmtm);
			day_Time.setTime(ltm->tm_hour,1+ltm->tm_min,1+ltm->tm_sec);

		}
		void setproject(string pro){
			project=pro;
		}
                void setInclude_dataforEach_member(int i,int o,Each_member e){
                        I=i;
                        Staffi[o].setEach_member (e.getID(),e.getName(),e.getaddress(),e.getFacebook(),e.getLine(),e.getother_contact_channels());
                } 
                string getproject(){
			return project;         
                } 
                void print(){
                  staff.print();
                  cout<<"  ";
                  day_Time.print();  
                 for(int i=0;i<I;i++){     
                  Staffi[i].Each_member::print(i);
                 }
                }
}; 

class all_accounts {
	private :
		double  money;                   
	public  :
		all_accounts(){
			money=0.00;
		}
		void setall_accounts(double m){
			money=m;
		}
		void deposit(double m){
			money+=m;
		}
		bool withdraw(double m){
			double sum=0.00;
			sum=money-m;
			if(sum>=0){
				if(money>0){
					money-=m;
				}//money>0
			}else{
				cout<<"******** not enough money *********"<<endl;
			}//else
		}
		double getall_accounts(){
			return money;         
		}
		void print(){
			cout<<"Money : "<<money<<endl;
		}

};


void file_R_window(void);
void file_R_data1(void);
struct Picture {
	char Picture_Data1[3000];
	char Picture_Data2[3000];
};struct Picture  Data[1000];
void Select1 (int Select);
void Select2 (int select);
int getch  (void);

void setInclude_data(){
      int ch;
    do {
	system("clear");
	Include_data  a[10];
	string Pro,setpass,setId;
	cout<<"New project name : ";
	cin>>Pro; 
	cout<<"Set Id : ";
	cin>>setId;
	cout<<"Set Password : ";
	cin>>setpass;
	a[0].setproject(Pro);
	a[0].setsecurity(setId,setpass);
        a[0].setday_Month_year();
        a[0].set_Time();
        int num;
        cout<<"How many employees do you have? : ";
        cin>>num;
		int id;
		string Name;
		string address;
		string facebook;
		string line;
		string OTHER_contact_channels;
        Each_member w[num];
        for(int i=0;i<num;i++){
		cout<<"Id : ";
		cin>>id;
		cout<<"Fistname Lastname : ";
		getline(cin,Name);
		getline(cin,Name);
		cout<<"Address : ";
		getline(cin,address);
		cout<<"Facebook : ";
		getline(cin,facebook);
		cout<<"Line : ";
		getline(cin,line);
		cout<<"Other channels : ";
		getline(cin,OTHER_contact_channels);
         w[i].setEach_member (id,Name,address,facebook,line,OTHER_contact_channels);   
        a[0].setInclude_dataforEach_member(num , i , w[i]); 
        }
        a[0].print();
         if((ch=getch())==10){
               cout<<"\n\n\t\t\t\t ==> Back <== "<<endl;
               ch=11;
         }//
     }while(ch!=11);
}//setInclude_data()





int main (){
	int ch1,select1=1;
	int ch2,select2=1; 
	do{
		switch(ch1=getch()) {  // if w = up  && s = down 
			case 119: select1 = select1-1;                        // up for ShowWindows
				  break;
			case 65 : select1 = select1-1;                        // up for ShowWindows
				  break;
			case 115: select1 = select1+1;                        // downs for ShowWindows
				  break;
			case 66 : select1 = select1+1;                        // downs for ShowWindows
				  break;
		}//switch(ch)
		if(select1<1){
			select1=4;
		}else if (select1>4){
			select1=1;
		} 
		Select1(select1); // void Select (int select)
		if(ch1==10){
			switch(select1) {   
				case 1: 
					do{
						switch(ch2=getch()) {  // if w = up  && s = down 
							case 119: select2 = select2-1;                        // up for ShowWindows
								  break;
							case 65 : select2 = select2-1;                        // up for ShowWindows
								  break;
							case 115: select2 = select2+1;                        // downs for ShowWindows
								  break;
							case 66 : select2 = select2+1;                        // downs for ShowWindows
								  break;
						}//switch(ch)
						if(select2<1){
							select2=3;
						}else if (select2>3){
							select2=1;
						}//if(select2<1) 
						Select2(select2); //void Select2 (int select)
						if(ch2==10){
							switch(select2) {
								case 1: 
									setInclude_data();
                                                                        ch2=11;
									break;
								case 2:  

									break;
								case 3: ch2=11; 
									break;
							}//switch(select2)
						}//if(ch2==10)


					}while(ch2!=11);   
					break;
				case 2:  
					break;
				case 3:  
					break;
				case 4: ch1=11;
					cout<<"Good bey"<<endl; 
					break;

			}// switch(select1)

		}//if(ch==10) 

	}while(ch1!=11);
	return 0;
}//End main

void Select1 (int select){
	system("clear");
	file_R_window();
	cout<<Data[0].Picture_Data1;

	if(select==1){
		cout<<"|\t\t\t==> Name a new project <==        \t\t\t  |"<<endl;
		cout<<"|\t\t\tAccess database                   \t\t\t  |"<<endl;
		cout<<"|\t\t\tDelete database                   \t\t\t  |"<<endl;
		cout<<"|\t\t\tExit the program                  \t\t\t  |"<<endl;
	}else if (select==2){
		cout<<"|\t\t\tName a new project                \t\t\t  |"<<endl;
		cout<<"|\t\t\t==> Access database <==           \t\t\t  |"<<endl;
		cout<<"|\t\t\tDelete database                   \t\t\t  |"<<endl;
		cout<<"|\t\t\tExit the program                  \t\t\t  |"<<endl;
	}else if (select==3){
		cout<<"|\t\t\tName a new project                \t\t\t  |"<<endl;
		cout<<"|\t\t\tAccess database                   \t\t\t  | "<<endl;
		cout<<"|\t\t\t==> Delete database <==           \t\t\t  |"<<endl;
		cout<<"|\t\t\tExit the program                  \t\t\t  |"<<endl;
	}else if (select==4){
		cout<<"|\t\t\tName a new project                \t\t\t  |"<<endl;
		cout<<"|\t\t\tAccess database                   \t\t\t  |"<<endl;
		cout<<"|\t\t\tDelete database                   \t\t\t  |"<<endl;
		cout<<"|\t\t\t==> Exit the program <==          \t\t\t  |"<<endl;
	}// if (select1) 
	for(int i=0;i<14;i++){
		cout<<"|\t\t\t                                  \t\t\t  |"<<endl;
	}cout<<" _________________________________________________________________________________ "<<endl;


}//Select1

void Select2 (int select){
	system("clear");
	file_R_window();
	cout<<Data[1].Picture_Data1;

	if(select==1){
		cout<<"|\t\t\t==> Name the project <==                    \t\t  |"<<endl;
		cout<<"|\t\t\tEdit project name                           \t\t  |"<<endl;
		cout<<"|\t\t\t                                 Back       \t\t  |"<<endl;
	}else if (select==2){
		cout<<"|\t\t\tName the project                           \t\t  |"<<endl;
		cout<<"|\t\t\t==> Edit project name <==                  \t\t  |"<<endl;
		cout<<"|\t\t\t                                Back       \t\t  |"<<endl;
	}else if (select==3){
		cout<<"|\t\t\tName the project                           \t\t  |"<<endl;
		cout<<"|\t\t\tEdit project name                          \t\t  |"<<endl;
		cout<<"|\t\t\t                            ==> Back <==   \t\t  |"<<endl;
	}// if (select2) 
	for(int i=0;i<14;i++){
		cout<<"|\t\t\t                                  \t\t\t  |"<<endl;
	}cout<<" _________________________________________________________________________________ "<<endl;
}//select2

void file_R_window(void){
	FILE*myfile;
	char thetext;
	int result;
	int j=0,i=0,row=1;
	myfile=fopen("window1.dat","r");
	result=fscanf(myfile,"%c",&thetext);
	while(result != EOF){
		if(thetext=='^'){
			j=0;
			i++;
		}//if text == ^
		else if(row==1){
			Data[i].Picture_Data1[j]=thetext;
			j++;
		}//else if row==1
		result = fscanf(myfile,"%c",&thetext);
	}// result != EOF
	fclose(myfile);             
}

void file_R_data1(void){
	FILE*myfile;
	char thetext;
	int result;
	int j=0,i=0,row=1;
	myfile=fopen("data1.dat","r");
	result=fscanf(myfile,"%c",&thetext);
	while(result != EOF){
		if(thetext=='^'){
			j=0;
			i++;
		}//if text == ^
		else if(row==1){
			Data[i].Picture_Data2[j]=thetext;
			j++;
		}//else if row==1
		result = fscanf(myfile,"%c",&thetext);
	}// result != EOF
	fclose(myfile);             
}//file_R_data1

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




