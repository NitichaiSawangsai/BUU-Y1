#include <iostream>
//#include <stdbool.h>
using namespace std;
class LinkedList {
	private : 
		class node {
			public :
				int data;
				node *link;
				void setnode(int data){  //Node (int data)
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
			node *temp = new node;   //Node * newNode = new Node (value);
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
                //   teacher  add index
			void add(int index,int value){
                              node *temp=head;
                              node *ptemp;//=head;
                              node *newNode = new node;//(value);
                              newNode->setnode(value);
                              if(isEmpty()){
                                   head = newNode;
                                   tail = newNode;
                                   count++;
                              }else{
                                   if(index>=0 && index<count){
                                        if(index ==1 ){
                                           newNode->link = head;
                                           head = newNode;       
                                        }else{
                                           for(int i=0;i<index;i++){
                                                if(i>1){
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
		void remove (int value){      //remove teacher
			int round=1;
			node *ptemp;
			for(node *temp=head;temp!=NULL;temp=temp->link){
				if(round==1){
					ptemp=temp;
					if(temp->data==value){
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
					if(temp->data==value){
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
	string  ch;
	do{
		cout<<"\n\n\n----------------------"<<endl;
		cout<<" 1 = Add              "<<endl;
		cout<<" 2 = Add (index)      "<<endl;
		cout<<" 3 = Show             "<<endl;
		cout<<" 4 = Remove           "<<endl;
		cout<<" 5 = Exit             "<<endl;
		cout<<"----------------------"<<endl;
		cin>>ch;
		if(ch=="1"){
			int add=0;
			cout<<"\n-->> Add "<<endl;
			cout<<"-->> Add : ";
			cin>>add;
			obj_linkedlist->add(add);
		}else if(ch=="2"){
			int add=0,index=0;
			cout<<"\n-->> Add (Index)"<<endl;
			cout<<"index : ";
			cin>>index;
			cout<<"Add : ";
			cin>>add;
			obj_linkedlist->add(index,add);
		}else if(ch=="3"){
			cout<<"\n-->> Show "<<endl;
			obj_linkedlist->show();
		}else if(ch=="4"){
			int remove=0;
			cout<<"\n-->> Remove : ";
			cin>>remove;
			obj_linkedlist->remove(remove);
		}
	}while(ch!="5");      
	return 0;
}
