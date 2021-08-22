#include <stdlib.h> 
#include <iostream>
#include <string>
#include <stdio.h>
#include <fstream>
#include <iomanip>
using namespace std;
struct Picture {
	char Picture_Data[300];
};struct Picture  Data[1000];
class Login{
	private : 
		class node {
			public :
				string  use;
				string  pass;
				string  status;

				node *link;
				void login(string use1,string pass1,string  status1){
					this->link  = NULL;

					use  = use1;
					pass = pass1;
					status = status1;
				}

		};
		node *head;
		node *tail;
		string Name;
		int check1;
		int count;
	public :
		Login(){
			Name=' ';
			check1=0;
			count=0;
		}
		void read(){
			ifstream myFile("login.dat",ios::in);
			string  Use;
			string  Pass;
			string  Status;
			while (myFile>>Use>>Pass>>Status){
				add(Use,Pass,Status);
			}
			myFile.close();
		}//END read 
		void add(string use1,string pass1,string status1){
			node *temp = new node;
			temp->login(use1,pass1,status1);
			if(this->isEmpty()){
				head = temp;
				tail = temp;
			}else{
				tail->link  = temp;
				tail        = temp;
			}
			count++;
		}//END add
		bool isEmpty(){
			if(count==0){
				return true;
			}else{
				return false;
			}
		}//END isEmpt
		void show(){
			for(node *temp=head;temp!=NULL;temp=temp->link){
				cout<<" USER name : "<<temp->use<<endl;
				cout<<" Pass      : "<<temp->pass<<endl;
				cout<<" 1         : "<<temp->status<<endl;
			}
			cout<<endl;
		}
		void LOGIN(){
			int status_login=0;
			int Exit=0;

			string use1;
			string pass1;
			system("clear");
			cout<<"\n ---------------------------- \n";
			cout<<"\n  USER name : ___________     \n";
			cout<<"  Password  : ___________       \n";
			cout<<"\n  99 = Exit                   \n";
			cout<<"\n ---------------------------- \n";
			do{

				cin>>use1;
				cin>>pass1;

				system("clear");
				cout<<"\n ----------------------------  \n";
				cout<<"\n  USER name : "<<use1<<"       \n";
				cout<<"  Password  : __******__        \n";
				cout<<"\n  99 = Exit                    \n";
				cout<<"\n ----------------------------  \n";

				for(node *temp=head;temp!=NULL;temp=temp->link){
					if(temp->use == use1){
						if(temp->pass == pass1){
							if(temp->status == "student"){
								status_login = 1;
								break;
							}else if(temp->status == "staff"){
								status_login = 2;
								break;
							}else if(temp->status == "teacher"){
								status_login = 3;
								break;
							}//END 
						}else{
							status_login = -2;
						}//END
					}else{
						status_login = -1;
					}//END
				}
				//sleep(3);
				if(use1 == "99" && pass1 == "99"){ 
					cout<<"\n || GOOG BYE || "<<endl;
					Exit = 99;
				}else if(status_login == 1){
					cout<<"\nWelcome ... "<<use1<<"..."<<endl;
					Exit = 99;
				}else if(status_login == 2){
					cout<<"\nWelcome ... "<<use1<<"..."<<endl;
					Exit = 99;
				}else if(status_login == 3){
					cout<<"\nWelcome ... "<<use1<<"..."<<endl;
					Exit = 99;
				}else if(status_login = -1){
					//cout<<"\n Please enter a new Username. !!! \n";
					cout<<"\n The information you entered does not match any account in our records. \n";
				}else if(status_login == -2){
					cout<<"\n The information you entered does not match any account in our records. \n";
					//cout<<"\n Please enter a new password. !!! \n";
				}
			}while(Exit != 99);

			Name=use1;
			check1 = status_login;
		}
		int  check(){
			return check1;
		}
		string name(){
			return Name;
		}

};

class DoubleLinkedList {
	private : 
		class node {
			public :
				string Id;
				string year;
				string prefix;
				string fname;
				string last;
				float gpa;
				string major;
				string ganeration;
				string adv;
				string sta;
				string dmy;

				node *link;
				node *plink;
				void setnode(string id,string year,string prefix,string fname,string lname,float gpa,string major,string generation,string Adv,string Sta,string dmy){
					this->Id         = id;
					this->year       = year;
					this->prefix     = prefix;
					this->fname      = fname;
					this->last       = lname;
					this->gpa        = gpa;
					this->major      = major;
					this->ganeration = generation;
					this->adv        = Adv;
					this->sta        = Sta;
					this->dmy        = dmy;

					this->link  = NULL;
					this->plink = NULL;
				}            
		};
		node *head;
		node *tail;
		int count;
	public  :
		DoubleLinkedList(){
			this->head  = NULL;
			this->tail  = NULL;
			this->count = 0;
		}
		void sort(int pp){
			string in;
			if(pp!=3){
				cout<<"\nWhat kind of sort do you want?"<<endl;
				cout<<" 1. Student Id   : Max - Min "<<endl;
				cout<<" 2. Student Id   : Min - Max "<<endl;
				cout<<" 3. Student Name : A - Z     "<<endl;
				cout<<" 4. Student Name : Z - A     "<<endl;
				cin>>in;
			}else if(pp==3){
				in=3;
			}
			node *min;
			node *ntemp;

			string stemp;
			float linkgpa;
			if(in == "1"){
				cout<<"\n --> Student Id   : Max - Min <--"<<endl;
				for(node *temp = head ; temp!= NULL ; temp=temp->link){
					min=temp;
					for(node *ntemp = temp -> link ; ntemp != NULL ; ntemp = ntemp->link){
						if(min->Id  > ntemp->Id){
							min = ntemp;
						}
					}
					stemp          = temp->Id;            temp->Id          = min->Id;             min->Id            = stemp ;
					stemp          = temp->year;          temp->year        = min->year;           min->year          = stemp ;
					stemp          = temp->prefix;        temp->prefix      = min->prefix;         min->prefix        = stemp ;
					stemp          = temp->fname;         temp->fname       = min->fname;          min->fname         = stemp ;
					stemp          = temp->last;          temp->last        = min->last;           min->last          = stemp ;
					linkgpa        = temp->gpa;           temp->gpa         = min->gpa;            min->gpa           = linkgpa;
					stemp          = temp->major;         temp->major       = min->major;          min->major         = stemp ;
					stemp          = temp->ganeration;    temp->ganeration  = min->ganeration;     min->ganeration    = stemp ;
					stemp          = temp->adv;           temp->adv         = min->adv;            min->adv           = stemp ;
					stemp          = temp->sta;           temp->sta         = min->sta;            min->sta           = stemp ;
					stemp          = temp->dmy;           temp->dmy         = min->dmy;            min->dmy           = stemp ;
				}
			}else if(in == "2"){
				cout<<"\n --> Student Id   : Min - Max <--"<<endl;
				for(node *temp = head ; temp!= NULL ; temp=temp->link){
					min=temp;
					for(node *ntemp = temp -> link ; ntemp != NULL ; ntemp = ntemp->link){
						if(min->Id  < ntemp->Id){
							min = ntemp;
						}
					}
					stemp          = temp->Id;            temp->Id          = min->Id;             min->Id            = stemp ;
					stemp          = temp->year;          temp->year        = min->year;           min->year          = stemp ;
					stemp          = temp->prefix;        temp->prefix      = min->prefix;         min->prefix        = stemp ;
					stemp          = temp->fname;         temp->fname       = min->fname;          min->fname         = stemp ;
					stemp          = temp->last;          temp->last        = min->last;           min->last          = stemp ;
					linkgpa        = temp->gpa;           temp->gpa         = min->gpa;            min->gpa           = linkgpa;
					stemp          = temp->major;         temp->major       = min->major;          min->major         = stemp ;
					stemp          = temp->ganeration;    temp->ganeration  = min->ganeration;     min->ganeration    = stemp ;
					stemp          = temp->adv;           temp->adv         = min->adv;            min->adv           = stemp ;
					stemp          = temp->sta;           temp->sta         = min->sta;            min->sta           = stemp ;
					stemp          = temp->dmy;           temp->dmy         = min->dmy;            min->dmy           = stemp ;
				}
			}else if(in == "3"){
				cout<<"\n --> Student Name : A - Z <--    "<<endl;
				for(node *temp = head ; temp!= NULL ; temp=temp->link){
					min=temp;
					for(node *ntemp = temp -> link ; ntemp != NULL ; ntemp = ntemp->link){
						if(min->fname[0]  > ntemp->fname[0]){
							min = ntemp;
						}
					}
					stemp          = temp->Id;            temp->Id          = min->Id;             min->Id            = stemp ;
					stemp          = temp->year;          temp->year        = min->year;           min->year          = stemp ;
					stemp          = temp->prefix;        temp->prefix      = min->prefix;         min->prefix        = stemp ;
					stemp          = temp->fname;         temp->fname       = min->fname;          min->fname         = stemp ;
					stemp          = temp->last;          temp->last        = min->last;           min->last          = stemp ;
					linkgpa        = temp->gpa;           temp->gpa         = min->gpa;            min->gpa           = linkgpa;
					stemp          = temp->major;         temp->major       = min->major;          min->major         = stemp ;
					stemp          = temp->ganeration;    temp->ganeration  = min->ganeration;     min->ganeration    = stemp ;
					stemp          = temp->adv;           temp->adv         = min->adv;            min->adv           = stemp ;
					stemp          = temp->sta;           temp->sta         = min->sta;            min->sta           = stemp ;
					stemp          = temp->dmy;           temp->dmy         = min->dmy;            min->dmy           = stemp ;
				}
			}else if(in == "4"){
				cout<<"\n --> Student Name : Z - A <--    "<<endl;
				for(node *temp = head ; temp!= NULL ; temp=temp->link){
					min=temp;
					for(node *ntemp = temp -> link ; ntemp != NULL ; ntemp = ntemp->link){
						if(min->fname[0]  < ntemp->fname[0]){
							min = ntemp;
						}
					}
					stemp          = temp->Id;            temp->Id          = min->Id;             min->Id            = stemp ;
					stemp          = temp->year;          temp->year        = min->year;           min->year          = stemp ;
					stemp          = temp->prefix;        temp->prefix      = min->prefix;         min->prefix        = stemp ;
					stemp          = temp->fname;         temp->fname       = min->fname;          min->fname         = stemp ;
					stemp          = temp->last;          temp->last        = min->last;           min->last          = stemp ;
					linkgpa        = temp->gpa;           temp->gpa         = min->gpa;            min->gpa           = linkgpa;
					stemp          = temp->major;         temp->major       = min->major;          min->major         = stemp ;
					stemp          = temp->ganeration;    temp->ganeration  = min->ganeration;     min->ganeration    = stemp ;
					stemp          = temp->adv;           temp->adv         = min->adv;            min->adv           = stemp ;
					stemp          = temp->sta;           temp->sta         = min->sta;            min->sta           = stemp ;
					stemp          = temp->dmy;           temp->dmy         = min->dmy;            min->dmy           = stemp ;
				}
			}

		}
		void read(){
			ifstream myFile("Student-Exam.dat",ios::in);
			string  id;
			string  year;
			string  pre;
			string  fname;
			string  lname;
			float   gpa;
			string  branch;
			string  generation;
			string  Adv;
			string  Sta;
			string  dmy;
			while (myFile>>id>>year>>pre>>fname>>lname>>gpa>>branch>>generation>>Adv>>Sta>>dmy){
				add(id,year,pre,fname,lname,gpa,branch,generation,Adv,Sta,dmy);
			}
			myFile.close();    
		}//END read
		void Picture_r (string name){
			FILE*myfile;
			char thetext;
			int result;
			int j=0,i=0,row=1;
			myfile=fopen("grade_report1.dat","r");
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
                        if(name == "supak"){
				printf("\t%s\n",Data[1].Picture_Data);  
				printf("\t%s\n",Data[3].Picture_Data);  
				printf("\t%s\n",Data[5].Picture_Data);  
				printf("\t%s\n",Data[7].Picture_Data);  
				printf("\t%s\n",Data[9].Picture_Data);  
                        }else if(name == "mabut"){
				printf("\t%s\n",Data[11].Picture_Data);  
				printf("\t%s\n",Data[13].Picture_Data);  
				printf("\t%s\n",Data[15].Picture_Data);  
				printf("\t%s\n",Data[17].Picture_Data);  
				printf("\t%s\n",Data[19].Picture_Data);  
                        } 
                        
		}//Picture_r
		bool find(string value){
			int yes=0;
			for(node *temp=head;temp!=NULL;temp=temp->link){
				if(value == temp->Id || temp->fname[0]==value[0]){
					yes = 1;
					return true;
					break;
				}
			}
			if(yes == 0){
				return false;
			}
		}//END find
		bool Check_status(string ID){
			int yes = 0;
			for(node *temp=head;temp!=NULL;temp=temp->link){
				if(ID == temp->Id){
					if(temp->sta == "Graduated"){
						yes = 1;
						return true;
						break;
					}
				}
			}
			if(yes == 0){
				return false;
			}
		}//END Check_status
		int Check_statusMr(string pro,string stat){
			int yes = 0;
			for(node *temp=head;temp!=NULL;temp=temp->link){
				if(temp->sta == stat){
					if(temp->prefix == pro){
						yes++;
					}
				}
			}
			return yes;
		}//END Check_statusMr 
		int Check(string stat){
			int yes = 0;
			for(node *temp=head;temp!=NULL;temp=temp->link){
				if(temp->sta == stat){
					yes++;
				}
			}
			return yes;
		}//END Check
		void show(){
			if(this->isEmpty()){
				cout<<"o Data ..."<<endl;
			}else{  
				node *temp=head;
				int i          = 1;
				int stuing     = 0;
				int stuingMr   = 0;
				int stuingMiss = 0;
				stuing     = Check("Studying");
				stuingMr   = Check_statusMr("Mr.","Studying");
				stuingMiss = Check_statusMr("Miss.","Studying");
				cout<<"                                                       Show Student            "<<endl;
				cout<<"====================================================================================================================================="<<endl;
				cout<<setw( 6)<<left<<"  No";
				cout<<setw(15)<<left<<"Student Id.";   
				cout<<setw(15)<<left<<"year";   
				cout<<setw(15)<<left<<"Prefix";   
				cout<<setw(29)<<left<<"Student Name";   
				cout<<setw( 7)<<left<<"GPA";   
				cout<<setw(10)<<left<<"Major";   
				cout<<setw(14)<<left<<"Generation";   
				cout<<setw(14)<<left<<"Adviser";   
				cout<<"Status"<<endl;   
				cout<<"====================================================================================================================================="<<endl;
				cout<<"Studying Student : "<<stuing<<" Person (Mr.= "<<stuingMr<<" Miss = "<<stuingMiss<<")"<<endl;
				cout<<"-------------------------------------------------------------------------------------------------------------------------------------"<<endl;
				for(node *temp=head;temp!=NULL;temp=temp->link){
					if(temp->sta == "Studying"){
						cout<<"  ";
						cout<<setw( 5)<<left<<i;
						cout<<setw(15)<<left<<temp->Id;
						cout<<setw(15)<<left<<temp->year;
						cout<<setw(15)<<left<<temp->prefix;
						cout<<temp->fname<<". ";
						cout<<setw(15)<<left<<temp->last;
						cout<<setw(15)<<left;printf("\t\t%3.2f\t",temp->gpa);
						cout<<setw(12)<<left<<temp->major;
						cout<<setw(12)<<left<<temp->ganeration;
						cout<<setw(12)<<left<<temp->adv;
						cout<<temp->sta<<endl;
						i++;
					}
				}

				cout<<"------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
				stuing     = Check("Graduated");
				stuingMr   = Check_statusMr("Mr.","Graduated");
				stuingMiss = Check_statusMr("Miss.","Graduated");
				i = 1;
				cout<<"Studying Student : "<<stuing<<" Person (Mr.= "<<stuingMr<<" Miss = "<<stuingMiss<<")"<<endl;
				cout<<"------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
				for(node *temp=head;temp!=NULL;temp=temp->link){
					if(temp->sta == "Graduated"){
						cout<<"  ";
						cout<<setw( 5)<<left<<i;
						cout<<setw(15)<<left<<temp->Id;
						cout<<setw(15)<<left<<temp->year;
						cout<<setw(15)<<left<<temp->prefix;
						cout<<temp->fname<<". ";
						cout<<setw(15)<<left<<temp->last;
						cout<<setw(15)<<left;printf("\t\t%3.2f\t",temp->gpa);
						cout<<setw(12)<<left<<temp->major;
						cout<<setw(12)<<left<<temp->ganeration;
						cout<<setw(12)<<left<<temp->adv;
						cout<<temp->sta;
						cout<<":"<<temp->dmy<<endl;
						i++;
					}
				}
			}//END if(this->isEmpty())

		}//END show
		void show_Student(){
			if(this->isEmpty()){
				cout<<"o Data ..."<<endl;
			}else{
				node *temp=head;
				int i          = 1;
				cout<<"                                                       Show Student            "<<endl;
				cout<<"===================================================================="<<endl;
				cout<<setw(15)<<left<<"Student Id.";   
				cout<<setw(29)<<left<<"Student Name";   
				cout<<setw(14)<<left<<"Generation"<<endl;   
				cout<<"====================================================================="<<endl;
				cout<<"---------------------  SE#3  --------------------------------------"<<endl;
				for(node *temp=head;temp!=NULL;temp=temp->link){
					if(temp->ganeration == "SE#3" ){
						cout<<"  ";
						cout<<setw(15)<<left<<temp->Id;
						cout<<temp->fname<<"  ";
						cout<<setw(20)<<left<<temp->last;
						cout<<temp->sta<<endl;
					}
				}
				cout<<"\n---------------------  SE#5  --------------------------------------"<<endl;
				for(node *temp=head;temp!=NULL;temp=temp->link){
					if(temp->ganeration == "SE#5" ){
						cout<<"  ";
						cout<<setw(15)<<left<<temp->Id;
						cout<<temp->fname<<"  ";
						cout<<setw(20)<<left<<temp->last;
						cout<<temp->sta<<endl;
					}
				}

			}//END if(this->isEmpty())
		}
		void show_teacher(string Consultants){
			if(this->isEmpty()){
				cout<<"o Data ..."<<endl;
			}else{ 
				node *temp=head;
				int i          = 1;
				cout<<"                                                       Show Student            "<<endl;
				cout<<"====================================================================================================================================="<<endl;
				cout<<setw( 6)<<left<<"  No";
				cout<<setw(15)<<left<<"Student Id.";   
				cout<<setw(15)<<left<<"year";   
				cout<<setw(15)<<left<<"Prefix";   
				cout<<setw(29)<<left<<"Student Name";   
				cout<<setw( 7)<<left<<"GPA";   
				cout<<setw(10)<<left<<"Major";   
				cout<<setw(14)<<left<<"Generation";   
				cout<<setw(14)<<left<<"Adviser";   
				cout<<"Status"<<endl;   
				cout<<"====================================================================================================================================="<<endl;
				for(node *temp=head;temp!=NULL;temp=temp->link){
					if(temp->adv == Consultants && temp->sta == "Studying" ){
						cout<<"  ";
						cout<<setw( 5)<<left<<i;
						cout<<setw(15)<<left<<temp->Id;
						cout<<setw(15)<<left<<temp->year;
						cout<<setw(15)<<left<<temp->prefix;
						cout<<temp->fname<<". ";
						cout<<setw(15)<<left<<temp->last;
						cout<<setw(15)<<left;printf("\t\t%3.2f\t",temp->gpa);
						cout<<setw(12)<<left<<temp->major;
						cout<<setw(12)<<left<<temp->ganeration;
						cout<<setw(12)<<left<<temp->adv;
						cout<<temp->sta<<endl;
						i++;
					}
				}

			}//END if(this->isEmpty())

		}//END show
		void add(string id,string year,string pre,string fname,string lname,float gpa,string branch,string generation,string Adv,string Sta,string DMY){
			if(find(id) == 0){
				node *temp = new node;
				temp->setnode(id,year,pre,fname,lname,gpa,branch,generation,Adv,Sta,DMY);
				if(this->isEmpty()){
					head = temp;
					tail = temp;
				}else{
					tail->link  = temp;
					temp->plink = tail;
					tail        = temp;

				}
				count++;
			}else{
				cout<<"\n Duplicate ID !!!!! "<<endl;
			}
		}//END add
		void add(int index,string id,string year,string pre,string fname,string lname,float gpa,string branch,string generation,string Adv,string Sta,string DMY){
			node *temp=head;
			node *ptemp;//=head;
			node *newNode = new node;	
			newNode->setnode(id,year,pre,fname,lname,gpa,branch,generation,Adv,Sta,DMY);   ////temp->data=value;
			if(isEmpty()){
				head = newNode;
				tail = newNode;
				count++;
			}else{
				if(index>=0 && index<count){
					if(index ==0 ){
						newNode->link = head;
						head->plink   = newNode;
						head          = newNode;       
					}else{
						for(int i=0;i<index;i++){
							temp = temp->link;
						}
						ptemp          = temp->plink;
						newNode->link  = temp;
						temp->plink    = newNode;
						ptemp->link    = newNode;
						newNode->plink = ptemp; 
					}
					count++;
				}else{
					cout<<"Index out of Scrop....! "<<endl;
				}
			}	
		}//END add index
		void save_data(){
			node *temp=head;
			ofstream myFile("student11.dat",ios::out);
			for(int i=0;i<count;i++){
				myFile <<temp->Id<<'\t'<<temp->prefix<<'\t'<<temp->year<<'\t'<<temp->fname<<'\t'<<temp->last<<'\t'<<temp->gpa<<'\t';
				myFile <<temp->major<<'\t'<<temp->ganeration<<'\t'<<temp->adv<<'\t'<<temp->sta<<'\t'<<temp->dmy<<endl;
				temp=temp->link;
			}
			myFile.close();

		}//END save_data
		void Edit(string value){
			int aom;
			string Name;
			string Last;
			node  *temp=head;
			for(node *temp=head;temp!=NULL;temp=temp->link){
				if(temp->Id == value ){
					cout<<"Enter student ID : "<<temp->Id<<endl;  
					cout<<"Enter student First Name : ";
					cin>>Name;
					cout<<"Enter student Last Name : ";
					cin>>Last;

					temp->fname      = Name;
					temp->last       = Last;
					break;
				}else{
					aom=-1;
				}
			}
			if(aom==-1){
				cout<<"Enter student ID : "<<value<<"   -Not found "<<endl;  
			}
		}//END set
		string get(int index){
			node  *temp=head;
			for(int i=1;i<count;i++){
				if(index == i){
					return temp->Id;
					break;
				}
				temp=temp->link;
			}
		}//END get
		void student_search(string ID,string name){
			if(this->isEmpty()){
				cout<<"o Data ..."<<endl;
			}else{

				int i          = 1;
				int nosearch   = 0;

				cout<<"                                                       Show Student            "<<endl;
				cout<<"====================================================================================================================================="<<endl;
				cout<<setw( 6)<<left<<"  No";
				cout<<setw(15)<<left<<"Student Id.";   
				cout<<setw(15)<<left<<"year";   
				cout<<setw(15)<<left<<"Prefix";   
				cout<<setw(29)<<left<<"Student Name";   
				cout<<setw( 7)<<left<<"GPA";   
				cout<<setw(10)<<left<<"Major";   
				cout<<setw(14)<<left<<"Generation";   
				cout<<setw(14)<<left<<"Adviser";   
				cout<<"Status"<<endl;   
				cout<<"=====================================================================================================================================\n"<<endl;
				if(find(ID) != 1){
					cout<<" *** No Search.*** \n";
				}
				for(node *temp=head;temp!=NULL;temp=temp->link){
					if(temp->Id == ID || temp->fname[0]==name[0]){
						if(temp->sta == "Studying"){
							cout<<"  ";
							cout<<setw( 5)<<left<<i;
							cout<<setw(15)<<left<<temp->Id;
							cout<<setw(15)<<left<<temp->year;
							cout<<setw(15)<<left<<temp->prefix;
							cout<<temp->fname[0]<<". ";
							cout<<setw(15)<<left<<temp->last;
							cout<<setw(15)<<left;printf("\t\t%3.2f\t",temp->gpa);
							cout<<setw(12)<<left<<temp->major;
							cout<<setw(12)<<left<<temp->ganeration;
							cout<<setw(12)<<left<<temp->adv;
							cout<<temp->sta<<endl;
							i++;
						}
					}
				}
				cout<<"\n-------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;

				i=1;

				for(node *temp=head;temp!=NULL;temp=temp->link){
					if(temp->Id == ID || temp->fname[0]==name[0]){
						if(temp->sta == "Graduated"){
							cout<<"  ";
							cout<<setw( 5)<<left<<i;
							cout<<setw(15)<<left<<temp->Id;
							cout<<setw(15)<<left<<temp->year;
							cout<<setw(15)<<left<<temp->prefix;
							cout<<temp->fname[0]<<". ";
							cout<<setw(15)<<left<<temp->last;
							cout<<setw(15)<<left;printf("\t\t%3.2f\t",temp->gpa);
							cout<<setw(12)<<left<<temp->major;
							cout<<setw(12)<<left<<temp->ganeration;
							cout<<setw(12)<<left<<temp->adv;
							cout<<temp->sta;
							cout<<":"<<temp->dmy<<endl;
							i++;
						}
					}
				}			

			}   
		}
		void remove (string value){      //remove teacher
			if(Check_status(value) == 0){      
				if(find(value) == 1){
					cout<<" *** Romove Complete. *** \n\n";
				}else{
					cout<<" *** No Romove Complete. *** \n";
				}//END if(find(value)==1)
				int round=1;
				node *ptemp;
				for(node *temp = head;temp != NULL;temp = temp->link){
					if(round == 1){
						ptemp = temp;
						if(temp->Id == value){
							if(temp == head && temp == tail){
								delete temp;
								head = NULL;
								tail = NULL;
							}else if(temp == head){
								head        = head->link;
								head->plink = NULL;
								delete temp;
							}//END if(temp == head && temp == tail)
							count--;
							break;
						}//END if(temp->data == value)
					}else{
						if(temp->Id == value){
							ptemp = temp->plink;
							if(temp == tail){
								tail       = ptemp;
								tail->link = NULL;
								delete temp;
							}else{
								ptemp->link       = temp->link;
								temp->link->plink = ptemp;
								delete temp;
							}//END if(temp->data == value)
							count--;
							break;
						}//END  if(temp->data == value)
					}//END if(round == 1)
					round++;
				}//END for
			}else{
				cout<<"The item to be deleted is not in the list."<<endl;
			}//END if(Check_status(value)==0)
		}//remove
		int size(){
			return count;
		}//END size
		bool isEmpty(){
			if(count==0){
				return true;
			}else{
				return false;
			}
		}//END isEmpty
		~DoubleLinkedList(){
			for(node *temp=head;temp!=NULL;temp=temp->link){
				node * tmp = this->head;
				this->head = this->head->link;
				delete tmp;
				tmp = NULL;
			}
			delete this->head;
			this->head = NULL;
			delete this->tail;
			this->tail = NULL;
		}//END ~LinkedList
};
int main(){
	Login *obj_login = new Login();


	obj_login->read();
	obj_login->LOGIN();

	if(obj_login->check() == 1){
		string  id;
		string year;
		string prefix;
		string fname;
		string lname;
		float gpa;
		string major;
		string generation;
		string Adv;
		string Sta;
		DoubleLinkedList *obj_linkedlist = new DoubleLinkedList();
		string ch;
		obj_linkedlist->read();
		system("clear");
		do{
			cout<<"\n\n ---------------------- "<<endl;
			cout<<" 1. Show Grade report.      "<<endl;
			cout<<" 2. Show Student List       "<<endl;
			cout<<" 99. Exit                   "<<endl;
			cout<<" ----------------------     "<<endl;
			cout<<"Enter Number (0-2) :        "<<endl;
			cin>>ch;
			cout<<endl;
			if(ch=="1"){
                                  obj_linkedlist->Picture_r(obj_login->name());
			}else if(ch=="2"){
				obj_linkedlist->sort(3);
				obj_linkedlist->show_Student();
			}
		}while(ch!="99");

	}

	if(obj_login->check() == 2){

		string  id;
		string year;
		string prefix;
		string fname;
		string lname;
		float gpa;
		string major;
		string generation;
		string Adv;
		string Sta;
		DoubleLinkedList *obj_linkedlist = new DoubleLinkedList();
		string ch;
		obj_linkedlist->read();
		system("clear");
		do{
			cout<<"\n\n ---------------------- "<<endl;
			cout<<" 1. Show Student List   "<<endl;
			cout<<" 2. Add Student         "<<endl;
			cout<<" 3. Delete Student      "<<endl;
			cout<<" 4. save data           "<<endl;
			cout<<" 5. student Search      "<<endl;
			cout<<" 6. Edit Student Name    "<<endl;
			cout<<" 99. Exit                "<<endl;
			cout<<" ---------------------- "<<endl;
			cout<<"Enter Number (0-2) :    "<<endl;
			cin>>ch;
			cout<<endl;
			if(ch=="1"){
				obj_linkedlist->sort(0);
				obj_linkedlist->show();
			}else if(ch=="2"){
				cout<<"\nInput Student ID : ";
				cin>>id;
				cout<<"Input Student Year : ";
				cin>>year;
				cout<<"Input Prefix 1 = Mr. 2 = Miss. : ";
				cin>>prefix;
				if(prefix=="1"){
					prefix="Mr.";
				}else if(prefix=="2"){
					prefix="Miss.";
				}
				cout<<"Input Prefix 1 = Mr. 2 = Miss. : "<<prefix<<endl;
				cout<<"Input Student Fname : ";
				cin>>fname;
				cout<<"Input Student Lname : ";
				cin>>lname;
				cout<<"Input Student GPA : ";
				cin>>gpa;
				cout<<"Input Student Major : ";
				cin>>major;
				cout<<"Input Student Generation : ";
				cin>>generation;
				cout<<"Input Student Adviser : ";
				cin>>Adv;
				cout<<"Input Status 1 = Studying 2 = Graduated : ";
				cin>>Sta;
				if(Sta=="1"){
					Sta="Studying";
				}else if(Sta=="2"){
					Sta="Graduated";
				}
				cout<<"Input Status 1 = Studying 2 = Graduated : "<<Sta<<endl;

				if(Sta=="Studying"){
					obj_linkedlist->add(id,year,prefix,fname,lname,gpa,major,generation,Adv,"Studying","-");
				}else if(Sta=="Graduated"){
					string DMY;
					cout<<"Input Data of Graduated. : ";
					cin>>DMY;
					obj_linkedlist->add(id,year,prefix,fname,lname,gpa,major,generation,Adv,"Graduated",DMY);
				}
			}else if(ch=="3"){
				string del;
				cout<<"\nFunction Delete.\n";
				cout<<"Enter The Student ID TO  Delete. : ";
				cin>>del;
				obj_linkedlist->show();
				obj_linkedlist->remove(del);
			}else if(ch=="4"){
				obj_linkedlist->save_data();
				cout<<"\n Save complete !!!!!!!!! \n";
			}else if(ch=="5"){
				string ID;
				cout<<"Student Search : ";
				cin>>ID;
				obj_linkedlist->student_search(ID,ID);
			}else if(ch=="6"){
				string ID;
				obj_linkedlist->show();
				cout<<"\n\nEdit Student : ";
				cin>>ID;
				obj_linkedlist->Edit(ID);
			}else if(ch=="99"){
				obj_linkedlist->save_data();
			}
		}while(ch!="99");
	}


	if(obj_login->check() == 3){
		string  id;
		string year;
		string prefix;
		string fname;
		string lname;
		float gpa;
		string major;
		string generation;
		string Adv;
		string Sta;
		DoubleLinkedList *obj_linkedlist = new DoubleLinkedList();
		string ch;
		obj_linkedlist->read();
		system("clear");
		do{
			cout<<"\n\n ---------------------- "<<endl;
			cout<<" 1. Show Student List   "<<endl;
			cout<<" 99. Exit                "<<endl;
			cout<<" ---------------------- "<<endl;
			cout<<"Enter Number (0-2) :    "<<endl;
			cin>>ch;
			cout<<endl;
			if(ch=="1"){
				obj_linkedlist->sort(0);
				obj_linkedlist->show_teacher(obj_login->name());
			}
		}while(ch!="99");
	}
	return 0;
}
