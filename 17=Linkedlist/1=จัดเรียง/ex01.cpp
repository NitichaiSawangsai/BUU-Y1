/*
TASK : DbLinkedList_Sort
LANG : C++
AUTHOR : Krit Tammakoon
STUDENT : 59160042
MAJOR : SE
*/
#include <iostream>
#include <stdbool.h>
using namespace std;
class DbLinkedList{
	private:
		class node{
			public:
				int data;
				node *link, *plink;
				node(int data){
					this->data = data;
					link = NULL;
					plink = NULL;				
				}
				void setnode(int data){
					this->data = data;
					link = NULL;
					plink = NULL;
				}
		};
		node *head;
		node *tail;
		int count;
	public:
		DbLinkedList(){
			this->head = NULL;
			this->tail = NULL;
			this->count = 0;
		}
		~DbLinkedList(void){
			for(int i = 1; i < this->count; i++){
				node *tmp = this->head;
				this->head = this->head->link;
				delete tmp;
				tmp = NULL;
			}
			this->head = NULL;
			this->tail = NULL;
		}
		void add(int value){
			node *NewNode = new node(value);
			if(head == NULL){
				head = NewNode;
				tail = NewNode;
			}else{
				tail->link = NewNode;
				NewNode->plink = tail;
				tail = NewNode;
			}
			count++;
		}
		void add(int index, int value){
			node *ptemp, *temp, *newnode = new node(value);
			temp = head;
			ptemp = head;
			if(index <= count && index > 0){
				for(int i = 1;i < index-1; i++){
					ptemp = ptemp->link;
				}
				for(int i = 1;i <= index-1; i++){
					temp = temp->link;
				}
				if(index == 1){
					head = newnode;
					newnode->link = temp;
					temp->plink = newnode;
				}else{
					ptemp = temp->plink;
					ptemp->link = newnode;
					newnode->link = temp;
					temp->plink = newnode;
				}
				count++; 
			}else{
				cout << "Can't add." << endl;
			}
		}
		int get(int index){
			node  *temp = head;
			for(int i=1;i<count;i++){
				if(i == index){
					return temp->data;
					break;
				}
				temp = temp->link;
			}
		}
		void set(int index, int value){
			node  *temp = head;
			for(int i = 1;i < count; i++){
				if(index == i){
					temp->data = value;
					break;
				}
				temp = temp->link;
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
						if(temp == tail){
							tail = ptemp;
							tail->plink = NULL;
							delete temp;
						}else{
							ptemp->link = temp->link;
							ptemp->link->plink = ptemp;
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
		int size(){
			return count;
		}
		void show(){
			cout << "Value in LinkList : ";
			if(this->isEmpty()){
				cout << "No Data" << endl;
			}else{
				node *temp;
				temp = head;
				cout << temp->data << " ";
				for(int i = 1;i < count; i++){
					temp = temp->link;
					cout << temp->data << " ";
				}
			}
			cout << endl;
		}
		bool find(int data){
			node  *temp = head;
			for(int i = 1;i < count; i++){
				if(data == temp->data){
					return true;
					break;
				}
				temp=temp->link;
			}
			return false;
		}
		bool isEmpty(){
			if(count == 0){
				return true;
			}else{
				return false;
			}
		}
		void sort(){
		 	int value;
			node *temp, *ptemp;
			temp = head;
			temp = temp->link;
			for(int i = 1;i < count; i++){
				value = temp->data;
				ptemp = temp->plink;
				for(int j = i - 1;j >= 0; j--){
					if(value < ptemp->data){
						ptemp->link->data = ptemp->data;
						ptemp->data = value;
					}
					value = ptemp->data;
					ptemp = ptemp->plink;
				}
				temp = temp->link;
			}	
		}		
};
int main(){
	DbLinkedList Number;
	int menu;
	do{
		cout << "========MENU=======" << endl;
		cout << "= 1. Add          =" << endl;
		cout << "= 2. Add/Index    =" << endl;
		cout << "= 3. Get data     =" << endl;
		cout << "= 4. Set data     =" << endl;
		cout << "= 5. Remove data  =" << endl;
		cout << "= 6. Get size     =" << endl;
		cout << "= 7. Find data    =" << endl;
		cout << "= 8. Show         =" << endl;
		cout << "= 9. Sort         =" << endl;
		cout << "= 10. Exit         =" << endl;
		cout << "===================" << endl;
		cout << "Enter menu: ";
		cin >> menu;
		int value, index;
		if(menu == 1){
			cout << "Enter value: ";
			cin >> value;
			Number.add(value);
		}else if(menu == 2){
			cout << "Enter index/value: ";
			cin >> index >> value;
			Number.add(index, value);
		}else if(menu == 3){
			cout << "Enter index: ";
			cin >> index;
			cout << "Data is: " << Number.get(index) << endl;
		}else if(menu == 4){
			cout << "Enter index/value: ";
			cin >> index >> value;
			Number.set(index, value);
		}else if(menu == 5){
			cout << "Enter value: ";
			cin >> value;
			Number.remove(value);
		}else if(menu == 6){
			cout << "Size is: " << Number.size() << endl;
		}else if(menu == 7){
			cout << "Enter value: ";
			cin >> value;
			if(Number.find(value)){
				cout << "Have " << value << endl;
			}else{
				cout << "Don't have " << value << endl;
			}
		}else if(menu == 8){
			Number.show();
		}else if(menu == 9){
			Number.sort();
		}
	}while(menu != 10);
	return 0;
}
