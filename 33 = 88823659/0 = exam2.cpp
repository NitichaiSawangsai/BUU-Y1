#include <stdlib.h>
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
class LinkedList{
	private :
		class Node{	
			public :
				string id;
				string year;
				string prefix;
				string first;
				string last;
				string gpa;
				string major;
				string gen;
				string adv;
				string status;
				string date;
				Node *link;

				void setNode(string id,string year,string prefix,string first,string last,string gpa,string major,string gen,string adv,string status,string date){
					this->id = id;
					this->year = year;
					this->prefix = prefix;
					this->first =first;
					this->last = last;
					this->gpa = gpa;
					this->major = major;
					this->gen = gen;
					this->adv = adv;
					this->status = status;
					this->date = date;

					this->link = NULL;
				}//End setNode

		};
		Node *head;
		Node *tail;
		int count;
	public:
		LinkedList(){
			this->head = NULL;
			this->tail = NULL;
			this->count = 0;
		}// END LinkedList() 
		void read(){
			ifstream myFile("student.txt",ios::in);
			string id,year,first,last,gpa,major,gen,adv,status,date,prefix;

			while (myFile>>id>>year>>prefix>>first>>last>>gpa>>major>>gen>>adv>>status>>date){
				add(id,year,prefix,first,last,gpa,major,gen,adv,status,date);
			}// END while
			myFile.close();
		}//END read()
		void add(string id,string year,string prefix,string first,string last,string gpa,string major,string gen,string adv,string status,string date){
			Node *temp = new Node;
			temp->setNode(id,year,prefix,first,last,gpa,major,gen,adv,status,date);

			if(this->isEmpty()){
				head = temp;
				tail = temp;
			}else{
				tail->link = temp;
				tail = temp;
			}//END isEmpty
			count++;
		}// END add
		void show(){
			Node *temp=head;
			if(this->isEmpty()){
				cout<<"No Data ..."<<endl;
			}else{
				int stuing=0;
				int stuingMr=0;
				int stuingMiss=0;
				int i=1;
				stuing=Check("Studying");
				stuingMr=Check_statusMr("Mr.","Studying");
				stuingMiss=Check_statusMr("Miss.","Studying");
				cout<<"================================================================================================"<<endl;
				cout << "No.   id       year          Name             GPA  major   gen   adviser     status                " << endl;
				cout<<"================================================================================================"<<endl;
				cout<<"Studying Student : "<<stuing<<" Person (Mr.= "<<stuingMr<<" Miss = "<<stuingMiss<<")"<<endl;       
				cout<<"------------------------------------------------------------------------------------------------"<<endl;
				for(Node *temp=head;temp!=NULL;temp=temp->link){
					if(temp->status== "Studying"){
						cout<<setw(5)<<left<<i;
						cout<<""<<setw(5)<<left<<temp->id;
						cout<<"     ";
						cout<<setw(5)<<left<<temp->year;
						cout<<" ";
						cout<<setw(5)<<left<<temp->prefix;
						cout<<" ";
						cout<<setw(1)<<left<<temp->first[0]<<".";
						cout<<setw(12)<<left<<temp->last;
						cout<<"  ";
						cout<<setw(5)<<left<<temp->gpa;
						cout<<" ";
						cout<<setw(6)<<left<<temp->major;
						cout<<" ";
						cout<<setw(6)<<left<<temp->gen;
						cout<<" ";
						cout<<setw(9)<<left<<temp->adv;
						cout<<" ";
						cout<<setw(10)<<left<<temp->status;
						cout<<endl;
						i++;
					}//END status
				}//for 
				stuing=Check("Graduated");
				stuingMr=Check_statusMr("Mr.","Graduated");
				stuingMiss=Check_statusMr("Miss.","Graduated");
				i=1;
				cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
				cout<<"Graduated Student : "<<stuing<<" Person (Mr.= "<<stuingMr<<" Miss = "<<stuingMiss<<")"<<endl;       
				cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
				for(Node *temp=head;temp!=NULL;temp=temp->link){
					if(temp->status== "Graduated"){
						cout<<setw(5)<<left<<i;
						cout<<""<<setw(5)<<left<<temp->id;
						cout<<"     ";
						cout<<setw(5)<<left<<temp->year;
						cout<<" ";
						cout<<setw(5)<<left<<temp->prefix;
						cout<<" ";
						cout<<setw(1)<<left<<temp->first[0]<<".";
						cout<<setw(12)<<left<<temp->last;
						cout<<"  ";
						cout<<setw(5)<<left<<temp->gpa;
						cout<<" ";
						cout<<setw(6)<<left<<temp->major;
						cout<<" ";
						cout<<setw(6)<<left<<temp->gen;
						cout<<" ";
						cout<<setw(9)<<left<<temp->adv;
						cout<<" ";
						cout<<setw(10)<<left<<temp->status<<" : "<<temp->date;
						cout<<endl;
						i++;
					}//END If

				}//END for 
			}//Else isEmpty()
		}//END show
		int size(){
			return count;
		}//END size
		bool isEmpty(){
			if(count==0){
				return true;
			}else{
				return false;
			}//END count
		}//END isEmpty
		~LinkedList(){
			for(Node *temp=head;temp!=NULL;temp=temp->link){
				Node * tmp = this->head;
				this->head = this->head->link;
				delete tmp;
				tmp = NULL;
			}//END for
			delete this->head;
			this->head = NULL;
			delete this->tail;
			this->tail = NULL;
		}//END ~LinkedList
		void remove(string id){
			Node *ptemp;
			int round = 1;
			int no = 0;
			for(Node *temp=head; temp!=NULL; temp=temp->link){
				if(round == 1){
					ptemp = temp;
					if(temp->id==id){
						if(temp == head && temp == tail){
							delete temp;
							cout<<"Remove Complete"<<endl;
							head = NULL;
							tail = NULL;
						}else if(temp == head){
							head = head->link;
							delete temp;
							cout<<"Remove Complete"<<endl;
						}//END  if(temp == head && temp == tail)
						count --;
						break;
					}//END  if(temp->id==id)
				}else {
					if(temp-> id == id){
						if(temp == tail){
							tail = ptemp;
							tail->link = NULL;
							delete temp;
							cout<<"Remove Complete"<<endl;
						}else{
							ptemp->link = temp-> link;
							delete temp;
							cout<<"Remove Complete"<<endl;
						}//END if(temp == tail)
						count --;
						break;
					}else{
						ptemp = temp;
					}//END if(temp-> id == id)
				}//END  if(round == 1)
				round++;
			}//END for
		}//END remove
		bool  find(string id){
			int yes = 0;
			for(Node *temp=head; temp!=NULL; temp=temp->link){
				if(id==temp->id){
					temp=temp->link;
					yes = 1;
					break;
				}//END if(id==temp->id)
			}//END for
			if(yes==1){
				return true;
			}else{
				return false;
			}//END if yes
		}//END find
		bool Check_status(string status){
			int yes=0;
			for(Node *temp=head;temp!=NULL;temp=temp->link){
				if(status==temp->status){
					if(temp->status=="Graduated"){
						yes=1;
						return true;
						break;
					}//END  if(temp->status=="Graduated")
				}//END if(status==temp->status)
			}//END  for
			if(yes==0){
				return false;
			}//END if yes
		}//END Check_status
		int Check_statusMr(string prefix,string status){
			int yes=0;
			for(Node *temp=head;temp!=NULL;temp=temp->link){
				if(temp->status==status){
					if(temp->prefix==prefix){
						yes++;
					}//END if(temp->prefix==prefix)
				}//END  if(temp->status==status)
			}//END for
			return yes;
		}//END Check_statusMr
		int Check(string status){
			int yes=0;
			for(Node *temp=head;temp!=NULL;temp=temp->link){
				if(temp->status==status){
					yes++;
				}//END  if(temp->status==status)
			}//END for
			return yes;
		}//END Check
}; //END LinkedList
int main(){
	string id;
	string year;
	string first;
	string last;
	string gpa;
	string major;
	string gen;
	string adv;
	string status;
	string prefix;

	LinkedList *obj_linkedlist = new LinkedList();
	int num;
	obj_linkedlist->read();
	do{
		cout<<" ---------------------- "<<endl;
		cout<<" 1. Show Student List   "<<endl;
		cout<<" 2. Add Student         "<<endl;
		cout<<" 3. Delete Student      "<<endl;
		cout<<" 0. Exit                "<<endl;
		cout<<" ---------------------- "<<endl;
		cout<<"Enter Number (0-3) :";
		cin>>num;
		cout<<endl;
		if(num==1){ 
			obj_linkedlist->show();
		}else if(num==2){
			cout<<"ID :";
			cin>>id;
			if(obj_linkedlist->find(id)!=1){
				cout<<"Year :";
				cin>>year;
				cout<<"prefix :";
				cin>>prefix;
				cout<<"Firstname :";
				cin>>first;				
				cout<<"Lastname :";
				cin>>last;
				cout<<"GPA :";
				cin>>gpa;
				cout<<"major :";
				cin>>major;
				cout<<"Generation :";
				cin>>gen;
				cout<<"Adviser :";
				cin>>adv;
				cout<<"Status :";
				cin>>status;
				if(status=="Studying"){
					obj_linkedlist->add(id,year,prefix,first,last,gpa,major,gen,adv,"Studying","-");
					obj_linkedlist->show();
				}else if(status=="Graduated"){
					string date;
					cout<<"d/m/y : ";
					cin>>date;  	   
					obj_linkedlist->add(id,year,prefix,first,last,gpa,major,gen,adv,"Graduated",date);
					obj_linkedlist->show();
				}//END if(status=="Studying")
			}else{
				cout<<"Duplicate ID!!!!!"<<endl;
			}//END if(obj_linkedlist->find(id)!=1)
		}else if(num==3){
			string id;
			obj_linkedlist->show();
			cout<<"Enter the Student ID To Delete : ";
			cin>>id; 
			obj_linkedlist->remove(id);	    		 	 
		}//END num
	}while(num!=0);

	return 0;
}//END mian
