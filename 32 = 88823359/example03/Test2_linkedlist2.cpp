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
		void add(int index,int value){
			node  *temp=head;
			node  *ptemp=head;
			if(index>=0 && count>index){
				if(index!=0){
					node *newnode;
					newnode= new node();
					newnode->setnode(value);   ////temp->data=value;
					for(int i=0;i<=index;i++){
						temp=temp->link;   
						if(i==(index-1)){
							break;
						}
						ptemp=ptemp->link;
					}
					newnode->link=temp;
					ptemp->link=newnode;
					count++;
				}else{
					temp->data=value;
					head=temp;
				}
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
		void remove(int value){      // delete 
			node *temp=head;
			node *ptemp=head;
			for(int i=0;i<count;i++){  //   or   for(node *temp=head;temp!=NULL;temp=temp->link)
				if(i==1){
					ptemp=ptemp->link;
                                         head=head->link;
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
/*    //remove teacher
    void remove (){
          int round=1;
          Node *ptemp;
          for(Node *temp=head;temp!=NULL;temp=temp->link){
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
        

*/
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
	obj_linkedlist->add(5);
	obj_linkedlist->add(8);
	obj_linkedlist->add(3);
	obj_linkedlist->add(79);
	obj_linkedlist->add(7);
	obj_linkedlist->add(87);
	obj_linkedlist->show();
	obj_linkedlist->find(5);
	obj_linkedlist->find(8);
	obj_linkedlist->find(87);
	obj_linkedlist->add(0,99);
	obj_linkedlist->show();
	obj_linkedlist->set(3,90);
	obj_linkedlist->remove(5);
	obj_linkedlist->remove(79);
	obj_linkedlist->show();
	obj_linkedlist->find(7);
	obj_linkedlist->find(8);
	obj_linkedlist->find(99);
	obj_linkedlist->find(8);
	int get;
	cout<<"\n\n get ? --> ";
	cin>>get;
	cout<<"\nAne get --> "<<obj_linkedlist-> get(get)<<endl;
	cout<<"Size : "<<obj_linkedlist->size()<<endl;
	cout<<"Empty : ";
	if(obj_linkedlist->isEmpty()==1){
		cout<<"blank"<<endl;
	}else{
		cout<<"Have information"<<endl;
	}


	//LinkedList obj_linkedlist;    //This is also available.
	//obj_linkedlist.add(5);
	//obj_linkedlist.add(8);
	//obj_linkedlist.show();
	return 0;
}
