#include <stdlib.h> 
#include <iostream>
#include <string>
#include <stdio.h>
#include <fstream>
#include <iomanip>
using namespace std;
class Student{
	private : 
		string  id;
		string year;
		string fname;
		string lname;
		float gpa;
		string branch;
		string generation;
	public  :
		Student (){
			id=" ";
			year=" ";
			fname=" ";
			lname=" ";
			gpa=0.00;
			branch=" ";
			generation=" ";
		}
		void setstudent(string i,string y,string f,string l,float gp,string b,string gen){
			id=i;
			year=y;
			fname=f;
			lname=l;
			gpa=gp;
			branch=b;
			generation=gen;
		}
		void setid(string id){
			this->id=id; 
		}
		string getid(){
			return id ;
		}
		void setyear(string year){
			this->year=year; 
		}
		string getyear(){
			return year ;
		}
		void setFname(string fname){
			this->fname=fname;
		}
		string getFname(){
			return fname;
		}
		void setLname(string lname){
			this->lname=lname;
		}
		string getLname(){
			return lname;
		}
		void setgpa(float gpa){
			this->gpa=gpa;
		}
		float getgpa(){
			return gpa;
		}
		void setbranch(string branch){
			this->branch=branch;
		}
		string getbranch(){
			return branch;
		}
		void setgeneration(string generation){
			this->generation=generation;
		}
		string getgeneration(){
			return generation;
		}
};
class LinkedList {
	private : 
		class node {
			public :
				Student data;
				node *link;
				void setnode(Student aa){
					data=aa;
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
			Student  input;
			while (myFile>>id>>year>>fname>>lname>>gpa>>branch>>generation){
				input.setstudent(id,year,fname,lname,gpa,branch,generation);
				add(input);
			}
			myFile.close();    
		}  
		void add(Student num){
			node *temp = new node;
			temp->setnode(num);
			if(this->isEmpty()){
				head=temp;
				tail=temp;
			}else{
				tail->link=temp;
				tail=temp;
			}
			count++;
		}
		bool  find(string value){
			int i=0,yes=0;
			for(node *temp=head;temp!=NULL;temp=temp->link){
				if(value==temp->data.getid()){
					cout<<"NO : "<<i<<" --> ";
					cout<<temp->data.getid()<<" ";
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
					cout<<"   "<<setw(15)<<left<<temp->data.getid();
					cout<<setw(15)<<left<<temp->data.getyear();
					cout<<setw(15)<<left<<temp->data.getFname();
					cout<<setw(15)<<left<<temp->data.getLname();
					cout<<setw(15)<<left;printf("\t\t%3.2f\t",temp->data.getgpa());
					cout<<setw(12)<<left<<temp->data.getbranch();
					cout<<setw(12)<<left<<temp->data.getgeneration()<<endl;
					temp=temp->link;
				}
				cout<<endl;
			}
		}
		void remove (string value){      //remove teacher
			int round=1;
			node *ptemp;
			for(node *temp=head;temp!=NULL;temp=temp->link){
				if(round==1){
					ptemp=temp;
					if(temp->data.getid()==value){
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
					if(temp->data.getid()==value){
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
	LinkedList *obj_linkedlist = new LinkedList();
	obj_linkedlist->read();
	obj_linkedlist->show();
	string del;
	cout<<"DEL : ";
	cin>>del;
        if(obj_linkedlist->find(del)){
	obj_linkedlist->remove(del);
            cout<<"Yes -> DEL "<<endl;
        }else{
            cout<<"NO -> DEL "<<endl;
        }
	obj_linkedlist->show();

}
