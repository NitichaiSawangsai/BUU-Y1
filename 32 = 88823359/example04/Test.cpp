#include <iostream>
using namespace std;
class DdLinkedList{
	private :
		class Node{
			public :
				int data;
				Node *link;
				Node *plink;
				Node(int data){
					this->data = data;
					link = NULL;
					plink = NULL;
				}
		};
		
		Node *head;
		Node *tail;
		int count;
	
	public : 
		DdLinkedList(){
			head = NULL;
			tail = NULL;
			count = 0;
		}
		
		~DdLinkedList(){
			for(int i = 1; i < this->count; i++){
				Node * temp = this->head;
				this->head = this->head->link;
				delete temp;
				temp = NULL;
			}
			this->head = NULL;
			this->tail = NULL;

		}
		
		void add(int value){
			Node *newNode = new Node(value);
			if(isEmpty()){
				head = newNode;
				tail = newNode;
			}else{
				tail->link = newNode;
				newNode->plink = tail;
				tail = newNode;
			}
			count++;
		}
		
		void add(int index,int value){
			Node *newNode = new Node(value);
			if(isEmpty()){
				head = newNode;
				tail = newNode;
				count++;
			}else{
				if(index > 0 && index <= size()){
					if(index == 1){
						newNode->link = head;
						head->plink = newNode;
						head = newNode;
						
					}else{
						Node * temp = head;
						Node * ptemp = head;
						for(int i = 1;i < index; i++){
							temp = temp->link;
						}
						ptemp = temp->plink;
						newNode->link = temp;
						temp->plink = newNode;
						ptemp->link = newNode;
						newNode->plink = ptemp; 
					}
					count++;
				}else{
					cout << "Index out of Scrop...!!" << endl;
				}
			}
			
		}
		
		void show(){
			cout << "Result in LinkedList : ";
			if(isEmpty()){
				cout << "No Data !!!.";
			}else{
				for(Node *temp = head;temp != NULL;temp = temp->link){
					cout << temp->data << " " ;
				}
			}
			
			cout << endl;
		
		}
		void show_backward(){
			cout << "Result in LinkedList : ";
			if(isEmpty()){
				cout << "No Data !!!.";
			}else{
				for(Node *temp = tail;temp != NULL;temp = temp->plink){
					cout << temp->data << " " ;
				}
			}
			
			cout << endl;
			
			
		}
		void remove(int value){
			int round=1;
			Node *ptemp;
			for(Node *temp = head;temp != NULL;temp = temp->link){
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
		
		bool find(int value){
			for(Node *temp = head;temp != NULL;temp = temp->link){
				if(temp->data == value){
					cout << "Value " << value << " is Found ...!!" << endl;
					return true;
				}
			}
			cout << "VaLue " << value << " Not Found ...!!" << endl; 
			return false;
		}
		
		int get(int index){
			if(isEmpty()){
				cout << "No Data ...!" << endl;
			}else{
				if(index > 0 && index <= size()){
					Node *temp = head;
					for(int i=1;i<index;i++){
						temp = temp->link;
					}
					return temp->data;
				}
			}
		}
		
		void set(int index,int data){
			if(isEmpty()){
				cout << "No Data ...!" << endl;
			}else{
				if(index > 0 && index <= size()){
					Node *temp = head;
					for(int i=1;i<index;i++){
						temp = temp->link;
					}
					temp->data = data;
				}else{
					cout << "Out of Index " << endl;
				}
			}
		}
		
		int size(){
			return count;
		}
		
		bool isEmpty(){
			if(count == 0)
				return true;
			else	
				return false;
		}
		
};


int main(){
	DdLinkedList obj_linklist;

	cout << "Don't add data" << endl;
	obj_linklist.show(); cout << endl;
	cout << "Add Data -> " << "1 2 3 4 " << endl;
		obj_linklist.add(1);
		obj_linklist.add(2);
		obj_linklist.add(3);
		obj_linklist.add(4);
	obj_linklist.show(); cout << endl;
	
	cout << "Add data " <<"data-> '10 index 1' " <<endl;
	obj_linklist.add(1,10);
	obj_linklist.show();	
	cout << "Add data " <<"data-> '11 index 5' " <<endl;
	obj_linklist.add(5,11);
	obj_linklist.show(); cout <<endl;
	
	cout << "Remove data -> " << "10" << endl;
	obj_linklist.remove(10);
	obj_linklist.show();
	cout << "Remove data -> " << "11" << endl;
	obj_linklist.remove(11);
	obj_linklist.show(); cout <<endl;	
	
	cout << "Find data " << "-> 10" << endl;	
	obj_linklist.find(10);
	obj_linklist.show();
	cout << "Find data " << "-> 1" << endl;
		
	obj_linklist.find(1);
	obj_linklist.show();  cout << endl;	
	cout << "Show data " <<endl;
	obj_linklist.show();
	cout << "Show_Backward" << endl;
	obj_linklist.show_backward();
		
}
