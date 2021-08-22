#include <stdlib.h> 
#include <iostream>
#include <string>
#include <stdio.h>
#include <fstream>
#include <iomanip>
using namespace std;
class LinkedList {
	private : 
		class node {
			public :
				string Id;
				string year;
				string fname;
				string last;
				string major;
				string ganeration;
				string adv;
				string sta;
				float gpa;
				node *link;
				void setnode(string id,string year,string fname,string lname,float gpa,string branch,string generation,string Adv,string Sta){
					this->Id=id;
					this->year=year;
					this->fname=fname;
					this->last=lname;
					this->gpa=gpa;
					this->major=branch;
					this->ganeration=generation;
					this->adv=Adv;
					this->sta=Sta;

					this->link=NULL;
				}            
		};
		node *head;
		node *tail;
		int count;
	public  :
		LinkedList(){
			this->head=NULL;
			this->tail=NULL;
			this->count=0;
		}
		void read(){
			node *temp = new node;
			ifstream myFile("student1.dat",ios::in);
			string  id;
			string year;
			string fname;
			string lname;
			float gpa;
			string branch;
			string generation;
			string Adv;
			string Sta;
			count=0;
			temp->Id=id;
			temp->year=year;
			temp->fname=fname;
			temp->last=lname;
			temp->gpa=gpa;
			temp->major=branch;
			temp->ganeration=generation;

			while (myFile>>id>>year>>fname>>lname>>gpa>>branch>>generation>>Adv>>Sta){
				add(id,year,fname,lname,gpa,branch,generation,Adv,Sta);
			}
			myFile.close();    
		}  
		void show(){
			if(this->isEmpty()){
				cout<<"o Data ..."<<endl;
			}else{
				node *temp=head;
				cout<<"                                         Show Student                       "<<endl;
				cout<<" ==========================================================================================================================="<<endl;
				cout<<"  Student Id.    year             First & Last Name                     GPA    Major      Generation   Adviser      Status  "<<endl;
				cout<<" ============================================================================================================================"<<endl;
				for(int i=0;i<count;i++){  //   or   for(node *temp=head;temp!=NULL;temp=temp->link)
					cout<<"   "<<setw(15)<<left<<temp->Id;
					cout<<setw(15)<<left<<temp->year;
					cout<<setw(15)<<left<<temp->fname;
					cout<<setw(15)<<left<<temp->last;
					cout<<setw(15)<<left;printf("\t\t%3.2f\t",temp->gpa);
					cout<<setw(12)<<left<<temp->major;
					cout<<setw(12)<<left<<temp->ganeration;
					cout<<setw(12)<<left<<temp->adv;
					cout<<setw(12)<<left<<temp->sta<<endl;
					temp=temp->link;
				}
				cout<<endl;
			}
		}
		void add(string id,string year,string fname,string lname,float gpa,string branch,string generation,string Adv,string Sta){
                   if(find(id)==0){
			node *temp = new node;
			temp->Id=id;
			temp->year=year;
			temp->fname=fname;
			temp->last=lname;
			temp->gpa=gpa;
			temp->major=branch;
			temp->ganeration=generation;
			temp->adv=Adv;
			temp->sta=Sta;
			if(this->isEmpty()){
				head=temp;
				tail=temp;
			}else{
				tail->link=temp;
				tail=temp;
			}
			count++;
                    }else{
                            cout<<"\n Duplicate ID !!!!! "<<endl;
                    }
		}
		/*		void add(int index,string id,string year,string fname,string lname,float gpa,string branch,string generation){
				node *temp=head;
				node *ptemp;//=head;
				node *newNode = new node;	
				newNode->setnode(id,year,fname,lname,gpa,branch,generation);   ////temp->data=value;
				if(isEmpty()){
				head = newNode;
				tail = newNode;
				count++;
				}else{
				if(index>=0 && index<count){
				if(index ==0 ){
				newNode->link = head;
				head = newNode;       
				}else{
				for(int i=0;i<index;i++){
				if(i>=0){
				ptemp=temp;
				}
				temp = temp->link;
				}           
				newNode->link =temp;
				ptemp->link =newNode;
				}
				count++;
				}else{
				cout<<"Index out of Scrop....! "<<endl;
				}
				}
				}
				void save_data(){
				node *temp=head;
				ofstream myFile("student.dat",ios::out);
				for(int i=0;i<count;i++){
				myFile <<temp->Id<<"\t"<<temp->year<<"\t"<<temp->fname<<"\t"<<temp->last<<"\t"<<temp->gpa<<"\t";
				myFile <<temp->major<<"\t"<<temp->ganeration<<endl;
				temp=temp->link;

				}
				myFile.close();

				}
		 */	
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
                 bool Check_status(string ID){
			 int yes=0;
			 for(node *temp=head;temp!=NULL;temp=temp->link){
                               if(ID==temp->Id){
				 if(temp->sta=="Graduated"){
					 yes=1;
					 return true;
					 break;
				 }
                               }
			 }
			 if(yes==0){
				 return false;
			 }
                 }
		 void remove (string value){      //remove teacher
                   if(Check_status(value)==0){      
			 if(find(value)==1){
				 cout<<" *** Romove Complete. *** \n\n";
			 }else{
				 cout<<" *** No Romove Complete. *** \n";
			 }
			 int round=1;
			 node *ptemp;
			 for(node *temp=head;temp!=NULL;temp=temp->link){
				 if(round==1){
					 ptemp=temp;
					 if(temp->Id==value){
						 if(temp==head && temp==tail){
							 delete temp;
							 head = NULL;
							 tail = NULL;
						 }else if(temp == head){
							 head = head->link;
							 delete temp;
						 }
						 count--;
						 break;
					 }
				 }else{
					 if(temp->Id==value){
						 if(temp==tail){
							 tail = ptemp;
							 tail->link= NULL;
							 delete temp;
						 }else{
							 ptemp->link =temp->link;
							 delete temp;
						 }
						 count--;
						 break;
					 }else{
						 ptemp = temp;
					 }
				 }
				 round++;
			 }
                   }else{
                       cout<<"The item to be deleted is not in the list."<<endl;
                   }
		 }
		 /*		void set(int index,string value){
				node  *temp=head;
				for(int i=0;i<count;i++){
				if(index==i){
				temp->Id=value;
				break;  
				}
				temp=temp->link;
				}
				}
		  */		string get(int index){
			  node  *temp=head;
			  for(int i=1;i<count;i++){
				  if(index==i){
					  return temp->Id;
					  break;
				  }
				  temp=temp->link;
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
		  ~LinkedList(){
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
	string  id;
	string year;
	string fname;
	string lname;
	float gpa;
	string branch;
	string generation;
	string Adv;
	string Sta;
	LinkedList *obj_linkedlist = new LinkedList();
	string ch;
	obj_linkedlist->read();
	system("clear");
	do{
		cout<<"\n\n ---------------------- "<<endl;
		cout<<" 1. Show Student List   "<<endl;
		cout<<" 2. Add Student         "<<endl;
		cout<<" 3. Delete Student      "<<endl;
//		cout<<" 4. save data           "<<endl;
		cout<<" 0. Exit                "<<endl;
		cout<<" ---------------------- "<<endl;
		cout<<"Enter Number (0-2) :    "<<endl;
		cin>>ch;
		cout<<endl;
		if(ch=="1"){
			obj_linkedlist->show();
		}else if(ch=="2"){
			cout<<"\nInput Student ID : ";
			cin>>id;
			cout<<"Input Student Year : ";
			cin>>year;
			cout<<"Input Student Fname : ";
			cin>>fname;
			cout<<"Input Student Lname : ";
			cin>>lname;
			cout<<"Input Student GPA : ";
			cin>>gpa;
			cout<<"Input Student Branch : ";
			cin>>branch;
			cout<<"Input Student Generation : ";
			cin>>generation;
			cout<<"Input Student Adviser : ";
			cin>>Adv;
			cout<<"Input Student Status : ";
			cin>>Sta;
			obj_linkedlist->add(id,year,fname,lname,gpa,branch,generation,Adv,Sta);
		}else if(ch=="3"){
			string del;
			cout<<"\nFunction Delete.\n";
			cout<<"Enter The Student ID TO  Delete. : ";
			cin>>del;
			obj_linkedlist->show();
			obj_linkedlist->remove(del);
		}else if(ch=="4"){
			//obj_linkedlist->save_data();
		//	cout<<"\n ++ Save Data ++ \n";
		}
	}while(ch!="0");
	return 0;
}
