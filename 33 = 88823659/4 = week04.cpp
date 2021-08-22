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
				int data;
				string Id;
				string year;
				string fname;
				string last;
				string major;
				string ganeration;
				float gpa;
				node *link;
				void setnode(string id,string year,string fname,string lname,float gpa,string branch,string generation){
					this->Id=id;
					this->year=year;
					this->fname=fname;
					this->last=lname;
					this->gpa=gpa;
					this->major=branch;
					this->ganeration=generation;
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
			ifstream myFile("student.dat",ios::in);
			string  id;
			string year;
			string fname;
			string lname;
			float gpa;
			string branch;
			string generation;
			count=0;
			temp->Id=id;
			temp->year=year;
			temp->fname=fname;
			temp->last=lname;
			temp->gpa=gpa;
			temp->major=branch;
			temp->ganeration=generation;
			while (myFile>>id>>year>>fname>>lname>>gpa>>branch>>generation){
				//	temp->setnode(id,year,fname,lname,gpa,branch,generation);   ////temp->data=value;
				//	if(this->isEmpty()){
				//		head=temp;
				//		tail=temp;
				//	}else{
				//		tail->link=temp;
				//		tail=temp;
				//	}
				//	count++;
				//temp=temp->link;
				add(id,year,fname,lname,gpa,branch,generation);
				//           count++;
			}
			myFile.close();    
		}  
		void show(){
			if(this->isEmpty()){
				cout<<"o Data ..."<<endl;
			}else{
				node *temp=head;
				cout<<"                                         Show Student                       "<<endl;
				cout<<" ========================================================================================================"<<endl;
				cout<<"  Student Id.    year             First & Last Name                     GPA    Major      Generation     "<<endl;
				cout<<" ========================================================================================================"<<endl;
				for(int i=0;i<count;i++){  //   or   for(node *temp=head;temp!=NULL;temp=temp->link)
					cout<<"   "<<setw(15)<<left<<temp->Id;
					cout<<setw(15)<<left<<temp->year;
					cout<<setw(15)<<left<<temp->fname;
					cout<<setw(15)<<left<<temp->last;
					cout<<setw(15)<<left;printf("\t\t%3.2f\t",temp->gpa);
					cout<<setw(12)<<left<<temp->major;
					cout<<setw(12)<<left<<temp->ganeration<<endl;
					temp=temp->link;
				}
				cout<<endl;
			}
		}
		void add(string id,string year,string fname,string lname,float gpa,string branch,string generation){
			node *temp = new node;
			temp->Id=id;
			temp->year=year;
			temp->fname=fname;
			temp->last=lname;
			temp->gpa=gpa;
			temp->major=branch;
			temp->ganeration=generation;
			if(this->isEmpty()){
				head=temp;
				tail=temp;
			}else{
				tail->link=temp;
				tail=temp;
			}
			count++;
		}
		/*		void add(int index,int value){
				node  *temp=head;
				node  *ptemp=head;
				if(index>=2){
				node *newnode;
				newnode= new node();
				newnode->setnode(value);   ////temp->data=value;
				for(int i=2;i<=index;i++){
				temp=temp->link;   
				if(i==index){
				break;
				}
				ptemp=ptemp->link;
				}
				newnode->link=temp;
				ptemp->link=newnode;
				count++;
				}else{
				cout<<"\n ****  No add  index  **** \n"<<endl;
				}
				}
				bool  find(int value){
				int i=0,yes=0;
				for(node *temp=head;temp!=NULL;temp=temp->link){
				if(value==temp->data){
				cout<<"NO : "<<i<<" --> ";
				cout<<temp->data<<" ";
				yes=1;
				break;
				}
				i++;
				}
				cout<<endl;
				if(yes==1){
				return true;
				}else{
				return false;
				}
				}
				void set(int index,int value){
				node  *temp=head;
				for(int i=0;i<count;i++){
				if(index==i){
				temp->data=value;
				break;  
				}
				temp=temp->link;
				}
				}
				int get(int index){
				node  *temp=head;
				for(int i=1;i<count;i++){
				if(index==i){
				return temp->data;
				break;
				}
				temp=temp->link;
				}
				}
		 */	
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
                ~ LinkedList(){
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
	LinkedList *obj_linkedlist = new LinkedList();
	string ch;
	obj_linkedlist->read();
	do{
		cout<<" ---------------------- "<<endl;
		cout<<" 1. Show Student List   "<<endl;
		cout<<" 2. Add Student         "<<endl;
		cout<<" 0. Exit                "<<endl;
		cout<<" ---------------------- "<<endl;
		cout<<"Enter Number (0-2) :    "<<endl;
		cin>>ch;
		cout<<endl;
		if(ch=="1"){
			obj_linkedlist->show();
		}else if(ch=="2"){
			cout<<"\nID : ";
			cin>>id;
			cout<<"Year : ";
			cin>>year;
			cout<<"Fname : ";
			cin>>fname;
			cout<<"Lname : ";
			cin>>lname;
			cout<<"GPA : ";
			cin>>gpa;
			cout<<"Branch : ";
			cin>>branch;
			cout<<"Generation : ";
			cin>>generation;
			obj_linkedlist->add(id,year,fname,lname,gpa,branch,generation);
		}
	}while(ch!="0");
	return 0;
}
