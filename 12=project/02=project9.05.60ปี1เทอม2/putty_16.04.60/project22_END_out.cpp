using namespace std;
#include <stdio.h>      //              Language  C                   //
#include <iostream>     //              Language  C++                 //
#include <string.h>     //             Input Letter                   //
#include <stdlib.h>     //            system("clear");                //
#include <time.h>       //             /* timer 1 */                  //
#include <ctime>        //             /* timer 2 */                  //
#include <unistd.h>     // /* library of " getch "                 */ //
#include <termios.h>    // /* Taken from the Internet. " getch "   */ //
#include <fstream>      //                file                        //
//#include <conio.h>

int getch(void){
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

void setfriend_true_r(string fri){
	string line;
	ifstream myFile(fri.c_str(), ios::app);
	if(myFile.is_open()){
		while( getline(myFile, line) ) {
			cout << line << endl;
		}
	}
}
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
		virtual void print(){
			cout<<" "<<Hour<<":"<<minute<<":"<<second<<" ";
		}

};
class day_Month_year : public Time{
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
		day_Month_year(int d,int m,int y) {
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
class person :public day_Month_year{
	private :
		string firstName;
		string lastName;
		string status;
	public  :
		person(){
			firstName=" ";
			lastName=" ";
		} 
		person(string firstName,string lastName,string status) {
			this->firstName=firstName;
			this->lastName=lastName;
			this->status=status;
		}
		void setperson(string firstName,string lastName,string status){
			this->firstName=firstName;
			this->lastName=lastName;
			this->status=status;
		}
		void setfirstName(string f){
			firstName=f;
		} 
		void setlastName(string l){
			lastName=l;
		}
		void setstatus(string s){
			status=s;
		}
		string getfirstName(){
			return firstName;
		}
		string getlastName(){
			return lastName;
		}
		string getAllName(){
			return firstName+" "+lastName;
		} 
		string getstatus(){
			return status;
		}
		void print(){
			cout<<"Name : "<<firstName+" "+lastName<<endl;
			cout<<"Birthday : ";
			day_Month_year::print();
			cout<<endl<<"Status : "<<status<<endl;
		}
};
class USER {
	private :
		string username;
		string password;
	public  :
		USER(){
			username=" ";
			password=" ";
		}
		USER(string user,string pass){
			username=user;
			password=pass;
		}
		void setUSER(string user,string pass){
			username=user;
			password=pass;
		}
		void setusername(string user){
			username=user;
		}
		void setpassword(string pass){
			password=pass;
		}
		string getusername(){
			return username;
		}
		string getpassword(){
			return password;
		}
};
class All_data {
	private :
		string friend_Name_List[100][100];
		string group_room[100][100];
		int numfriend;
		int numgroup;
	public  :
		All_data(){
			numfriend=0;
			numgroup=0;
			for(int i=0;i<100;i++){
				for(int j=0;j<100;j++){
					friend_Name_List[i][j]=" ";
					group_room[i][j]=" ";
				} 
			}
		}
		void setFriend(int sec,string fri){
			numfriend++;
			friend_Name_List[sec][numfriend]=fri;
			ifstream myFile(friend_Name_List[sec][numfriend].c_str(),ios::in);
			myFile.close();		 
		}
		void setfriend(int sec,int numfri,string fri){
			friend_Name_List[sec][numfri]=fri;
			ifstream myFile(friend_Name_List[sec][numfri].c_str(),ios::in);
			//myFile<<"  "<<endl;
			myFile.close();		 
		}
		void fri_delete (int sec,int numfri,string AA){
			friend_Name_List[sec][numfri]=AA;
		}


		void setgroup(int sec,string gro){
			numgroup++;
			group_room[sec][numgroup]=gro;
			ifstream myFile(group_room[sec][numgroup].c_str(),ios::in);
			myFile.close();
		}

		void setfriend_w(string fri,string nameuse,string CH,string NUM_I){ // NUM_I=getstringNUM_I()
			if(fri!=NUM_I){
				ofstream myfile (fri.c_str(), ios::app);
				if (myfile.is_open()){
					myfile<<endl<<"  "<<nameuse<<" : "<<endl;
					myfile<<"    "<<CH<<endl;
					myfile.close();
				}else cout << "Unable to open file";
			}
		}
		void setfriend_true_r(string fri){
			string line;
			ifstream myFile(fri.c_str(), ios::app);
			if(myFile.is_open()){
				while( getline(myFile, line) ) {
					cout << line << endl;
				}
			}
		}	 
		bool process (int sec,string f,string fri){
			int NUMtrue=0;
			if(f=="f"||f=="F"){
				for(int i=0;i<100;i++){
					if (friend_Name_List[sec][i]==fri){
						NUMtrue = 1;
						break;
					}
				}if(NUMtrue!=0){
					return 1;
				}else{
					return 0;
				}   
			}else if (f=="g"||f=="G"){
				for(int i=0;i<100;i++){
					if (group_room[sec][i]==fri){
						NUMtrue = 1;
						break;
					}
				}if(NUMtrue!=0){
					return 1;
				}else{
					return 0;
				}
			}
		}	
		void setnumfriend(int i){
			numfriend=i;
		}		
		int getnumfriend(){
			return numfriend;
		}
		int getnumgroup(){
			return numgroup;
		}
		string getfriend(int sec,int i){
			return friend_Name_List[sec][i];
		}
		string getgroup(int sec,int i){
			return group_room[sec][i];
		}
		void print(int sec){
			cout<<"\n+++++++++ Your friends list ++++++++++"<<endl;
			cout<<endl;
			if(numfriend>0){
				for(int i=1;i<=numfriend;i++){
					cout<<"\t["<<i<<"] = "<<friend_Name_List[sec][i]<<endl;
				}
			}else{
				cout<<" ----- Your friend list does not exist. ----- "<<endl;
			}
			cout<<"\n+++++++++ Your group   list ++++++++++"<<endl;
			cout<<endl;
			if(numgroup>0){
				for(int i=1;i<=numgroup;i++){
					cout<<"\t["<<i<<"] = "<<group_room[sec][i]<<endl;
				}
			}else{
				cout<<" ----- Your group  list does not exist. ----- "<<endl;
			}
		}

};
class Security {   //Input == set ( IDpassword && password == 9 )
	private :
		USER *user;
		person *User;
		int num;
		int num_I;

	public  :
		Security(){
			num=0;
			num_I=0;
		}
		void setsecurity(USER u,person p){ 
			num++;
			user = new USER [num+1];
			user[num]=u;
			User = new person [num+1];
			User[num]=p;
		}
		void setfile_security(int n,USER u,person p){ 
			num=n;
			num_I=n;
			user = new USER [num+1];
			user[num]=u;
			User = new person [num+1];
			User[num]=p;
		}		
		void setnum(int n){
			num=n;
		}
		int getnum(){
			return num;
		}
		bool process(){
			int countpass1=0;
			int countpass2=0;
			int countnum=0;
			int num_pass=0;
			string IDpassword2;
			string password2;
			string ee;
			char pass;
			do{
				//system("cls");
				system("clear");
				cout<<"ID : ";
				cin>>IDpassword2;
				cout<<"Password : ";

				for(int i=0;i<=num;i++){
					if(user[i].getusername() == IDpassword2){	
						num_pass=i;
						break;	
					}
				}
				countnum=user[num_pass].getpassword().size();
				while(countpass2<countnum){
					cin>>pass;
					countpass2++;
					if(countpass2>0){
						ee+="*";
						password2+=pass;
						//system("cls");
						system("clear");
						cout<<"ID : "<<IDpassword2<<endl; 
						cout<<"Password : ";
						cout<<ee;
					}//if
				}//while

				for(int i=0;i<=num;i++){
					if(user[i].getusername() == IDpassword2){
						if(user[i].getpassword() == password2){
							countpass1=1;
							num_I=i;
							break;
						}
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
		void setpassword (string pass){
			user[num_I].setpassword(pass);
		}
		void setNUM_I (int I){
			num_I=I;
		}
		int getNUM_I (){
			return num_I;
		}
		string getstringNUM_I(){
			return user[num_I].getusername();
		}
		void print (){
			cout <<"Use Id   : "<<user[num_I].getusername()<<endl;
			cout <<"Password : "<<user[num_I].getpassword()<<endl<<endl;
			User[num_I].print();	
		}
		~Security(){
			delete [] user,User;
		}
};
void Select1 (int select){
	system("clear");
	//system("cls");
	setfriend_true_r("filne1.dat");
	for(int i=0;i<3;i++){
		cout<<" |\t\t\t\t\t                                  \t\t\t\t\t  |"<<endl;
	}
	if(select==1){
		cout<<" |\t\t\t\t\t==> Create one <==                \t\t\t\t\t  |"<<endl;
		cout<<" |\t\t\t\t\tWelcome chat                      \t\t\t\t\t  |"<<endl;
		cout<<" |\t\t\t\t\tExit the program                  \t\t\t\t\t  |"<<endl;
	}else if (select==2){
		cout<<" |\t\t\t\t\tCreate one                        \t\t\t\t\t  |"<<endl;
		cout<<" |\t\t\t\t\t==> Welcome chat <==              \t\t\t\t\t  |"<<endl;
		cout<<" |\t\t\t\t\tExit the program                  \t\t\t\t\t  |"<<endl;
	}else if (select==3){
		cout<<" |\t\t\t\t\tCreate one                        \t\t\t\t\t  |"<<endl;
		cout<<" |\t\t\t\t\tWelcome chat                      \t\t\t\t\t  | "<<endl;
		cout<<" |\t\t\t\t\t==> Exit the program <==          \t\t\t\t\t  |"<<endl;
	}// if (select1) 
	for(int i=0;i<5;i++){
		cout<<" |\t\t\t\t\t                                  \t\t\t\t\t  |"<<endl;
	}cout<<"   _____________________________________________________________________________________________________________ "<<endl;


}//Select1
void Select2 (int select){
	system("clear");
	//system("cls");

	cout<<" _________________________________________________________________________________ "<<endl;
	for(int i=0;i<14;i++){
		cout<<"|\t\t\t                                  \t\t\t  |"<<endl;
	}
	if(select==1){
		cout<<"|\t\t\t==> create a username  <==    		      \t\t  |"<<endl;
		cout<<"|\t\t\tChange or reset your password               \t\t  |"<<endl;
		cout<<"|\t\t\t                                            \t\t  |"<<endl;
		cout<<"|\t\t\t                                 Back       \t\t  |"<<endl;
	}else if (select==2){
		cout<<"|\t\t\tcreate a username                          \t\t  |"<<endl;
		cout<<"|\t\t\t==> Change or reset your password <==      \t\t  |"<<endl;
		cout<<"|\t\t\t                                            \t\t  |"<<endl;
		cout<<"|\t\t\t                                Back       \t\t  |"<<endl;
	}else if (select==3){
		cout<<"|\t\t\tcreate a username                          \t\t  |"<<endl;
		cout<<"|\t\t\tChange or reset your password              \t\t  |"<<endl;
		cout<<"|\t\t\t                                            \t\t  |"<<endl;
		cout<<"|\t\t\t                            ==> Back <==   \t\t  |"<<endl;
	}// if (select2) 
	for(int i=0;i<14;i++){
		cout<<"|\t\t\t                                  \t\t\t  |"<<endl;
	}cout<<" _________________________________________________________________________________ "<<endl;
}//select2
void Select3 (int select){
	system("clear");
	//system("cls");
	setfriend_true_r("filne2.dat");
	for(int i=0;i<5;i++){
		cout<<"|\t\t\t                                  \t\t\t  |"<<endl;
	}
	if(select==1){
		cout<<"|\t\t\t==> Profile  <==    		          \t\t  |"<<endl;
		cout<<"|\t\t\tAdd friend                                  \t\t  |"<<endl;
		cout<<"|\t\t\tTalk with friends                           \t\t  |"<<endl;
		cout<<"|\t\t\tTalk to a group friend                      \t\t  |"<<endl;
		cout<<"|\t\t\tdelete friend                               \t\t  |"<<endl;
		cout<<"|\t\t\t                                            \t\t  |"<<endl;
		cout<<"|\t\t\t                                logout      \t\t  |"<<endl;
	}else if (select==2){
		cout<<"|\t\t\tProfile             	                  \t\t  |"<<endl;
		cout<<"|\t\t\t==> Add friend <==                          \t\t  |"<<endl;
		cout<<"|\t\t\tTalk with friends                           \t\t  |"<<endl;
		cout<<"|\t\t\tTalk to a group friend                      \t\t  |"<<endl;
		cout<<"|\t\t\tdelete friend                               \t\t  |"<<endl;
		cout<<"|\t\t\t                                            \t\t  |"<<endl;
		cout<<"|\t\t\t                                logout      \t\t  |"<<endl;	
	}else if (select==3){
		cout<<"|\t\t\tProfile             	                  \t\t  |"<<endl;
		cout<<"|\t\t\tAdd friend                                  \t\t  |"<<endl;
		cout<<"|\t\t\t==> Talk with friends <==                   \t\t  |"<<endl;
		cout<<"|\t\t\tTalk to a group friend                      \t\t  |"<<endl;
		cout<<"|\t\t\tdelete friend                               \t\t  |"<<endl;
		cout<<"|\t\t\t                                            \t\t  |"<<endl;
		cout<<"|\t\t\t                                logout      \t\t  |"<<endl;	
	}else if (select==4){
		cout<<"|\t\t\tProfile             	                  \t\t  |"<<endl;
		cout<<"|\t\t\tAdd friend                                  \t\t  |"<<endl;
		cout<<"|\t\t\tTalk with friends                           \t\t  |"<<endl;
		cout<<"|\t\t\t==> Talk to a group friend <==              \t\t  |"<<endl;
		cout<<"|\t\t\tdelete friend                               \t\t  |"<<endl;
		cout<<"|\t\t\t                                            \t\t  |"<<endl;
		cout<<"|\t\t\t                                logout      \t\t  |"<<endl;
	}else if (select==5){		
		cout<<"|\t\t\tProfile             	                  \t\t  |"<<endl;
		cout<<"|\t\t\tAdd friend                                  \t\t  |"<<endl;
		cout<<"|\t\t\tTalk with friends                           \t\t  |"<<endl;
		cout<<"|\t\t\tTalk to a group friend                      \t\t  |"<<endl;
		cout<<"|\t\t\t==> delete friend <==                       \t\t  |"<<endl;
		cout<<"|\t\t\t                                            \t\t  |"<<endl;
		cout<<"|\t\t\t                                logout      \t\t  |"<<endl; 
	}else if (select==6){		
		cout<<"|\t\t\tProfile                                     \t\t  |"<<endl;
		cout<<"|\t\t\tAdd friend                                  \t\t  |"<<endl;
		cout<<"|\t\t\tTalk with friends                           \t\t  |"<<endl;
		cout<<"|\t\t\tTalk to a group friend                      \t\t  |"<<endl;
		cout<<"|\t\t\tdelete friend                               \t\t  |"<<endl;
		cout<<"|\t\t\t                                            \t\t  |"<<endl;
		cout<<"|\t\t\t                            ==> logout <==  \t\t  |"<<endl;	
	}// if (select2) 
	for(int i=0;i<9;i++){
		cout<<"|\t\t\t                                  \t\t\t  |"<<endl;
	}cout<<" _________________________________________________________________________________ "<<endl;
}

void callPrint(Time *p) { //p is a value parameter	
	p->print();
}

int main(){	
	USER aa;
	person qq;
	Time ee;
	Security ss;
	All_data s1;

	Time *e1;
	day_Month_year *e2; 
	time_t now = time(0);
	char* dt = ctime(&now);
	tm *gmtm = gmtime(&now);
	tm *ltm = localtime(&now);
	dt = asctime(gmtm);
	e1 = new Time (ltm->tm_hour,1+ltm->tm_min,1+ltm->tm_sec);	 
	e2 = new day_Month_year(ltm->tm_mday,1 + ltm->tm_mon,1900 + ltm->tm_year); 
	{
		string uaer,pass,first,last,status;
		int d,m,y;
		int numII=0;
		string namefile;
		namefile="setsecurity1.dat";

		ifstream myFile(namefile.c_str(), ios::in);
		if(myFile.is_open()){
			while(myFile>>numII>>uaer>>pass>>first>>last>>d>>m>>y>>status){ 
				aa.setUSER(uaer,pass);   
				if(status!="-"){
					qq.setperson(first,last,first+" "+last+" Relationship with "+status);
				}else{
					qq.setperson(first,last," single ");
				}
				qq.setday_Month_year(d,m,y);
				ss.setfile_security(numII,aa,qq);		
			}
		}
		myFile.close();
	}{
		int getNUM_I=0;
		string nameFriends,nameGroup;
		string namefile;
		namefile="friends1.dat";
		ifstream myFile(namefile.c_str(), ios::in);
		if(myFile.is_open()){
			while(myFile>>getNUM_I>>nameFriends>>nameGroup){
				if(nameFriends!="-"){
					s1.setFriend(getNUM_I,nameFriends);
				}
				if(nameGroup!="-"){
					s1.setgroup(getNUM_I,nameGroup);
				}
			}
		}
		myFile.close();
	}{
		int NUM=0;
		string pass;
		string namefile;
		namefile="setpassword1.dat";
		ifstream myFile(namefile.c_str(), ios::in);
		if(myFile.is_open()){
			while(myFile>>NUM>>pass){
				//ss.setNUM_I(NUM);
				ss.setpassword(pass);
			}//while
		}//if
		myFile.close();
	}


	int ch1,select1=1;
	int ch2,select2=1; 
	int ch3,select3=1;
	Select1(select1); // void Select (int select)
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
			select1=3;
		}else if (select1>3){
			select1=1;
		} 
		Select1(select1); // void Select (int select)
		if(ch1==10){ //(ch1==10)
			switch(select1) {   
				case 1: 
					Select2(select2); //void Select2 (int select)
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
						if(ch2==10){ //(ch1==10)
							switch(select2) {
								case 1: 
									int ch_1;
									do{
										//system("cls");
										system("clear");
										string uaer,pass,first,last,status;
										int d,m,y;
										cout<<"Create a username : ";
										cin>>uaer;
										cout<<"Create a password : ";
										cin>>pass;
										if(uaer!="-"&&pass!="-"){
											cout<<"First Name : ";
											cin>>first;
											cout<<"last Name : ";
											cin>>last;
											cout<<"birthday (d m y) ";
											cin>>d>>m>>y;
											cout<<"status : ";
											getline(cin,status);
											getline(cin,status);

											string namefile="setsecurity1.dat";
											ofstream myfile (namefile.c_str(),ios::app);
											if (myfile.is_open()){
												myfile<<ss.getnum()<<" "<<uaer<<" "<<pass<<" "<<first<<" "<<last<<" "<<d<<" "<<m<<" "<<y<<" "<<status<<" "<<endl;
												myfile.close();
											}
											else{
												cout << "Unable to open file";
											}

											aa.setUSER(uaer,pass);
											if(status!="-"){
												qq.setperson(first,last,first+" "+last+" Relationship with "+status);
											}else{
												qq.setperson(first,last," single ");
											}
											qq.setday_Month_year(d,m,y);
											ss.setsecurity(aa,qq);
											ss.process();
											if((ch_1=getch())==10){
												system("clear");
												ss.print();
												cout<<"\t\t\t\t\t\t\t==>Next<==";
												if((ch_1=getch())==10){  //if (ch_1=getch())==10)
													ch_1=11;
													Select2(select2); //void Select2 (int select)
												}
											}
										}else{
											ch_1=11;
											Select2(select2); //void Select2 (int select)
										}

									}while(ch_1!=11);

									break;
								case 2:
									int ch_2;
									do{
										if(ss.process()==1){
											string pass;
											string pass1;
											cout<<"Setpassword : ";
											cin>>pass;
											cout<<"Confirm password again : ";
											cin>>pass1;
											if(pass==pass1){                             	    
												ss.setpassword(pass);                                       
												string namefile="setpassword1.dat";
												ofstream myfile (namefile.c_str(),ios::app);
												if (myfile.is_open()){
													myfile<<ss.getNUM_I()<<" "<<pass<<endl;
													myfile.close();
												}else{
													cout << "Unable to open file";
												}
											}else{
												cout<<" +++++ You do not enter a password that matches the first round.  ++++++ "<<endl;
											}//if(pass=pass1)
										}else{
											cout<<" ****  Enter the password again.  ******"<<endl;
										}//if(ss.process()==1)

										//cout<<"\n\t\t\t\t\t\t\t==>Next<==";  
										if((ch_2=getch())==10){  //if (ch_1=getch())==10)
												cout<<"\t\t\t\t\t\t\t==>Next<==";
											if((ch_2=getch())==10){  //if (ch_1=getch())==10)
												ch_2=11;
												Select2(select2); //void Select2 (int select)
											}  
										}  
									}while(ch_2!=11);
									break;
								case 3: 
									ch2=11; 
									Select1(select1); //void Select2 (int select)
									break;
							}//switch(select2)
						}//if(ch2==10)


					}while(ch2!=11);   
					break;
				case 2:  
					if(ss.process()==1){
						Select3(select3); //void Select3 (int select)
						do{
							switch(ch3=getch()) {  // if w = up  && s = down 
								case 119: select3 = select3-1;                        // up for ShowWindows
									  break;
								case 65 : select3 = select3-1;                        // up for ShowWindows
									  break;
								case 115: select3 = select3+1;                        // downs for ShowWindows
									  break;
								case 66 : select3 = select3+1;                        // downs for ShowWindows
									  break;
							}//switch(ch)
							if(select3<1){
								select3=6;
							}else if (select3>6){
								select3=1;
							}//if(select5<1) 
							Select3(select3); //void Select3 (select3)

							if(ch3==10){ //(ch3==10)
								switch(select3) {
									case 1:
										int ch3_1;
										do{
											//system("cls");
											system("clear");
											ss.print();
											s1.print(ss.getNUM_I());																		
											cout<<"\n\t\t\t\t\t\t\t==>Next<==";
											if((ch3_1=getch())==10){ //((ch3_1==getch())==10)
												ch3_1=11;
												Select3 (select3); //void Select3 (select3)
											}
										}while(ch3_1!=11);
										break;
									case 2:
										int ch3_2;
										do{
											string nameFriends,nameGroup;
											//system("cls");
											system("clear");
											cout<<"Friends Name  : ";
											cin>>nameFriends;
											if(nameFriends!="-"){
												if((s1.process(ss.getNUM_I(),"f",nameFriends))==0){
													s1.setFriend(ss.getNUM_I(),nameFriends);
												}else{
													cout<<" ----- You have successfully added a friend name. ----- "<<endl;
												}
											}
											cout<<"Group Name  : ";
											cin>>nameGroup;
											if(nameGroup!="-"){
												if((s1.process(ss.getNUM_I(),"g",nameGroup))==0){
													s1.setgroup(ss.getNUM_I(),nameGroup);
												}else{
													cout<<" ----- You have successfully added a group name. ----- "<<endl;
												}
											}


											string name1="friends1.dat";
											ofstream myfile (name1.c_str(),ios::app);
											if (myfile.is_open()){
												//if(nameFriends!="-"){  
												myfile<<ss.getNUM_I()<<" "<<" "<<nameFriends<<" ";
												//}
												//if(nameGroup!="-"){
												myfile<<nameGroup<<endl;
												//}
												myfile.close();
											}else{
												cout << "Unable to open file";
											}           	
											if((ch3_2=getch())==10){ //((ch3_1==getch())==10)
												cout<<"\n\t\t\t\t\t\t\t==>Next<==";
												if((ch3_2=getch())==10){ //((ch3_1==getch())==10)
													ch3_2=11;
													Select3 (select3); //void Select3 (select3)                   
												}
											}
										}while(ch3_2!=11);
										break;
									case 3:										
										{
											string namefri;
											string ch1,ch2,ch3,ch4,ch5;
											//system("cls");
											system("clear");
											cout<<"Name friends you want to talk to. : ";
											cin>>namefri;
											if(namefri!="-"){
												if((s1.process(ss.getNUM_I(),"f",namefri))==1){
													ch1=namefri;// fri1
													ch2=ss.getstringNUM_I();//nameuse2	
													ch4="SAM";//NUM_I5	
													callPrint(e2);
													callPrint(e1);
													cout<<"\n\n\n\n\t\t\t\t\t\t\tqq = Exitchat \n \t\t\t\t\t\t\t.. = Reset  "<<endl;
													while((ch3=getch())!="q"){
														getline(cin,ch3);// CH4
														if(ch3!="."){
															//system("cls");
															system("clear");
															s1.setfriend_w(ch1,ch2,ch3,ch4);
															s1.setfriend_true_r(ch1);
														}else{
															//system("cls");
															system("clear");
															callPrint(e2);
															callPrint(e1);
															cout<<"\n\n\n\n\t\t\t\t\t\t\tqq = Exitchat \n \t\t\t\t\t\t\t.. = Reset  "<<endl;
															s1.setfriend_true_r(ch1);
														}
													}
												}else{
													cout<<" ----- You have not added as a friend. ------ "<<endl;
												}
											}
										} 
										break;
									case 4:
										{
											string namegro;
											string ch1,ch2,ch3,ch4,ch5;
											//system("cls");
											system("clear");
											cout<<"Name groups that want to talk : ";
											cin>>namegro;

											if(namegro!="-"){
												if((s1.process(ss.getNUM_I(),"g",namegro))==1){
													callPrint(e2);
													callPrint(e1);
													cout<<"\n\n\n\n\t\t\t\t\t\t\tqq = Exitchat \n \t\t\t\t\t\t\t.. = Reset  "<<endl;
													ch1=namegro;// fri1
													ch2=ss.getstringNUM_I();//nameuse2
													ch4="SAM";//NUM_I5	
													while((ch3=getch())!="q"){
														getline(cin,ch3);// CH4
														if(ch3!="."){
															//system("cls");
															system("clear");
															s1.setfriend_w(ch1,ch2,ch3,ch4);
															s1.setfriend_true_r(ch1);
														}else{
															//system("cls");
															system("clear");
															callPrint(e2);
															callPrint(e1);
															cout<<"\n\n\n\n\t\t\t\t\t\t\tqq = Exitchat \n \t\t\t\t\t\t\t.. = Reset  "<<endl;
															s1.setfriend_true_r(ch1);
														}
													}
												}else{
													cout<<" ----- You have not created a group yet. ------ "<<endl;
												}
											}
										} 
										break;
									case 5:
										int ch3_5;
										do{
											//system("cls");
											system("clear");
											string name1;
											cout<<"Friend's name to delete : ";
											cin>>name1;		   	   
											if(name1!="-"){
												if((s1.process(ss.getNUM_I(),"f",name1))==1){

													for(int i=0;i<100;i++){
														if (s1.getfriend(ss.getNUM_I(),i)==name1){
															ifstream my(s1.getfriend(ss.getNUM_I(),i).c_str(),ios::trunc);
															//my<<"-";	
															my.close();		 	 		    	
															for(int j=i;j<s1.getnumfriend();j++){
																s1.fri_delete(ss.getNUM_I(),j,s1.getfriend(ss.getNUM_I(),j+1));
															}
															s1.setnumfriend(s1.getnumfriend()-1);
															break;
														}
													}
													string name1="friends.dat";
													ofstream myfile (name1.c_str(),ios::out);
													for(int i=1;i<s1.getnumfriend()+1;i++){
														myfile<<endl<<ss.getNUM_I()<<" "<<" "<<s1.getfriend(ss.getNUM_I(),i)<<" ";
														if(s1.getgroup(ss.getNUM_I(),i)==" "){
															myfile<<"-";	
														}else{
															myfile<<s1.getgroup(ss.getNUM_I(),i);
														}
													}
													myfile.close();	                                        			                    				
												}else{
													cout<<" ----- You have not created a friend yet. ------ "<<endl;
												}
											}
											if((ch3_5=getch())==10){ //((ch3_1==getch())==10)
												cout<<"\n\t\t\t\t\t\t\t==>Next<==";
												if((ch3_5=getch())==10){ //((ch3_1==getch())==10)
													ch3_5=11;
												}
												Select3 (select3); //void Select3 (select3)
											}
										}while(ch3_5!=11);
										break;

									case 6:
										ch3=11;
										Select1(select1); //void Select1 (int select)
										break;
								}
							}
						}while(ch3!=11);    


					}else{
						cout<<" ******  Log in again. ****** "<<endl<<endl;
					}//if(ss.process()==1)
					if((ch1=getch())==10){  //if (ch_1=getch())==10)
						Select1(select1); //void Select2 (int select)
					}  
					break;
				case 3: ch1=11;
					cout<<"Good bey"<<endl; 
					break;

			}// switch(select1)

		}//if(ch==10) 

	}while(ch1!=11);    


	/*	
		USER aa("Nitichai","123456789");
		Time ee(10,23,02);
		person qq("Nitichai","Sawangsai","SSS");
		qq.setday_Month_year_Time(23,06,2541,ee);
		Security ss;
		ss.setsecurity(aa,qq);
		ss.process();
		ss.print();
		return 0;
	 */


}//end main
