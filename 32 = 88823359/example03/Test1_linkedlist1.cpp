#include <iostream>
//#include <stdbool.h>
using namespace std;
class LinkedList {
	private : 
		class node {
			public :
				int data;
				node *link;
				void setnode(int data){
					this->data=data;
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
		void add(int value){
			node *temp = new node;
			temp->data=value;
			if(this->isEmpty()){
				head=temp;
				tail=temp;
			}else{
				tail->link=temp;
				tail=temp;
			}
			count++;
		}
		void add(int index,int value){
			node  *temp=head;
			node  *ptemp=head;
			if(index>=0){
				node *newnode;
				newnode= new node();
				newnode->setnode(value);   ////temp->data=value;
				for(int i=0;i<=index;i++){
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
			if(index<count){
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
		void remove(int value){
			node *temp=head;
			node *ptemp=head;
			for(int i=0;i<count;i++){  //   or   for(node *temp=head;temp!=NULL;temp=temp->link)
				if(i==1){
					ptemp=ptemp->link;
					//                delete ptemp;
				}else{
					if(value==temp->data){
						ptemp->link=temp->link;
					}
					if(i>1){
						ptemp=ptemp->link;
					}
					temp=temp->link;
				}				
			}
			count--;
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
	return 0;
}
