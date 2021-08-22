#include <iostream>
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
using namespace std;
class DoubleLinkedList {
	private : 
		class node {
			public :
				int data;
				node *link;
				node *plink;
				void setnode(int data){  //Node (int data)
					this->data=data;
					this->link=NULL;
					this->plink=NULL;
				}            
		};
		node *head;
		node *tail;
		int count;
	public  :
		DoubleLinkedList(){
			this->head=NULL;
			this->tail=NULL;
			this->count=0;
		}
		void add(int value){
			node *temp = new node;   //Node * newNode = new Node (value);
			temp->data=value;
			if(this->isEmpty()){
				head=temp;
				tail=temp;
			}else{
				tail->link=temp;
				temp->plink=tail;
				tail=temp;

			}
			count++;
		}
		void add(int index,int data){
			node *temp=head;
			node *ptemp;//=head;
			node *newNode = new node;	
			newNode->setnode(data);   ////temp->data=value;
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
		/*void Bubble_Sort(){
		  node *Temp=head;
		  node *newnode;
		  int temp;
		  for(int i=0;i<count-1;i++){   
		  temp=Temp->data;
		  Temp=Temp->link;
		  for(int j=count-1;j>i;j--){                                        
		  if(temp < Temp->data){
		  T
		//	temp             = arr_sorting[j];
		//	arr_sorting[j]   = arr_sorting[j-1];
		//	arr_sorting[j-1] = temp;
		}    
		}
		}
		}
		 */
		void Selection_Sort(){
			if(this->isEmpty()){
				cout<<"o Data ... -> No Selection Sort <- "<<endl;
			}else{
		                cout<<"Thx <- Selection Sort -> Thx"<<endl;
				int *arr_sorting,Y=0;
				int size=count;
                                arr_sorting = new int[size];
				for(node *temp=head;temp!=NULL;temp=temp->link){
					arr_sorting[Y] = temp->data;
					Y++;
				}

				ALL_del();

				int min=0,temp=0;
				for(int i=0;i<size-2;i++){
					min = i;
					for(int j=i+1;j<size-1;j++){
						if(arr_sorting[j]<arr_sorting[min]){
							min = j;
						}

					}
					temp = arr_sorting[i];
					arr_sorting[i]   = arr_sorting[min];
					arr_sorting[min] = temp;
				}
				for(int i=0;i<size;i++){
					add(arr_sorting[i]);
				}
				size = 0;
				delete [] arr_sorting;
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
			if(index<count && index>=0){
				node  *temp=head;
				for(int i=0;i<count;i++){
					if(index==i){
						return temp->data;
						break;
					}
					temp=temp->link;
				}
			}else{
				cout<<"\n --> No Data <-- \n"<<endl;
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
		void show( ){
			cout<<"Value in LinkedList : ";
			if(this->isEmpty()){
				cout<<"o Data ..."<<endl;
			}else{
				node *temp=head;
				for(int i=0;i<count;i++){  //   or   for(node *temp=head;temp!=NULL;temp=temp->link)
					cout<<temp->data<<" ";
					temp=temp->link;
				}
				cout<<endl;
			}
		}
		void show_backward (){
			cout<<"\nValue in LinkedList : ";
			if(this->isEmpty()){
				cout<<"o Data ..."<<endl;
			}else{
				node *temp=tail;
				//	for(node *temp=tail;temp!=NULL;temp=temp->plink)
				for(int i=count;i>0;i--){  //   or   for(node *temp=head;temp!=NULL;temp=temp->link)
					cout<<temp->data<<" ";
					temp=temp->plink;
				}
				cout<<endl;
			}
		} 
		void remove(int value){
			int round=1;
			node *ptemp;
			for(node *temp = head;temp != NULL;temp = temp->link){
				if(round == 1){
					ptemp = temp;
					if(temp->data == value){
						if(temp == head && temp == tail){
							delete temp;
							head = NULL;
							tail = NULL;
						}else if(temp == head){
							head = head->link;
							head->plink = NULL;
							delete temp;
						}
						count--;
						break;
					}
				}else{
					if(temp->data == value){
						ptemp = temp->plink;
						if(temp == tail){
							tail = ptemp;
							tail->link = NULL;
							delete temp;
						}else{
							ptemp->link = temp->link;
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
		void ALL_del(){
			for(node *temp=head;temp!=NULL;temp=temp->link){
				node * tmp = this->head;
				this->head = this->head->link;
				delete tmp;
				tmp = NULL;
			}
			count = 0;
			head  = NULL;
			tail  = NULL;
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
	string ch;
	DoubleLinkedList *obj_linkedlist = new DoubleLinkedList();
	do{
		cout<<"\n\n\n ------------------------ "<<endl;
		cout<<" 1. Show Student List      "<<endl;
		cout<<" 2. Random numbers         "<<endl;
		cout<<" 3. Sort by Selection_Sort "<<endl;
		cout<<" 4. Add Student            "<<endl;
		cout<<" 5. Add index Student      "<<endl;
		cout<<" 6. Delete Student       \n"<<endl;
		cout<<" 0. Exit                   "<<endl;
		cout<<" ------------------------  "<<endl;
		cout<<"Enter Number (0-2) : ";
		cin>>ch;
		cout<<endl;
		if(ch=="1"){
			cout<<"\n --- Show face to back --- \n\n";
			obj_linkedlist->show ();
			cout<<"\n ---   Show backward   --- \n";
			obj_linkedlist->show_backward ();
		}else if(ch=="2"){
			int size=0;
			obj_linkedlist->ALL_del();
			cout<<"size : ";
			cin>>size;
			for(int i=0;i<size;i++){
				if(i%2==0){
					obj_linkedlist->add(50+(rand()%(10-50)));
				}else if(i%3==0){
					obj_linkedlist->add(rand() % 10);
				}else{
					obj_linkedlist->add(rand() % 60);
				} 
			}
		}else if(ch=="3"){
			obj_linkedlist->Selection_Sort();
		}else if(ch=="4"){
			int id;
			cout<<"\nAdd  : ";
			cin>>id;
			obj_linkedlist->add(id);
		}else if(ch=="5"){
			int id,index;
			cout<<"\nindex  : ";
			cin>>index;
			cout<<"\nAdd  : ";
			cin>>id;
			obj_linkedlist->add(index,id);
		}else if(ch=="6"){
			int del;
			cout<<"Enter The Student ID TO  Delete. : ";
			cin>>del;
			obj_linkedlist->remove(del);
		}
	}while(ch!="0");
	return 0;
}
