#include <stdlib.h> 
#include <iostream>
#include <string>
#include <stdio.h>
#include <fstream>
#include <iomanip>
using namespace std;
class DoubleLinkedList {
	private : 
		class node {
			public :
				string Id;
				string prefix;
				string fname;
				string last;
				string nickname;
				string Tol;
				float gpa;

				node *link;
				node *plink;
				void setnode(string id,string prefix,string fname,string lname,string nickname,string Tol,float gpa){
					this->Id          = id;
					this->prefix      = prefix;
					this->fname       = fname;
					this->last        = lname;
					this->nickname    = nickname;
					this->Tol         = Tol;
					this->gpa         = gpa;

					this->link   = NULL;
					this->plink  = NULL;
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
		void read(){
			node *temp = new node;
			ifstream myFile("student.dat",ios::in);
			string Id;
			string prefix;
			string fname;
			string last;
			string nickname;
			string Tol;
			float gpa;
			while (myFile>>Id>>prefix>>fname>>last>>nickname>>Tol>>gpa){
				add(Id,prefix,fname,last,nickname,Tol,gpa);   
			}
			myFile.close();    
		}
		void save_data(){
			node *temp=head;
			ofstream myFile("student.dat",ios::out);
			for(node *temp=head;temp!=NULL;temp=temp->link){
				myFile <<temp->Id<<'\t'<<temp->prefix<<'\t'<<temp->fname<<'\t'<<temp->last<<'\t'<<temp->nickname<<'\t';
				myFile <<temp->Tol<<'\t'<<temp->gpa<<endl;
			}
			myFile.close();

		}
		bool find(string value){
			int yes=0;
			for(node *temp=head;temp!=NULL;temp=temp->link){
				if(value==temp->Id){
					yes=1;
					return true;
					break;
				}
			}
			if(yes==0){
				return false;
			}
		}
		void findshow(string value){
			int i=1;
			system("clear");
			cout<<"                                                          Find Show    "<<endl;
			cout<<"====================================================================================================================================="<<endl;
			cout<<setw( 6)<<left<<"  No";
			cout<<setw(15)<<left<<"Student Id.";   
			cout<<setw(24)<<left<<"Prefix";   
			cout<<setw(29)<<left<<"Student Name";   
			cout<<setw(21)<<left<<"Nickname";   
			cout<<setw(19)<<left<<"Tol.";   
			cout<<"GPA"<<endl;   
			cout<<"====================================================================================================================================="<<endl;
			for(node *temp=head;temp!=NULL;temp=temp->link){
				if(value==temp->Id){
					cout<<"  ";
					cout<<setw( 5)<<left<<i;
					cout<<setw(15)<<left<<temp->Id;
					cout<<setw(15)<<left<<temp->prefix;
					cout<<setw(15)<<left<<temp->fname<<"  ";
					cout<<setw(22)<<left<<temp->last;
					cout<<setw(15)<<left<<temp->nickname;
					cout<<setw(15)<<left<<temp->Tol;
					i++;
					break;
				}
			}
		}
		void show(){
			system("clear");
			int i=1;
			if(this->isEmpty()){
				cout<<"o Data ..."<<endl;
			}else{
				node *temp=head;
				cout<<"                                                       Show Student            "<<endl;
				cout<<"====================================================================================================================================="<<endl;
				cout<<setw( 6)<<left<<"  No";
				cout<<setw(15)<<left<<"Student Id.";   
				cout<<setw(24)<<left<<"Prefix";   
				cout<<setw(29)<<left<<"Student Name";   
				cout<<setw(21)<<left<<"Nickname";   
				cout<<setw(19)<<left<<"Tol.";   
				cout<<"GPA"<<endl;   
				cout<<"====================================================================================================================================="<<endl;
				for(node *temp=head;temp!=NULL;temp=temp->link){
					cout<<"  ";
					cout<<setw( 5)<<left<<i;
					cout<<setw(15)<<left<<temp->Id;
					cout<<setw(15)<<left<<temp->prefix;
					cout<<setw(15)<<left<<temp->fname<<"  ";
					cout<<setw(22)<<left<<temp->last;
					cout<<setw(15)<<left<<temp->nickname;
					cout<<setw(15)<<left<<temp->Tol;
					printf("\t %3.2f\n",temp->gpa);
					i++;
				}
			}
		}
		void set(string id,string prefix,string fname,string lname,string nickname,string Tol,float gpa){
			int index=1;
			for(node *temp=head;temp!=NULL;temp=temp->link){
				if(temp->Id==id){
					break;
				}
				index++;
			}
			if(index>0 && index<count){
				add((index+1),id,prefix,fname,lname,nickname,Tol,gpa);
				remove(id); 
			}else if(index==count){
				remove(id); 
				add(id,prefix,fname,lname,nickname,Tol,gpa);
			}else{
				cout<<"can not be fixed Because no data."<<endl;
			}
		}
		void add(string id,string prefix,string fname,string lname,string nickname,string Tol,float gpa){
			node *temp = new node;   //Node * newNode = new Node (value);
			if(find(id)==0){
				temp->setnode(id,prefix,fname,lname,nickname,Tol,gpa);   
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
				cout<<"\n  !! Duplicate student information !! "<<endl;
			}
		}
		void add(int index,string id,string prefix,string fname,string lname,string nickname,string Tol,float gpa){
			node *temp=head;
			node *ptemp;
			node *newNode = new node; 
			newNode->setnode(id,prefix,fname,lname,nickname,Tol,gpa);   
			if(isEmpty()){
				head = newNode;
				tail = newNode;
				count++;
			}else{
				if(index>=1 && index<=count){
					if(index == 1 ){
						newNode->link = head;
						head->plink   = newNode;
						head          = newNode;       
					}else{
						for(int i=1;i<index;i++){
							temp=temp->link;
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
		}
		void remove (string value){      //remove teacher
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
						}
						count--;
						break;
					}
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
						}
						count--;
						break;
					}
				}
				round++;
			}
		}
		int size(){
			return count;
		}
		bool isEmpty(){
			if(count==0){
				return true;
			}else{
				return false;
			}
		}
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
		}
};
int main(){
	string Id;
	string prefix;
	string fname;
	string last;
	string nickname;
	string Tol;
	float gpa;
	DoubleLinkedList *obj_linkedlist = new DoubleLinkedList();
	string ch;
	obj_linkedlist->read();
	system("clear");
	do{
		cout<<"\n\n ---------------------------- "<<endl;
		cout<<" 0.   Exit                        "<<endl;
		cout<<" 1.   Show Student List           "<<endl;
		cout<<" 2.   Search Show Student List    "<<endl;
		cout<<" 3.   Add Student                 "<<endl;
		cout<<" 4.   Add index Student           "<<endl;
		cout<<" 5.   Edit index Student          "<<endl;
		cout<<" 6.   Delete Student              "<<endl;
		cout<<" ----------------------------     "<<endl;
		cout<<" Enter Number (0-2) : ";
		cin>>ch;
		cout<<endl;
		if(ch=="1"){
			cout<<"\n\n 1.   Show Student List \n\n"<<endl;
			obj_linkedlist->show();
		}else if(ch=="2"){
			cout<<"\n\n 2.   Search Show Student List "<<endl;
			cout<<"\nInput Student ID : ";
			cin>>Id;
			obj_linkedlist->findshow(Id);
		}else if(ch=="3"){
			cout<<"\n\n 3.   Add Student  "<<endl;
			cout<<"\nInput Student ID : ";
			cin>>Id;
			cout<<"Input Student Prefix : ";
			cin>>prefix;
			cout<<"Input Student Fname : ";
			cin>>fname;
			cout<<"Input Student Lname : ";
			cin>>last;
			cout<<"Input Student Nickname : ";
			cin>>nickname;
			cout<<"Input Student Tol. : ";
			cin>>Tol;
			cout<<"Input Student GPA : ";
			cin>>gpa;
			obj_linkedlist->add(Id,prefix,fname,last,nickname,Tol,gpa);
		}else if(ch=="4"){
			int index;
			cout<<"\n\n 4.   Add index Student   "<<endl;
			cout<<"\nInput index : ";
			cin>>index;
			cout<<"\nInput Student ID : ";
			cin>>Id;
			cout<<"Input Student Prefix : ";
			cin>>prefix;
			cout<<"Input Student Fname : ";
			cin>>fname;
			cout<<"Input Student Lname : ";
			cin>>last;
			cout<<"Input Student Nickname : ";
			cin>>nickname;
			cout<<"Input Student Tol. : ";
			cin>>Tol;
			cout<<"Input Student GPA : ";
			cin>>gpa;
			obj_linkedlist->add(index,Id,prefix,fname,last,nickname,Tol,gpa);
		}else if(ch=="5"){
			cout<<"\n\n 5.   Edit index Student  "<<endl;
			cout<<"\nInput Student ID : ";
			cin>>Id;
			cout<<"Input Student Prefix : ";
			cin>>prefix;
			cout<<"Input Student Fname : ";
			cin>>fname;
			cout<<"Input Student Lname : ";
			cin>>last;
			cout<<"Input Student Nickname : ";
			cin>>nickname;
			cout<<"Input Student Tol. : ";
			cin>>Tol;
			cout<<"Input Student GPA : ";
			cin>>gpa;
			obj_linkedlist->set(Id,prefix,fname,last,nickname,Tol,gpa);
		}else if(ch=="6"){
			string del;
			cout<<"\n\n 6.   Delete Student "<<endl;
			cout<<"\nInput Student ID DEL. : ";
			cin>>del;
			obj_linkedlist->remove(del);
		}
	}while(ch!="0");
	obj_linkedlist->save_data();
	return 0;
}
