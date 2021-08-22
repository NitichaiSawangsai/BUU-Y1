#include <iostream>
#include <string>
using namespace std;

typedef struct node{
	int data;
	node *next;
} node;

void print(node *h) {
	node *dummy;
	if(h != NULL){
		dummy = h;
		while(dummy != NULL) {
			cout << dummy->data << " " ;
			dummy = dummy->next;
		}
		cout << endl;
	}else{
		cout  << "list is empty" << endl;
	}
}


int main(){
	node *head = NULL, *tail = NULL;

	node *newnode = new node;
	newnode->data = 1;
	newnode->next  = NULL;

	head = newnode;
	tail = newnode;

	// insert head
	newnode = new node;
	newnode->data = 2;
	newnode->next  = NULL;

	newnode->next = head;
	head = newnode; 

	newnode = new node;
	newnode->data = 3;
	newnode->next  = NULL;
	newnode->next = head;
	head = newnode; 

	print(head);

	//insert center
	node *dummy, *tmp;
	newnode = new node;
	newnode->data = 4;
	newnode->next  = NULL;

	if(head->data == 2){
		dummy = head;
		tmp = dummy;
	}else{
		dummy = head;
		tmp = dummy;
		while(dummy != NULL){
			if(dummy->data == 2){
				break;
			}
			tmp = dummy;
			dummy = dummy->next;
		}
	}
	cout << "Temp = " << tmp->data << endl;

	newnode->next = tmp->next;
	tmp->next = newnode;





	print(head);
	//insert 




	return 0;
}
